#ifndef FINANCIAL_RECORD_H_
#define FINANCIAL_RECORD_H_
#include<string>
using namespace std;
class Financial_Record
{
private:
	double total_charge=0;
	double total_deposite = 0;
	double total_return = 0;
	string patient_type=" ";
public:
	void set_Financial_Record(string type, double dep);
	void display_expenditure();
	void set_deposite(double d);

};
#endif // !FINANCIAL_RECORD_H_



