#include "C_Search.h"

C_Search::C_Search(const string& c) : category(c) {}

bool C_Search::matches(const Media* m) const {
  return m->getCategory() == category;
}

void C_Search::print(ostream& ost) const {
  ost << "Searching for Media with category: " << category;
}
