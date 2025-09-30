#include "OorC_Search.h"

OorC_Search::OorC_Search(const string& o, const string& c)
  : O_Search(o), C_Search(c) {}

bool OorC_Search::matches(const Media* m) const {
  return m->getOwner() == owner || m->getCategory() == category;
}

void OorC_Search::print(ostream& ost) const {
  ost << "Searching for Media with owner: " << owner
      << " OR category: " << category;
}
