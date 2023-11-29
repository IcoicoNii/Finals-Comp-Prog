using namespace std;

string departure() {

	int time;
dept:

	cout << "------------------------------------" << endl;
	cout << setw(25) << "DEPARTURE TIME" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(27) << "[1] 9:00 AM (BUS 1)" << endl;
	cout << setw(27) << "[2] 3:00 PM (BUS 2)" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Select time: ", cin >> time;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease enter [1] or [2]" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto dept;
	}

	switch (time) {
	case 1: return "9:00 AM";
		break;

	case 2: return "3:00 PM";
		break;

	default: cout << "\nPlease choose between [1] or [2]\n" << endl;
		cin.get();
		goto dept;
		break;
	}
}

string destination() {

	string place;
	int destination;
	string cubao, gp;

repeat:

	cout << "------------------------------------" << endl;
	cout << setw(23) << "DESTINATIONS" << endl;
	cout << "------------------------------------" << endl;

	cout << setw(20) << "[1] Cubao" << endl;
	cout << setw(25) << "[2] Grace Park" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Select Destination: ", cin >> destination;

	cubao = "Cubao";
	gp = "Grace Park";

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease enter [1] or [2]" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto repeat;
	}

	switch (destination) {
	case 1: return cubao;
		break;
	case 2: return gp;
		break;
	default: cout << "\nPlease choose between [1] or [2]\n" << endl;
		cin.get();

		goto repeat;
	}



}

void receipt(string name, string place, string time, int seat, int price) {

	string type;

	cout << "------------------------------------" << endl;
	cout << setw(30) << "Bus Ko Po Transit Inc." << endl;
	cout << setw(28) << "TRANSACTION SUMMARY" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Ticket Buyer: " << setw(21) << name << endl;
	cout << "Destination: " << setw(22) << place << endl;
	cout << "Departure Time: " << setw(19) << time << endl;
	cout << "Seat: " << setw(29) << seat << endl;

	if (price == 84) {
		type = "Student/PWD/Senior";
	}
	else {
		type = "Regular";
	}

	cout << "Passenger Type: " << setw(19) << type << endl;
	cout << "Price: " << setw(28) << price << endl;

	cout << '\n' << setw(31) << "Please present your ID and" << endl;
	cout << setw(33) << "this receipt to the cashier.\n" << endl;
	cout << setw(30) << "Your reference number is" << endl;
	cout << setw(19) << rand() % 900 + 100 << endl;

	cout << "------------------------------------" << endl;
	cout << setw(32) << "Press Enter To Continue..." << endl;
	cin.get();

	return;
}

void schedule() {

	cout << "------------------------------------" << endl;
	cout << setw(29) << "Bus Ko Po Transit Inc." << endl;
	cout << "------------------------------------" << endl;
	cout << setw(26) << "SCHEDULE OF TRIPS" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(21) << "Cubao\n" << endl;
	cout << setw(25) << "(BUS 1) 9:00 AM" << endl;
	cout << setw(25) << "(BUS 2) 3:00 PM" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(23) << "Grace Park\n" << endl;
	cout << setw(25) << "(BUS 1) 9:00 AM" << endl;
	cout << setw(25) << "(BUS 2) 3:00 PM" << endl;
	cout << "------------------------------------\n" << endl;
	cout << setw(32) << "Press Enter to go back to main menu..." << endl;
	cin.get();
	return;
}

int admin() {

	int id, idrecord = 123, tries = 3, admin_function, price{};
	string pass, emppass = "pass";

	cout << "------------------------------------" << endl;
	cout << setw(30) << "Bus Ko Po Transit Inc." << endl;
	cout << "------------------------------------" << endl;
	cout << setw(23) << "Admin Login" << endl;
	cout << "------------------------------------" << endl;
	do {
		cout << "Enter Employee ID: ", cin >> id;
		cout << "Enter Password: ", cin >> pass;
		cout << "------------------------------------" << endl;
		if ((id == idrecord) && (pass == emppass))
		{
			tries = 0;
			cout << setw(25) << "[1] Update Prices" << endl;
			cout << setw(30) << "[2] Back to Main Menu\n" << endl;
			cout << "Enter Function: ", cin >> admin_function;

			switch (admin_function) {
			case 1: cout << "\nEnter Updated Original Price: ", cin >> price;
				break;
			case 2: system("CLS"); return price;
				break;
			}
		}
		else
		{
			cout << setw(22) << "Error!\n" << endl;

			tries--;
		}

		if (tries == 0) {
			cout << setw(35) << "Error, going back to main menu..." << endl;
			cin.get();
			return price;
		}
	} while (tries > 0);

	return price;

}

float price(int price)
{
	int type;
repeat:
	cout << "------------------------------------" << endl;
	cout << setw(24) << "Passenger Type" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(23) << "[1] Regular" << endl;
	cout << setw(34) << "[2] Student, PWD, Senior Citizen" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Select Passenger Type: ", cin >> type;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease Select [1] or [2]" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto repeat;
	}

	switch (type) {
	case 1: return price;
		break;

	case 2: return price - (price * 0.2);
		break;
	default: cout << "\nPlease select [1] or [2]\n\n"; goto repeat;
		break;
	}

	return 0;
}