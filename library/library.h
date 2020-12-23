#ifndef __LIBRARY_H
#define __LIBRARY_H

#include "book.h"
#include "Book.cpp"
class Library {
  std::list<Book> books;
  public:
  void addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages);
  void removeBookByISBN(int isbn);
  void displayAll();
  Book* findBookByISBN(int isbn);
  double findAveragePrice();
  Book& findBookwithMaxPages();
  int count() { return books.size(); }
  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
};

void Library::addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages) {
    //Book temp(isbn, title, author, year, price, pages);
    //books.push_back(temp);                            
    
    //books.push_back(Book(isbn, title, author, year, price, pages));
    
    books.emplace_back(isbn, title, author, year, price, pages);
}
void Library::displayAll() {
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}
Book* Library::findBookbyISBN(int keyIsbn) {
   for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return &(*iter);
   else
     return nullptr;
}
bool Library::isBookFound(int keyIsbn) {
   for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return true;;
   else
     return false;
}
void Library::removeBookbyISBN(int keyIsbn) {
   for(iter=books.begin(); iter!=books.end(); ++iter)
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     books.erase(iter);
}
double Library::findAveragePrice() {
  double totalPrice=0;
  for(iter=books.begin(); iter!=books.end(); ++iter)
     totalPrice += iter->price();
  return totalPrice/books.size();
}
int Library::countBooksInPriceRange(int minVal, int maxVal)
 {
 for(iter=books.begin(); iter!=books.end(); ++iter)
 {
 if(books.price(iter)>=minVal && books.price(iter)<=maxVal)
 }
 {
 count++
 }
 return count();
}
Book& Library::findBookwithMaxPages() {
  std::list<Book> iter = books.begin()
  auto maxIter=iter;
  double maxPrice=iter->price();
  ++iter;
  for(;iter!=books.end(); ++iter)
    if(iter->price() > maxPrice) {
        maxPrice = iter->price();
        maxIter = iter;
    }
    return *maxIter;
}
#endif
