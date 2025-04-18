🏥 HospitalAppointmentSystem

A basic console-based hospital appointment management system written in C.
It allows users to register patients, cancel appointments, manage checkups, and view all current appointments.
Ideal for learning linked lists, dynamic memory allocation, and basic data structure manipulation in C.


# 📁 Project Structure

|  Function**           | **Description**                                                                 |
|------------------------------|----------------------------------------------------------------------------------|
| `main()`                     | 📌 Main entry point: Displays menu and calls related functions                   |
| `Add_appointment()`          | 📝 Registers a new patient with details (ID, Name, Age, etc.)                    |
| `cancel_appointment()`       | ❌ Cancels an appointment using patient ID                                       |
| `come_for_checkup()`         | 🏥 Handles checkup by removing the patient at the front of the list              |
| `appointment_list()`         | 📋 Displays all current patients with appointments                               |
| `struct hospital_management` | 🔗 Structure to hold patient data using a **doubly linked list**                 |
