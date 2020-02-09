#include <iostream>
#include <string>

class BankAccount
{
  public:
    int number;
    std::string owner;
    double funds;
};

int main(){
    // TODO: instantiate and output a bank account
    BankAccount account;
    account.number = 123456789;
    account.owner = "David Silver";
    account.funds   = 1000000.01;
        
    std::cout << "Account Information\n";
    std::cout << "-------------------\n";
    std::cout << "ID: " << account.number << "\n";
    std::cout << "Owner: " << account.owner << "\n";
    std::cout << "Funds: $" << account.funds << "\n";
}