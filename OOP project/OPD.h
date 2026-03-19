#pragma once
#ifndef OPD_H_
#define OPD_H_
#include "patient.h"
#include<string>
#include<map>
using namespace std;
class OPD:public patient
{
private:
	int roomnumber;
	string specialist;
	map <string, int> specialits;
public:
	OPD();
	void display_patient() override;
	void display_specialist_rooms_num();
	int choose_specialist_room(int n);
	void set_OPDBill(double dep);
};
#endif // !OPD_H_

