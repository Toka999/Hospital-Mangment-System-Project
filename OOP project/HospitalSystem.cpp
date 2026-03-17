#include "HospitalSystem.h"
#include <iostream>

using namespace std;

void HospitalSystem::add_new_patient() {
    int choice;
    cout << "\n--- choose patient type ---" << endl;
    cout << "1. O.P.D. Service\n2. Emergency Service\nChoose: ";
    cin >> choice;

    string n, a, age, dd;
    char s;
    int rn;
    double dep;
    cout << "Enter Record Number: "; cin >> rn;
    cout << "Enter Name: "; cin.ignore(); getline(cin, n);
    cout << "Enter Address: "; getline(cin, a);
    cout << "Enter Age: "; cin >> age;
    cout << "Enter Sex (m/f): "; cin >> s;
    cout << "Enter Disease Description: "; cin.ignore(); getline(cin, dd);
    cout << "Enter Deposited Amount: "; cin >> dep;


    if (choice == 1) {
        OPD* patientOPD = new OPD();
        patientOPD->input_patient(n, a, age, s, dd, rn);
        patientOPD->set_date(currentDate);

        patientOPD->display_specialist_rooms_num();
        db.push_back(patientOPD);
    }
    else if (choice == 2) {
        emergency* patientEM = new emergency();
        patientEM->input_patient(n, a, age, s, dd, rn);
        patientEM->set_date(currentDate);
        db.push_back(patientEM);




    }
}
void HospitalSystem::search_patient() {

}
void HospitalSystem::edit_patient() {

}
void HospitalSystem::list_of_patients() {

}
void HospitalSystem::delete_patients() {

}