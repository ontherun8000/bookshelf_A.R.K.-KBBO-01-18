#ifndef SHELF_H
#define SHELF_H
#include <vector>
#include "printbook.h"
#include <iostream>
using namespace std;
class shelf
{
    vector<printbook> book_list;
public:
    shelf();
    shelf(vector<printbook> books);
    void addbook(printbook book);
    printbook getbook(unsigned int id);
    void setbook(unsigned int id,printbook book);
    void print();
};

#endif // SHELF_H
