#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <iostream>
#include "Media.h"

using namespace std;

class MediaPlayer {
  public:
    virtual ~MediaPlayer() {}
    virtual void play(ostream& ost, const Media& m) const = 0;

    // operator<< to play media on player
    friend ostream& operator<<(MediaPlayer& player, const Media& m) {
      player.play(cout, m);
      return cout;
    }
};

#endif
