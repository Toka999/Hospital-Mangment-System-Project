#include <iostream>
#include <string>
#include "HospitalSystem.h"

using namespace std;

void showWelcomeScreen(string date) {
    cout << "**************************************************" << endl;
    cout << "* *" << endl;
    cout << "* ALKA HOSPITAL                   *" << endl; 
    cout << "* Jawalakhel, Lalitpur               *" << endl;
    cout << "* *" << endl;
    cout << "**************************************************" << endl;
    cout << "Today's Date: " << date << endl; 
    cout << "**************************************************" << endl;
}

int main() {
    HospitalSystem system;
    string todayDate;

    cout << "Enter today's Date (yyyy/mm/dd): ";
    cin >> todayDate;
    system.set_date(todayDate);

    showWelcomeScreen(todayDate);

    int choice;
    do {
        cout << "\n================ MENU ================" << endl;
        cout << "1. Add new patient record" << endl;           
        cout << "2. Search or edit record" << endl;           
        cout << "3. Know the records of patients (List)" << endl; 
        cout << "4. Delete the records" << endl;            
        cout << "5. Exit from the program" << endl;            
        cout << "======================================" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)){  
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (choice) {
        case 1:
            system.add_new_patient();
            break;
        case 2:
            system.edit_patient(); 
            break;
        case 3:
        {
            string format;
            cout << "Choose format (ALPHA / EMERGENCY / OPD / DATE): ";
            cin >> format;
            system.list_of_patients_by(format); 
        }
        break;
        case 4:
        {
            int rn;
            cout << "Enter Record Number to delete: ";
            cin >> rn;
            system.delete_patient(rn); 
        }
        break;
        case 5:
            cout << "Exiting... Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}