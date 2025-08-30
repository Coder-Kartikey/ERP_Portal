# ERP Portal

Welcome to the **ERP Portal**, a comprehensive system for managing both administrative and student-related processes within a college. This portal aims to streamline various academic and administrative workflows, providing an efficient and user-friendly experience for users on both sides of the system.

---

## Table of Contents

- [Features](#features)
- [Technologies Used](#technologies-used)
- [System Design](#system-design)
- [Database Schema](#database-schema)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## Features

### Administration Side
- Add and manage student records.
- Manage academic information, including roll numbers, branch codes, and gender.
- Verify and authenticate admin login credentials securely.

### Student Side
- Login to access personalized information.
- View full student details:
  - Name, Roll Number, Father's Name, Gender, College Name, Course, and Branch.
- Prompt to display detailed student information on successful login.
- Secure student login with ERP number and password authentication.

---

## Technologies Used

- **Language**: C++  
- **Paradigm**: Object-Oriented Programming (OOP)  
- **Database**: SQL for handling data storage and operations.  

---

## System Design

### Code Structure
- **ADMIN.cpp**: Contains the `ADMIN` class with methods for admin authentication, adding student records, and portal continuation management.  
- **STUDENT.cpp**: Inherits from the `ADMIN` class, enabling student-specific functionalities such as displaying personalized details on login.  
- **ERP_Portal.cpp**: Acts as the entry point, orchestrating the interaction between `ADMIN` and `STUDENT` classes.  

---

## Database Schema

The project uses a simple SQL database to handle transactions. Below is the schema:

```sql
CREATE DATABASE payment;
USE payment;

CREATE TABLE payment(
    payment_id INT PRIMARY KEY,
    customer VARCHAR(25),
    mode VARCHAR(25)
);

-- Sample Data
INSERT INTO payment
VALUES 
(101, "kp", "netbanking"),
(102, "kp", "credit card"),
(103, "kp", "credit card"),
(104, "kp", "netbanking");

-- Example Query
SELECT mode, COUNT(payment_id) 
FROM payment 
GROUP BY mode;
```

---

## Installation

To set up and run the ERP Portal, follow these steps:

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/Coder-Kartikey/ERP_Portal.git
    ```

2. **Navigate to the Project Directory**:
    ```bash
    cd ERP_Portal
    ```

3. **Compile the Source Code**:
    ```bash
    g++ -o ERP_Portal ERP_Portal.cpp ADMIN.cpp STUDENT.cpp
    ```

4. **Run the Application**:
    ```bash
    ./ERP_Portal
    ```

---

## Usage

### Administration Portal
1. Enter admin credentials (ERP number and password).
2. Add student details such as name, roll number, branch, etc.
3. Manage student academic records and handle other administrative tasks.

### Student Portal
1. Login using student ERP number and password.
2. Optionally view detailed student profile information.
3. Interact with the system for personalized data.

---

## Contributing

Contributions to enhance the system are always welcome. Here's how you can get involved:

1. **Fork** the repository.
2. Create a new branch:
    ```bash
    git checkout -b feature-branch
    ```
3. Commit your changes:
    ```bash
    git commit -m "Add new feature"
    ```
4. Push the changes:
    ```bash
    git push origin feature-branch
    ```
5. Open a **Pull Request**.

---

## Author

Created and maintained by **CoderKP**.

For inquiries or collaboration, feel free to reach out!
