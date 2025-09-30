#include "VideoPlayer.h"

void VideoPlayer::play(ostream& ost, const Media& m) const {
  // Play audio first
  AudioPlayer::play(ost, m);

  // Then read video file and print it
  ifstream file(m.getVideoFile());
  if (!file) {
    ost << "[Error: Could not open video file: " << m.getVideoFile() << "]" << endl;
    return;
  }

  string line;
  while (getline(file, line)) {
    ost << line << endl;
  }

  file.close();
}
