#ifndef MEDIATUBE_H
#define MEDIATUBE_H

#include "Array.h"
#include "Channel.h"
#include "Search.h"
#include <string>

class MediaTube {
  public:
    void addChannel(Channel* channel);
    void addMedia(Media* media, const std::string& channelTitle);
    const Array<Channel*>& getChannels() const;
    Channel* getChannel(int index) const;
    Channel* getChannel(const std::string& title) const;
    void getMedia(const Search& search, Array<Media*>& results) const;

  private:
    Array<Channel*> channels;
};

#endif
