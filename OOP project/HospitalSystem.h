#ifndef HOSPITAL_SYSTEM_H_
#define HOSPITAL_SYSTEM_H_
#include <vector>
#include <string>
#include "patient.h"
#include "OPD.h"
#include "emergency.h"
#include <fstream>

using namespace std;
class HospitalSystem
{
private:
	vector <patient*>db;
	string currentDate;
	
public:
	void set_date(string d);
	void add_new_patient();
	void search_patient(string name);
	void edit_patient(auto var);
	void list_of_patients_by(string format);
	void delete_patient(int rn);
	void save_to_file();
	~HospitalSystem();

};
#endif // !HOSPITAL_SYSTEM_H_



