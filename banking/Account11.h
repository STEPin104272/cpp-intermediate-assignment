#ifndef __ACCOUNT1_H
#define __ACCOUNT1_H

#include "Account1.h"
#include "Account1.cpp"
class Account {
  std::list<Account> Account;
  public:
  void addAccount(std::string Id, std::string Name,double balance std::string phone); 
                           
  void removeAccountById(std::string Id);
  void displayAll();
  Account* findAccountById(std::string Id);
  double findAverageBalance();
  Account& findAccountWithMaxBalance();
  int count() { return Account.size(); }
  
};
void addAccount(std::string Id, std::string Name,double balance std::string phone); 
{
Account.emplace_back(id, name, balance, phone);
}
void Account::displayAll() 
{
   std::list<Account>::iterator iter;
   for(iter=Account.begin(); iter!=Account.end(); ++iter)
       iter->display();
 }
 Account* Account::findAccountById(int keyId) {
   for(iter=Account.begin(); iter!=Account.end(); ++iter)
       if(iter->id() == keyId)
          break;
   }
   if(iter!=Account.end())
     return &(*iter);
   else
     return nullptr;
}
      void Account::removeAccountById(int keyId) {
   for(iter=Account.begin(); iter!=Account.end(); ++iter)
       if(iter->id() == keyId)
          break;
   }
   if(iter!=Account.end())
     Account.erase(iter);
}
double Account::findAverageBalance() {
  double totalBalance=0;
  for(iter=Account.begin(); iter!=Account.end(); ++iter)
     totalBalance += iter->Balance();
  return totalBalance/Balance.size();
}

Account&  Account::findAccountwithMaxBalance() {
  std::list<Account> iter = Account.begin()
  auto maxIter=iter;
  double maxBalance=iter->Balance();
  ++iter;
  for( iter=Account.begin();iter!=Account.end(); ++iter)
    if(iter->Balance() > maxBalance) {
        maxbalance = iter->Balance();
        maxIter = iter;
    }
    return *maxIter;
}
#endif 
