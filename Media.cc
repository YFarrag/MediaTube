#include "Media.h"

Media::Media(const string& channelTitle, const string& owner, const string& mediaTitle,
             const string& category, const string& audioContent, const string& videoFile)
  : channelTitle(channelTitle), owner(owner), mediaTitle(mediaTitle),
    category(category), audioContent(audioContent), videoFile(videoFile) {}

const string& Media::getChannelTitle() const {
  return channelTitle;
}

const string& Media::getOwner() const {
  return owner;
}

const string& Media::getMediaTitle() const {
  return mediaTitle;
}

const string& Media::getCategory() const {
  return category;
}

const string& Media::getAudioContent() const {
  return audioContent;
}

const string& Media::getVideoFile() const {
  return videoFile;
}

void Media::print(ostream& ost) const {
  ost << "Channel: " << channelTitle
      << " | Owner: " << owner
      << " | Title: " << mediaTitle
      << " | Category: " << category;
}

ostream& operator<<(ostream& ost, const Media& m) {
  m.print(ost);
  return ost;
}
