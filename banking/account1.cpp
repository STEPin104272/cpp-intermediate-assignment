
Account::Account():custId(""),custName(""),bal(0),phone("")
{
}
Account::Account(std:: string Id, std::string name, double bal,std::string phone) : custId(id),custName(name),balance(bal),phone(phone)
{
}
Account::Account(int val):std::string m_Id(val),std::string m_Name(val), m_bal(val),m_phone(val);
{
}
std::string Account Id()
{
return Id;
}
std::string Account Name()
{
return Name;
}
double Account balance() const
{
return balance;
}
std::string Account phone()
{
return phone;
}
void Book::display() {
    std::cout << id << "," << Id<< "," 
      std::cout << Name << "," << Name<< "," 
        std::cout << balance << "," << balance<< "," 
          std::cout << phone << "," << phone << "," 
            
              }


