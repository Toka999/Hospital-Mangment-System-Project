#include "OPD.h"
#include "patient.h"
#include<iostream>
OPD::OPD() {
	display_specialist_rooms_num();
	roomnumber = 0;
	specialist = "Not Assigned";
}

void OPD::display_specialist_rooms_num() {
	specialits["General physician"] =201 ;
	specialits["E.N.T"] = 302;
	specialits["Cardiologist"] = 509;
	specialits["Dermatologist"] = 406;
	specialits["General surgeon"] = 601;
	/*int target = specialits.size()-1;*/
	auto start = specialits.begin();
	
	specialist = start->first;
	for (int i = 0; i < specialits.size(); i++) {
		int target = i;
		advance(start, target);
		cout<<i+1 << "Specialist: " << start->first << "/t" << "Room number" << start->second << endl;
	}
}

int OPD::choose_specialist_room(int n) {
	int target = n - 1;
	if (target >= 0 && target < (int)specialits.size()) {
		auto start = specialits.begin();
		advance(start, target);
		specialist = start->first;
		cout << "Specialist: " << start->first << "/t" << "Room number" << start-> second <<endl ;
		roomnumber = start->second;
		return roomnumber;
	}
	else {
		cout << "Invalid selection please enter value between 1 and 5" << endl;
		return 0;
	}
}

void OPD::display_patient() {
	patient::display_patient();
	cout <<"OPD Specialist: " << specialist << ': ' << roomnumber << endl;
	r.display_expenditure();
}
