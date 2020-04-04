//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
  _list.resize(10);
}

TopTenList::TopTenList(string title)
{
  _title = title;
  _list.resize(10);
}

void TopTenList::display_forward()
{
  int i;
  for(i = 0; i < _list.size(); i++)
  {
    cout << i+1 << ". ";
    cout << _list[i].text << ", " << _list[i].url << endl;
  }
}

void TopTenList::display_backward()
{
  int i;
  for(i = _list.size()-1; i >= 0; i--)
  {
    cout << i+1 << ". ";
    cout << _list[i].text << ", " << _list[i].url << endl;
  }
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list[index-1];
}

string TopTenList::get_title()
{
  return _title;
}
