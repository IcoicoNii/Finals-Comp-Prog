
int cubao3pm() {

	int bus1, selected;
	string name;
	static bool seatbus1[31] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };

seats:
	cout << "------------------------------------" << endl;
	cout << setw(25) << "3 PM Departure" << endl;
	cout << setw(25) << "Bound to Cubao" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(25) << "BUS 2 SEATS\n" << endl;

	for (bus1 = 1; bus1 <= 30; bus1++) {

		if (seatbus1[bus1] == true) {
			if (bus1 <= 9) {
				cout << "[ " << "x" << "]	";
			}
			else {
				if (bus1 >= 10) {
					cout << "[" << " x" << "]	";
				}
			}
		}
		else {
			if (bus1 <= 9) {
				cout << "[ " << bus1 << "]	";
			}
			else {
				cout << "[" << bus1 << "]	";
			}
		}
		if (bus1 % 5 == 0) {
			cout << "\n";
		}

		if (bus1 == 31) {
			continue;
		}
	}

error:
	cout << "\nPlease Select a Seat: ", cin >> selected;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease Select a Seat Shown on the Screen" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto seats;
	}


	if (selected > 30) {
		cout << "\nError Please Take a Seat Shown on the Screen\n" << endl;
		cin.get();
		goto error;
	}

	if (seatbus1[selected] == true) {
		cout << "\nSeat " << selected << " is Taken, Please Select a Vacant Seat\n" << endl;
		cin.get();
		goto error;
	}

	seatbus1[selected] = true;

	cout << "\nYou have taken the seat " << selected << endl;
	cin.get();
	return selected;
}


int cubao9am() {


	int bus1, selected;
	string name;
	static bool seatbus1[31] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };

seats:
	cout << "------------------------------------" << endl;
	cout << setw(25) << "9 AM Departure" << endl;
	cout << setw(25) << "Bound to Cubao" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(25) << "BUS 1 SEATS\n" << endl;

	for (bus1 = 1; bus1 <= 30; bus1++) {

		if (seatbus1[bus1] == true) {
			if (bus1 <= 9) {
				cout << "[ " << "x" << "]	";
			}
			else {
				if (bus1 >= 10) {
					cout << "[" << " x" << "]	";
				}
			}
		}
		else {
			if (bus1 <= 9) {
				cout << "[ " << bus1 << "]	";
			}
			else {
				cout << "[" << bus1 << "]	";
			}
		}
		if (bus1 % 5 == 0) {
			cout << "\n";
		}

		if (bus1 == 31) {
			continue;
		}
	}

error:
	cout << "\nPlease Select a Seat: ", cin >> selected;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease Select a Seat Shown on the Screen" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto seats;
	}


	if (selected > 30) {
		cout << "\nError Please Take a Seat Shown on the Screen\n" << endl;
		cin.get();
		goto error;
	}

	if (seatbus1[selected] == true) {
		cout << "\nSeat " << selected << " is Taken, Please Select a Vacant Seat\n" << endl;
		cin.get();
		goto error;
	}

	seatbus1[selected] = true;

	cout << "\nYou have taken the seat " << selected << endl;
	cin.get();

	return selected;
}


int gp3pm() {

	int bus1, selected;
	string name;
	static bool seatbus1[31] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };

seats:
	cout << "------------------------------------" << endl;
	cout << setw(25) << "3 PM Departure" << endl;
	cout << setw(28) << "Bound to Grace Park" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(25) << "BUS 2 SEATS\n" << endl;

	for (bus1 = 1; bus1 <= 30; bus1++) {

		if (seatbus1[bus1] == true) {
			if (bus1 <= 9) {
				cout << "[ " << "x" << "]	";
			}
			else {
				if (bus1 >= 10) {
					cout << "[" << " x" << "]	";
				}
			}
		}
		else {
			if (bus1 <= 9) {
				cout << "[ " << bus1 << "]	";
			}
			else {
				cout << "[" << bus1 << "]	";
			}
		}
		if (bus1 % 5 == 0) {
			cout << "\n";
		}

		if (bus1 == 31) {
			continue;
		}
	}

error:
	cout << "\nPlease Select a Seat: ", cin >> selected;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease Select a Seat Shown on the Screen" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto seats;
	}


	if (selected > 30) {
		cout << "\nError Please Take a Seat Shown on the Screen\n" << endl;
		goto error;
	}

	if (seatbus1[selected] == true) {
		cout << "\nSeat " << selected << " is Taken, Please Select a Vacant Seat\n" << endl;
		goto error;
	}

	seatbus1[selected] = true;

	cout << "\nYou have taken the seat " << selected << endl;

	return selected;
}


int gp9am() {

	int bus1, selected;
	string name;
	static bool seatbus1[31] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };

seats:
	cout << "------------------------------------" << endl;
	cout << setw(25) << "9 AM Departure" << endl;
	cout << setw(28) << "Bound to Grace Park" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(25) << "BUS 1 SEATS\n" << endl;

	for (bus1 = 1; bus1 <= 30; bus1++) {

		if (seatbus1[bus1] == true) {
			if (bus1 <= 9) {
				cout << "[ " << "x" << "]	";
			}
			else {
				if (bus1 >= 10) {
					cout << "[" << " x" << "]	";
				}
			}
		}
		else {
			if (bus1 <= 9) {
				cout << "[ " << bus1 << "]	";
			}
			else {
				cout << "[" << bus1 << "]	";
			}
		}
		if (bus1 % 5 == 0) {
			cout << "\n";
		}

		if (bus1 == 31) {
			continue;
		}
	}

error:
	cout << "\nPlease Select a Seat: ", cin >> selected;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease Select a Seat Shown on the Screen" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto seats;
	}


	if (selected > 30) {
		cout << "\nError! Please Take a Seat Shown on the Screen\n" << endl;
		goto error;
	}

	if (seatbus1[selected] == true) {
		cout << "\nSeat " << selected << " is Taken, Please Select a Vacant Seat\n" << endl;
		goto error;
	}

	seatbus1[selected] = true;

	cout << "\nYou have taken the seat " << selected << endl;

	return selected;
}
