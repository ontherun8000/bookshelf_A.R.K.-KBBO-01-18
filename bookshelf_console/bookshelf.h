#ifndef BOOKSHELF_H
#define BOOKSHELF_H
#include "shelf.h"

using namespace std;

class bookshelf
{
    vector<shelf> shelfs;
public:
    bookshelf();
    bookshelf(vector<shelf> bshelf);
    void setshelf(unsigned int id,shelf shelf);
    void addshelf(shelf shelf);
    printbook getbook(unsigned int shelf_id, unsigned int id);
    void setbook(unsigned int shelf_id, unsigned int id, printbook book);
    void print();
};

#endif // BOOKSHELF_H
