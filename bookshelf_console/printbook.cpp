#include "printbook.h"

printbook::printbook()
{
    name = "untitled";
    author = "NoName";
    pages = 0;
}
printbook::printbook(string name, string author, int pages)
{
this->name=name;
this->author=author;
this->pages=pages;
}
unsigned int printbook::getPages()
{
  return pages/16;
}
