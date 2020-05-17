#include <QCoreApplication>
#include "bookshelf.h"
void print_info(){
    cout<<"Выберите действие"<<endl;
    cout<<"1:Добавить книгу"<<endl;
    cout<<"2:Вывести информацию на экран"<<endl;
    cout<<"3:Выход"<<endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    setlocale(LC_ALL,"rus");
    setlocale(LC_CTYPE, "");
    cout<<"123";
    bool exit = 0;//exit flag
   char com = 0;//command
   bookshelf bShelf;
   int size_x=20,size_y=10;
   printbook empty_book = printbook("Пусто","Пусто",0);
   //Заполнение шкафа пустыми объектами
   for (int i=0;i<size_y;i++){
       shelf shelf;
       for(int j=0;j<size_x;j++){
       shelf.addbook(empty_book);
   }
   bShelf.addshelf(shelf);
}
    while(!exit){
        print_info();
      cin >> com; //command read
      if(com==1){
      //add the book
      cout<<"Добавление книги"<<endl;
      cout<<"Введите название"<<endl;
      string name ="";
      cin>>name;
      cout<<"Введите имя автора"<<endl;
      string author="";
      cin>>author;
      cout<<"Кол-во страниц"<<endl;
      int pages;
      cin>>pages;
      cout<<"Укажите ID полки, ID позиции"<<endl;
      int shelf_id,pos_id;
      cin>>shelf_id>>pos_id;
      printbook book = printbook(name,author,pages);
      bShelf.setbook(shelf_id,pos_id,book);

     }else if(com==2){ //info layout
          bShelf.print();
          break;
      }else if(com==1){
          exit=1;
          break;
     }else{
          cout<<"Ошибка ввода команды"<<endl;



      }
    }
    return a.exec();
}
