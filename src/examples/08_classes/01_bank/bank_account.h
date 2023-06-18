//bank_account.h
#include <iostream>

class BankAccount
{

public:
    BankAccount(){std::cout<<"Using default constructor";}//default constructor
    BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor";};
    int get_balance() const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private:
    int balance{0};
};