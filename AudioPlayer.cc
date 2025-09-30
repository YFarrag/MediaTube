#include "AudioPlayer.h"

void AudioPlayer::play(ostream& ost, const Media& m) const {
  ost << m.getAudioContent() << endl;
}
