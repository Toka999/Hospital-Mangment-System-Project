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
	cout << "Record number:" << record_number << endl;
}

string patient::get_name() {
	return Name;
}
void patient::set_date(string dt) {
	Date = dt;
}
string patient::get_date() {
	
	return Date;
}
int patient::get_rec_number() {
	return record_number;
}

string patient::get_Type() {
	return type;
}

bool patient ::operator <(const patient& next) const {
	return this->Name < next.Name;
}

string patient::get_age() {
	return Age;
}

string patient::get_address() {
	return Address;
}

char patient::get_gendre() {
	return Sex;
}

void patient:: set_finance(string t, double d) 
{ 
	r.set_Financial_Record(t, d); 
}

void patient::edit_details() {
	cout << "--- Editing Patient Record ---" << endl;
	cout << "Enter New Name: "; cin.ignore(); getline(cin, Name);
	cout << "Enter New Address: "; getline(cin, Address);
	cout << "Enter New Age: "; cin >> Age;
	cout << "Enter New Sex (m/f): "; cin >> Sex;
	cout << "Enter New Disease Description: "; cin.ignore(); getline(cin, Disease_description);
	cout << "Data Updated Successfully!" << endl;