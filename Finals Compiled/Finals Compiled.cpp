#include <iostream>
#include <string.h>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
#include "buses.h"

using namespace std;

int main()
{

	string place, time, name;
	int seat, ogprice = 105;

	string destination();
	string departure();
	int cubao9am();
	int cubao3pm();
	int gp9am();
	int gp3pm();
	float price(int price);
	void receipt(string name, string place, string time, int seat, int price);
	void schedule();
	int admin();

	int function;

	do {

	mainmenu:
		cout << "------------------------------------" << endl;
		cout << setw(30) << "Bus Ko Po Transit Inc." << endl;
		cout << "------------------------------------" << endl;
		cout << setw(23) << "[1] Buy Ticket" << endl;
		cout << setw(27) << "[2] Check Schedule" << endl;
		cout << setw(18) << "[3] Admin" << endl;
		cout << "------------------------------------\n" << endl;
		cout << "Select Function: ", cin >> function;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(512, '\n');
			cout << "\nPlease enter [1] or [2] or [3]" << endl;
			cout << "\nPress Enter to continue...";
			cin.get();
			system("cls");
			goto mainmenu;
		}

		switch (function) {
		case 1:
			cout << "Please Enter Your Name: ", cin >> name;
			system("cls");
			place = destination();
			system("cls");
			time = departure();

			if (place == "Cubao" && time == "9:00 AM") {
				system("cls");
				seat = cubao9am();
			}
			else if (place == "Cubao" && time == "3:00 PM") {
				system("cls");
				seat = cubao3pm();
			}
			else if (place == "Grace Park" && time == "9:00 AM") {
				system("cls");
				seat = gp9am();
			}
			else if (place == "Grace Park" && time == "3:00 PM") {
				system("cls");
				seat = gp3pm();
			}
			break;

		case 2: system("CLS");
			schedule();
			cin.get();
			system("CLS");
			goto mainmenu;
			break;

		case 3: system("CLS");
			ogprice = admin();
			system("CLS");
			goto mainmenu;
			break;

		default: cout << "\nPlease choose among [1] [2] [3]\n\n";
			cin.get();
			goto mainmenu;
		}

		system("cls");
		ogprice = price(ogprice);

		system("cls");
		receipt(name, place, time, seat, ogprice);
		cin.get();
		system("cls");

	} while (true);


}