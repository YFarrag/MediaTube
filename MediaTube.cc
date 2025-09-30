#include "MediaTube.h"
#include <iostream>
#include <cstdlib>

void MediaTube::addChannel(Channel* channel) {
  channels += channel;
}

void MediaTube::addMedia(Media* media, const std::string& channelTitle) {
  for (int i = 0; i < channels.getSize(); ++i) {
    if (channels[i]->equals(channelTitle)) {
      channels[i]->add(media);
      return;
    }
  }
  std::cerr << "Error: Channel \"" << channelTitle << "\" not found." << std::endl;
}

const Array<Channel*>& MediaTube::getChannels() const {
  return channels;
}

Channel* MediaTube::getChannel(int index) const {
  if (index < 0 || index >= channels.getSize()) {
    std::cerr << "Error: Channel index out of bounds." << std::endl;
    exit(1);
  }
  return channels[index];
}

Channel* MediaTube::getChannel(const std::string& title) const {
  for (int i = 0; i < channels.getSize(); ++i) {
    if (channels[i]->equals(title)) {
      return channels[i];
    }
  }
  std::cerr << "Error: Channel \"" << title << "\" not found." << std::endl;
  exit(1);
}

void MediaTube::getMedia(const Search& search, Array<Media*>& results) const {
  for (int i = 0; i < channels.getSize(); ++i) {
    Channel* ch = channels[i];
    for (int j = 0; j < ch->getSize(); ++j) {
      Media* m = ch->get(j);
      if (search.matches(m)) {
        results += m;
      }
    }
  }
}
