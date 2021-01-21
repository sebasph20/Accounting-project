#include <string>
#include "Account.h"

Account::Account() 
	: name{ "None" }, balance {0}, savings {0}{

	
}

Account::Account(string name_val, double balance_val, double savings_val)
	: name{ name_val }, balance{ balance_val }, savings{ savings_val }{


}

void Account::set_account_name(string new_name) {

	name = new_name;
}

void Account::add_balance(double a_balance) {

	balance = balance + a_balance;
}

void Account::add_savings(double a_savings) {

	savings = savings + a_savings;
}

void Account::withdraw_balance(double w_balance) {

	balance = balance - w_balance;
}

void Account::withdraw_savings(double w_savings) {

	balance = balance - w_savings;
}

string Account::show_name() {

	return name;
}
double Account::show_balance() {

	return balance;

}
double Account::show_savings() {

	return savings;
}

