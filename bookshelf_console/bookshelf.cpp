#include "bookshelf.h"


bookshelf::bookshelf()
{
   //
}
//copy constructor
bookshelf::bookshelf(vector<shelf> bshelf){
     shelfs = bshelf;
}
//shelf replace
void bookshelf::setshelf(unsigned int id,shelf shelf){
   //data check
    if(id<shelfs.size()){
        //replacment
        shelfs[id]=shelf;
    }else{
            cout<<"id error!"<<endl;

}
}
    //shelfs adding
    void bookshelf::addshelf(shelf shelf){
        shelfs.push_back(shelf);


    }
    //get book
    printbook bookshelf::getbook(unsigned int shelf_id, unsigned int id){
        //data check
         if(shelf_id<shelfs.size()){
             return shelfs[shelf_id].getbook(id);
    }else{
             cout<<"Error: Shelf ID"<<id<<"is invalid"<<endl;
             printbook b = printbook();
             return b;
         }
    }
         //replace book
         void bookshelf::setbook(unsigned int shelf_id, unsigned int id, printbook book){
             if(shelf_id<shelfs.size()){
                 shelfs[shelf_id].setbook(id,book);

         }else{
               cout<<"Shelf id error!"<<endl;
             }
         }
         void bookshelf::print(){
             printf("Bookshelf: %d shelfs \n",shelfs.size());
             cout<<"== contents =="<<endl;
             for(int i=0;i<shelfs.size();i++){
                 cout<< "#"<<i+1 <<": ";
                 shelfs[i].print();

             }
         }
