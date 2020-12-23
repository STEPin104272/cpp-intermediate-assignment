#include "Book.h"
Book::Book(): isbn(""),title(""),author(""),year(0),price(0),pages(0)
{
}
Book::Book(int val):std::string m_isbn(val),std::string m_title(val),std::string m_author(val),m_year(val),m_price(val),m_pages(val);
{
}
std::String Book::isbn()
{
return isbn;
}
std::String Book::title()
{
return title;
}
std::String Book::author()
{
return author;
}
int Book::year() const 
{
    return year;
 }
 double Book::price() const 
{
    return price;
 }
    int Book::pages() const 
{
    return pages;
 }
 void Book::display() {
    std::cout << isbn << "," << isbn<< "," 
      std::cout << title<< "," << title<< "," 
        std::cout << author << "," << author<< "," 
          std::cout << year << "," << year<< "," 
            std::cout << price << "," << price<< ","
              std::cout << pages << "," << pages<< ","  
              }


