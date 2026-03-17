# 🏥 Hospital Management System (C++)

A robust Hospital Management System built with **C++** using Object-Oriented Programming (OOP) principles. This system manages patient records for both **O.P.D. (Outpatient Department)** and **Emergency** services, handling billing and specialist assignments.

## ✨ Features

- **Add Patient Records:** Differentiate between OPD and Emergency patients.
- **Specialist Management:** Uses `std::map` and Iterators to assign specialists and room numbers automatically.
- **Financial Records:** Calculates total charges, deposits, and returns based on the service type.
- **Search & Edit:** Search for any patient using their unique **Record Number**.
- **Data Persistence:** Manage a database of patients using `std::vector` of base class pointers (Polymorphism).
- **Clean UI:** Simple command-line interface with organized tables and headers.

## 🛠️ Concepts Applied (OOP)

- **Inheritance:** `OPD` and `emergency` classes inherit from the `patient` base class.
- **Polymorphism:** Used `virtual` functions and `override` to handle different patient types dynamically.
- **Encapsulation:** Protected and private data members with public getter/setter methods.
- **STL Containers:** Utilized `std::vector` for record management and `std::map` for specialist lookups.

## 📁 Project Structure

* `patient.h / .cpp`: Base class containing general patient information.
* `OPD.h / .cpp`: Derived class for outpatient records and specialist mapping.
* `emergency.h / .cpp`: Derived class for emergency cases and flat-rate billing.
* `Financial_Record.h / .cpp`: Handles billing logic and expenditure reports.
* `HospitalSystem.h / .cpp`: The core engine managing the database and user operations.

## 🚀 How to Run

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/YourUsername/Hospital-Management-System.git](https://github.com/YourUsername/Hospital-Management-System.git)
    ```
2.  **Compile the project:**
    Use any C++ compiler (like G++):
    ```bash
    g++ *.cpp -o HospitalSystem
    ```
3.  **Run the application:**
    ```bash
    ./HospitalSystem
    ```

## 📝 Requirements
* C++17 or higher (for structured bindings and modern STL features).
* Any standard C++ Compiler (GCC, Clang, or MSVC).

---
Developed as a part of an Object-Oriented Programming Project.
