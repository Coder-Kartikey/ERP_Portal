#include <stdlib.h>
#include <conio.h>
// #include<SQLAPI.h>
#include <iostream>
#include "ADMIN.cpp"
#include "STUDENT.cpp"
using namespace std;

int main()
{
    system("cls");
    // Object creation for ADMIN class
    ADMIN ADMIN;
    // Object creation for STUDENT class
    STUDENT STUDENT;
    bool portal = true;
    int admin_erp_no;
    bool oth_erp, oth_pass;
    string admin_password;
    int erp_no;
    string password;
    while (portal == true)
    {
        cout << "\n\n\n              *****|||||Portal Open|||||*****\n\n";
        switch (ADMIN.ask_for_which_portal())
        {
        case 1:
            system("cls");
            cout << "\n\n\n             ***||||Administration Portal Open||||***\n\n"
                 << endl;
            cout << "Enter your ERP Number:";
            cin >> admin_erp_no;
            oth_erp = ADMIN.othenticate_admin_erp(admin_erp_no);
            cout << "Enter your Password:";
            cin >> admin_password;
            oth_pass = ADMIN.othenticate_admin_password(admin_password);
            if (ADMIN.othenticate(oth_erp, oth_pass) == true)
            {
                system("cls");
                STUDENT.admin_login_successfully();
            }
            else
            {
                system("cls");
                ADMIN.login_failed();
            }
            cout << "\n\n\n             ***||||Administration Portal close||||***\n\n"
                 << endl;
            break;
        case 2:
            system("cls");
            cout << "\n\n             ***||||STUDENT Portal Open||||***\n\n"
                 << endl;
            cout << "Enter your ERP Number:";
            cin >> erp_no;
            oth_erp = STUDENT.othenticate_erp(erp_no);
            cout << "Enter your Password:";
            cin >> password;
            oth_pass = STUDENT.othenticate_password(password);
            if (STUDENT.othenticate(oth_erp, oth_pass) == true)
            {
                system("cls");
                STUDENT.student_login_successfully();
            }
            else
            {
                system("cls");
                STUDENT.login_failed();
            }
            cout << "\n\n\n             ***||||STUDENT Portal close||||***\n\n"
                 << endl;
            break;
        }
        portal = ADMIN.ask_for_continuation();
    }
    return 0;
}