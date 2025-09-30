#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include "AudioPlayer.h"
#include <fstream>

class VideoPlayer : public AudioPlayer {
  public:
    virtual void play(ostream& ost, const Media& m) const override;
};

#endif
