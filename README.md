# Hospital Management System (C++)

A comprehensive **Hospital Management System** built with **C++** using **Object-Oriented Programming (OOP)** principles. This system manages patient records for both **Outpatient (O.P.D.)** and **Emergency** services, handling data storage, financial records, and patient searching/sorting.

## 🚀 Features

- **Dual Service Modules:** Specialized handling for O.P.D. and Emergency patients.
- **Data Persistence:** Records are saved to and loaded from a flat-file database (`patients_data.txt`).
- **Financial Management:** Automatic calculation of charges, deposits, and returns based on the service type.
- **Advanced Search & Edit:** Find or modify patient details using their **Record Number** or **Full Name**.
- **Automated Sorting:** View patient lists sorted **alphabetically** or by **date/service type**.
- **Interactive UI:** User-friendly console interface with step-by-step navigation.

## 🛠️ Technical Implementation (OOP Concepts)

The project demonstrates core OOP pillars:
- **Inheritance:** A base `patient` class with derived `OPD` and `emergency` classes.
- **Polymorphism:** Using `virtual` functions for dynamic binding of patient displays and data editing.
- **Encapsulation:** Protecting patient data and financial records within private/protected members.
- **Composition:** Integrating a `Financial_Record` object within the patient class to manage billing.

## 📁 File Structure

| File | Description |
| :--- | :--- |
| `OOP project.cpp` | The main entry point containing the menu logic. |
| `HospitalSystem.h/.cpp` | The controller class that manages the patient collection (Vector). |
| `patient.h/.cpp` | Base class defining general patient attributes. |
| `OPD.h/.cpp` | Derived class for Outpatient Department features. |
| `emergency.h/.cpp` | Derived class for Emergency service features. |
| `Financial_Record.h/.cpp` | Class dedicated to billing and expenditure logic. |

## 💻 How to Run

1. Clone the repository to your local machine.
2. Ensure all `.h` and `.cpp` files are in the same directory.
3. Compile the project using any C++ compiler (e.g., `g++ *.cpp -o HospitalSystem`).
4. Run the executable and follow the on-screen instructions.

## 📊 Documentation
The project includes a **UML Class Diagram** and a **Flowchart** to visualize the system architecture and logic flow.
