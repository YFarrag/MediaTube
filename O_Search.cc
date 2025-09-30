#include "O_Search.h"

O_Search::O_Search(const string& o) : owner(o) {}

bool O_Search::matches(const Media* m) const {
  return m->getOwner() == owner;
}

void O_Search::print(ostream& ost) const {
  ost << "Searching for Media with owner: " << owner;
}
