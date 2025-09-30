#ifndef C_SEARCH_H
#define C_SEARCH_H

#include "Search.h"
#include <string>

class C_Search : virtual public Search {
  public:
    C_Search(const string& category);
    virtual bool matches(const Media* m) const override;
    virtual void print(ostream& ost) const override;

  protected:
    string category;
};

#endif
