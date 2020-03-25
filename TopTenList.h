//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"

using std::string;
using std::vector;

class TopTenList
{
  private:
    string _title;
    vector <Hyperlink> _list;
  public:
    TopTenList(string name);
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
    string get_title();
};

#endif
