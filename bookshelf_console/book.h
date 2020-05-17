#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
using namespace std;
class book
{
protected:
    string name; //book name
    string author; //book author
    unsigned int pages; //page count
public:
    book();
    book(string name,string author,unsigned int pages);
unsigned int getPages(); //get page count
    string getAuthor(); //get author name
string getName(); //get book name
void setName(string name); //set book name
void setAuthor(string author); //set book author
void setPages(unsigned int pages); //set page count
void print(); //layout on screen
};

#endif // BOOK_H
