#ifndef PATIENT_H_
#define PATIENT_H_
#include<string>
#include"Financial_Record.h"
using namespace std;
class patient
{
protected:
	string	Name;
	string	Address;
	string	Age;
	char	Sex;
	string	Disease_description;
	int	record_number;
	Financial_Record r;
	string	Date;
public:
	void input_patient(string n, string a, string age, char gendre, string dd, int rn);
	virtual ~patient(){}
	virtual void display_patient ();
	string get_name();
	void set_date(string dt);
	string get_date();
	int get_rec_number();
	
};
#endif 
