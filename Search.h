#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include "Media.h"

using namespace std;

class Search {
  public:
    virtual ~Search() {}
    virtual bool matches(const Media*) const = 0;
    virtual void print(ostream& ost) const = 0;

    friend ostream& operator<<(ostream& ost, const Search& s) {
      s.print(ost);
      return ost;
    }
};

#endif
