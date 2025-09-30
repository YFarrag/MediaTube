#include "Channel.h"

Channel::Channel(const string& title, const string& owner)
  : title(title), owner(owner) {}

bool Channel::equals(const string& t) const {
  return title == t;
}

Media* Channel::get(int index) const {
  if (index < 0 || index >= mediaList.getSize()) {
    cerr << "Channel media index out of bounds" << endl;
    exit(1);
  }
  return mediaList[index];
}

int Channel::getSize() const {
  return mediaList.getSize();
}

void Channel::add(Media* m) {
  mediaList += m;
}

void Channel::print(ostream& ost) const {
  ost << "Channel Title: " << title << " | Owner: " << owner;
}

void Channel::printWithMedia(ostream& ost) const {
  print(ost);
  ost << "\nMedia List:\n";
  for (int i = 0; i < mediaList.getSize(); ++i) {
    ost << "\t" << *mediaList[i] << "\n";
  }
}

ostream& operator<<(ostream& ost, const Channel& c) {
  c.print(ost);
  return ost;
}
