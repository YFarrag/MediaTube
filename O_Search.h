#ifndef O_SEARCH_H
#define O_SEARCH_H

#include "Search.h"
#include <string>

class O_Search : virtual public Search {
  public:
    O_Search(const string& owner);
    virtual bool matches(const Media* m) const override;
    virtual void print(ostream& ost) const override;

  protected:
    string owner;
};

#endif
