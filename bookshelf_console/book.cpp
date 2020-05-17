#include "book.h"

book::book()
{
name = "untitled";
author = "NoName";
pages = 0;
}

book::book(string name,string author,unsigned int pages)
{
this->name = name;
this->author = author;
this->pages = pages;
}
unsigned int book::getPages(){
    return pages;
}
string book::getAuthor(){
    return author;
}
string book::getName(){
    return name;
}
void book::setName(string name){
this->name=name;
}
void book::setAuthor(string author){
    this->author=author;
}
void book::setPages(unsigned int pages){
    this->pages=pages;
}
void book::print(){
    cout << "book: " <<name<<", Author: "
         <<author << ", pages: "<<pages<<endl;
}
