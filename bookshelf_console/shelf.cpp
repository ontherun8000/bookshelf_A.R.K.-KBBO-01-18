#include "shelf.h"

shelf::shelf()
{

}
shelf::shelf(vector<printbook> books){
    book_list = books;
}
void shelf::addbook(printbook book){
    book_list.push_back(book);
}
printbook shelf::getbook(unsigned int id){
    if(id<book_list.size()){
        return book_list [id];
    }else{
        cout<<"Error: ID"<<id<<"is invalid"<<endl;
        printbook b = printbook();
        return b;
    }
}
void shelf::setbook(unsigned int id,printbook book){
    if(id<book_list.size()){
        book_list [id] = book;
}else{
    cout<<"Error: ID"<<id<<"is invalid"<<endl;
}
}
    void shelf::print(){
        for(int i=0; i<book_list.size();i++){
            cout<<"Book #"<<i+1 <<": ";
            book_list[i].print();
        }
    }
