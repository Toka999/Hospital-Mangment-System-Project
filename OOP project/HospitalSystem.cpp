#include "HospitalSystem.h"
#include <iostream>
#include <algorithm>
#include "OPD.h"
#include <fstream>
using namespace std;

void HospitalSystem::add_new_patient()
{
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


    if (choice == 1)
    {
        OPD* patientOPD = new OPD();
        patientOPD->input_patient(n, a, age, s, dd, rn);
        patientOPD->set_date(currentDate);
        patientOPD->set_finance("O.P.D.", dep);
        patientOPD->set_OPDBill(dep);
        patientOPD->display_specialist_rooms_num();
        int choice_num;
        cout << "Enter specialist number: ";
        cin >> choice_num;
        int room = patientOPD->choose_specialist_room(choice_num);
        db.push_back(patientOPD);
    }
    else if (choice == 2)
    {
        emergency* patientEM = new emergency();
        patientEM->input_patient(n, a, age, s, dd, rn);
        patientEM->set_finance("emergency", dep);
        patientEM->set_date(currentDate);
        patientEM->set_emergemcyBill(dep);
        db.push_back(patientEM);
    }
}

void HospitalSystem::search_patient(string name)
{
    for (int i = 0; i < db.size(); i++)
    {
        if (db[i]->get_name() == name) {
            db[i]->display_patient();
        }
    }
}
void HospitalSystem::edit_patient() 
{
    int choice;
    cout << "Edit by: 1. Record Number  2. Full Name" << endl;
    cin >> choice;

    bool found = false;
    if (choice == 1) {
        int rn;
        cout << "Enter Record Number: "; cin >> rn;
        for (int i = 0; i < db.size(); i++) {
            if (db[i]->get_rec_number() == rn) {
                db[i]->display_patient(); 
                db[i]->edit_details();    
                found = true;
                break;
            }
        }
    }
    else {
        string n;
        cout << "Enter Full Name: "; cin.ignore(); getline(cin, n);
        for (int i = 0; i < db.size(); i++) {
            if (db[i]->get_name() == n) {
                db[i]->display_patient();
                db[i]->edit_details();
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "No records available for the provided information." << endl; [cite:13]
    }
}
void HospitalSystem::list_of_patients_by(string format)
{
    cout << "<_______List Of Patiets_______>" << endl;
    if (format == "O.P.D") {
        for (int i = 0; i < db.size(); i++)
        {
            if (db[i]->get_Type() == format) { db[i]->display_patient(); }
        }
    }
    else if (format == "EMERGENCY")
    {
        for (int i = 0; i < db.size(); i++)
        {
            if (db[i]->get_Type() == format) { db[i]->display_patient(); }
        }
    }
    else if (format == "DATE")
    {
        string DATE;
        cout << "Enter the date in fomat yyyy/mm/dd: ";
        cin >> DATE;
        for (int i = 0; i < db.size(); i++)
        {
            if (db[i]->get_date() == DATE) { db[i]->display_patient(); }
        }
    }
    else if (format == "ALPHA")
    {
        sort(db.begin(), db.end(), [](patient* first, patient* second) {
            return *first < *second;
            });


        for (int i = 0; i < db.size(); i++) { db[i]->display_patient(); }

    }
}
void HospitalSystem::delete_patient(int rn) {
    int status;
    for (int i = 0; i < db.size(); i++)
    {
        if (db[i]->get_rec_number() == rn) {
            db[i]->display_patient();
            cout << "Is this the patient that you want to delete?" << endl << "yes:1  no:0" << endl;
            cin >> status;
            if (status == 1) { delete db[i];}
            else if (status == 0) { break; }
        }
    }
}

void HospitalSystem::save_to_file() {
    ofstream outFile("patients_data.txt"); 
    if (!outFile) {
        cout << "Error opening file for saving!" << endl;
        return;
    }

    for (int i = 0; i < db.size(); i++) {
        outFile << db[i]->get_Type() << "|"
            << db[i]->get_rec_number() << "|"
            << db[i]->get_name() << "|"
            << db[i]->get_date() << "|"
            << db[i]->get_gendre() << "|"
            << db[i]->get_age() << "|"
            << db[i]->get_address() << endl;
        
    }
    outFile.close();
    cout << "Data saved to file successfully." << endl;
}
void HospitalSystem::~HospitalSystem() {
    save_to_file();
    for (int i = 0; i < db.size(); i++) {
        delete db[i];
    }
    db.clear();
}