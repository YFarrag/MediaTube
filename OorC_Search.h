#ifndef OORC_SEARCH_H
#define OORC_SEARCH_H

#include "O_Search.h"
#include "C_Search.h"

class OorC_Search : public O_Search, public C_Search {
  public:
    OorC_Search(const string& owner, const string& category);
    virtual bool matches(const Media* m) const override;
    virtual void print(ostream& ost) const override;
};

#endif
