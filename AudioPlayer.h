#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include "MediaPlayer.h"

class AudioPlayer : public MediaPlayer {
  public:
    virtual void play(ostream& ost, const Media& m) const override;
};

#endif
