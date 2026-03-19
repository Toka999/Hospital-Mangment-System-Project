#include "Financial_Record.h"
#include<iostream>
void Financial_Record::set_Financial_Record(string type, double dep) {
	total_deposite = dep;
	patient_type = type;
	if (patient_type == "O.P.D.") { total_charge = 200; }
	else if (patient_type == "emergency") { total_charge = 900; }
	else if (patient_type == "emergency and O.P.D.") { total_charge = 1100; }
	else 
	{
		total_charge = 0;
		cout << "Not avialable service ,please try again.." << endl; 
	}
	total_return = total_deposite - total_charge;
}
void Financial_Record::display_expenditure() {
	cout << "\n--- Financial Statement ---" << endl;
	cout << patient_type << " charge: " << total_charge << endl;
	cout << "Total charge= " << total_charge << endl;
	cout << "Total deposited= " << total_deposite << endl;
	cout << "Total money to return= " << total_return << endl;
	
}