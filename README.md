**🏥 HospitalAppointmentSystem**

A basic console-based hospital appointment management system written in C.
It allows users to register patients, cancel appointments, manage checkups, and view all current appointments.
Ideal for learning linked lists, dynamic memory allocation, and basic data structure manipulation in C.


**# 📁 Project Structure**

| ** Function** **          | **Description**                                                                 |
|------------------------------|----------------------------------------------------------------------------------|
| `main()`                     | 📌 Main entry point: Displays menu and calls related functions                   |
| `Add_appointment()`          | 📝 Registers a new patient with details (ID, Name, Age, etc.)                    |
| `cancel_appointment()`       | ❌ Cancels an appointment using patient ID                                       |
| `come_for_checkup()`         | 🏥 Handles checkup by removing the patient at the front of the list              |
| `appointment_list()`         | 📋 Displays all current patients with appointments                               |
| `struct hospital_management` | 🔗 Structure to hold patient data using a **doubly linked list**                 |


🧾 **Example Menu Options->**
1 - Add for appointment
2 - Cancel appointment
3 - Come for checkup
4 - Total no of appointments
5 - Exit

✅ Requirements
No additional libraries needed – uses standard C libraries only (stdio.h, stdlib.h, string.h).

🌟** Features (Current Phase)**
1.Patient Registration (Name, ID, Age, Gender, Address, Phone)
2.Appointment Booking using a Doubly Linked List
3.Cancel Appointment by Patient ID
4.First-Come-First-Serve Patient Checkup System
5.Display All Appointments (Patient Details)
6.Menu-based CLI for Easy Interaction
7.Handles Edge Cases (Empty List, Single Node Deletion)

✅ Tech Stack
C Programming Language

Doubly Linked List for managing patient appointments

Dynamic Memory Allocation using malloc() and free()

Standard C Libraries: stdio.h, stdlib.h, string.h

Command-Line Interface (CLI) based user interaction with text menus

Cross-platform compatibility: Works on both Linux and Windows via terminal or command prompt

**👥 Team Collaboration**

| Contribution Area               | Member             |
|--------------------------------- |-------------------|
| Main Menu & Program Flow        | Kumar Priyanshu    |
| Checkup & Queue Handling        | Ashu Kumar         |
| Appointment Booking Logic       | Mradul Dixit       |

**Screenshot**

![image](https://github.com/user-attachments/assets/fe556c43-ae9c-4184-96a7-c82ff515d970)

![image](https://github.com/user-attachments/assets/fbaa440b-0208-48a1-b594-0d375dd9e7a6)

![image](https://github.com/user-attachments/assets/3c00e32f-4371-4d79-88e5-3c41bb794a43)



