
include <iostream>
#include "library.h"
#include "book.h"
#include "book.cpp"
using namespace std

int main()
 {
 Library L1;
 {
 L1.addbook( 1000,"abc","def",2020,199.0,300);
 L1.addbook( 2000,"bvghb","pojg",2021,234.0,400);
 L1.addbook( 3000,"abcnhj","defolkm",2022,678.0,500);
 L1.displayAll();
 //L1.findBookbyISBN();
 cout<<L1.isBookFound(1000);
 L1.removeBookbyISBN();
 L1.displayAll();
 cout<<L1.findAveragePrice();

  return 0;
  }
