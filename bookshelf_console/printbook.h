#ifndef PRINTBOOK_H
#define PRINTBOOK_H
#include<stdio.h>
#include <string>
#include "book.h"

class printbook : public book
{
public:
    printbook();
    printbook(string name, string author, int pages);
    unsigned int getPages();
};

#endif // PRINTBOOK_H
