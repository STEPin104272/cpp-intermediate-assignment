include <iostream>
#include "Account1.h"
#include "Account11.h"
#include "Account1.cpp"
using namespace std

int main()
 {
 Account A1;
 {
 A1.addaccount( 1000,"abc",1234,"909090");
 A1.addaccount( 2000,"bvghb",2021,"400");
 A1.addaccount( 3000,"abcnhj",2022,"500");
 A1.displayAll();
 //A1.findAccountyId();
 cout<<A1.isAccountFound(1000);
 A1.removeAccountbyId();
 A1.displayAll();
 cout<<A1.findAverageBalance();

  return 0;
  }
