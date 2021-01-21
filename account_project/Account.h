#pragma once
#include <string>
using namespace std;

class Account {

	private:

	string name;
	double balance;
	double savings;
	

	public:

	Account();
	Account(string name_val, double balance_val, double savings_val);

	void set_account_name(string new_name);
	void add_balance(double a_balance);
	void add_savings(double a_savings);
	void withdraw_balance(double w_balance);
	void withdraw_savings(double w_savings);


	string show_name();
	double show_balance();
	double show_savings();














};
