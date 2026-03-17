#ifndef HOSPITAL_SYSTEM_H_
#define HOSPITAL_SYSTEM_H_
#include <vector>
#include <string>
#include "patient.h"
#include "OPD.h"
#include "emergency.h"
using namespace std;
class HospitalSystem
{
private:
	vector <patient*>db;
	string currentDate;
	
public:
	void set_date(string d);
	void add_new_patient();
	void search_patient();
	void edit_patient();
	void list_of_patients();
	void delete_patients();
	~HospitalSystem();

};
#endif // !HOSPITAL_SYSTEM_H_



