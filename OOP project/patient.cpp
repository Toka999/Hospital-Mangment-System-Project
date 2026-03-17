#include "patient.h"
#include<iostream>
void patient::input_patient(string n, string a, string age, char gendre, string dd, int rn) {
	Name = n;
	Address = a;
	Age = age;
	Sex = gendre;
	Disease_description = dd;
	record_number = rn;	
}

void patient::display_patient() {
	cout << "<--------[Patient info]--------->" << endl;
	cout << "Name: " << Name << endl;
	cout << "Address: " << Address << endl;
	cout << "Age: " << Age << endl;
	cout << "Sex: " << Sex << endl;
	cout << "Disease description: " << Disease_description << endl;
	
}

string patient::get_name() {
	cout << "Name: " << Name <<endl;
	return Name;
}
void patient::set_date(string dt) {
	Date = dt;
}
string patient::get_date() {
	cout << "Date: " << Date << endl;
	return Date;
}
int patient::get_rec_number() {
	return record_number;
}