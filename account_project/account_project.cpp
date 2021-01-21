#include <iostream>
#include "Account.h"
#include <string>

using namespace std;

void menu_options(Account& accnt, int option_num);

int main()
{
 
	Account sebastian{ "Sebastian", 0 ,0 };
	int option_num;

	cout << "\n\nPlease select one of the options:" << endl;
	cout << "1 - Deposit money --> balance" << endl;
	cout << "2 - Withdraw money --> balance" << endl;
	cout << "3 - Deposit money --> savings" << endl;
	cout << "4 - Withdraw money --> savings" << endl;
	cout << "5 - Show balance" << endl;
	cout << "6 - Show savings" << endl;
	cout << "0 - Press 0 to exit program\n" << endl;

	cout << "Please choose an option..." << endl;
	cin >> option_num;

	while (option_num != 0) {
		
		menu_options(sebastian, option_num);

		cout << "\n\nAction completed." << endl;
		
		
		cout << "\n\nPlease select one of the options:" << endl;
		cout << "1 - Deposit money --> balance" << endl;
		cout << "2 - Withdraw money --> balance" << endl;
		cout << "3 - Deposit money --> savings" << endl;
		cout << "4 - Withdraw money --> savings" << endl;
		cout << "5 - Show balance" << endl;
		cout << "6 - Show savings" << endl;
		cout << "0 - Press 0 to exit program\n" << endl;

		cout << "Please choose an option..." << endl;
		cin >> option_num;

	}

	cout << "\n\nThank you for using our program! Have a good day!\n\n";

}

void menu_options(Account& accnt, int option_num) {

	double a_amount;
	double w_amount;

	switch (option_num) {

	case 1:

		cout << "How much money will you deposit?" << endl;
		cin >> a_amount;
		accnt.add_balance(a_amount);
		cout << "Account balance is now:" << endl;
		cout << "$ " << accnt.show_balance();
		break;

	case 2:

		cout << "How much money will you withdraw?" << endl;
		cin >> w_amount;
		accnt.withdraw_balance(w_amount);
		cout << "Account balance is now:" << endl;
		cout << "$ " << accnt.show_balance();
		break;

	case 3:

		cout << "How much money will you deposit?" << endl;
		cin >> a_amount;
		accnt.add_savings(a_amount);
		cout << "Account savings is now:" << endl;
		cout << "$ " << accnt.show_savings();
		break;

	case 4:

		cout << "How much money will you withdraw?" << endl;
		cin >> w_amount;
		accnt.withdraw_savings(w_amount);
		cout << "Account savings is now:" << endl;
		cout << "$ " << accnt.show_savings();
		break;

	case 5:
		cout << "Amount in balance is:" << "$" << accnt.show_balance();
		break;

	case 6:

		cout << "Amount in balance is:" << "$ " << accnt.show_savings();
		break;




	}
}