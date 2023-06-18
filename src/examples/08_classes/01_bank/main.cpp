#include "bank_account.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
	BankAccount account;
	auto amount = 0;
	
	cout<<"\nBalance: "<<account.get_balance()<<"\n";

	cout<<"Enter an amount: ";
	cin>>amount;

	cout<<"Deposit: ";
	account.deposit(amount);

	cout<<"\nBalance: "<<account.get_balance()<<"\n";


	return 0;
}