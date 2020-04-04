//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"
#include "IDirectionable.h"

using std::string;
using std::vector;

class TopTenList : public IDirectionable
{
  private:
    string _title;
    vector <Hyperlink> _list;
  public:
    TopTenList();
    TopTenList(string name);
    void display_forward();
    void display_backward();
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
    string get_title();
};

#endif
