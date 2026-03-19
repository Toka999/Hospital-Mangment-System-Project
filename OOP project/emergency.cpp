#include "emergency.h"
#include<iostream>
emergency::emergency() {
	type = "EMERGENCY";
}
void emergency::display_patient() {
	cout << "Emergency patient" << endl;
	patient::display_patient();
	r.display_expenditure();
	
}
void emergency::set_emergemcyBill(double deposite) {
	r.set_Financial_Record("emergency", deposite);
}