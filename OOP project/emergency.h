#pragma once
#ifndef EMERGENCY_H_
#define EMERGENCY_H_
#include "patient.h"
class emergency :public patient
{
public:
	emergency();
	void display_patient() override;
	void set_emergemcyBill(double depoiste);
};

#endif // !EMERGENCY_H_




