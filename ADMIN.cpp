#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class ADMIN
{
private:
    const int admin_erp_no = 7398;
    const string admin_password = "kp7398";

protected:
    int erp_no;
    string password;

public:
    string name;
    long long int roll_no;
    string branch_code;
    string father_name;
    string gender;
    const string course = "B.Tech";
    const string college = "Rajkiya Engineerig College";
    void admin_login_successfully()
    {
        cout << "                  **||Admin Successfully Login||**\n\n";
        cout << "Enter Student ERP Number:";
        set_erp();
        cout << "Enter Student Password:";
        set_password();
        cout << "Enter Student Name:";
        getline(cin >> ws, name);
        cout << "Enter Student Father's Name:";
        getline(cin >> ws, father_name);
        cout << "Enter Student Roll Number:";
        cin >> roll_no;
        cout << "Enter Student Branch:";
        getline(cin >> ws, branch_code);
        cout << "Enter Student Gender:";
        getline(cin >> ws, gender);
    }
    void login_failed()
    {
        cout << "\n\n                 **||Login Failed||**\n\n"
             << endl;
    }
    bool othenticate(bool oth_erp, bool oth_pass)
    {
        if (oth_erp == oth_pass && oth_erp == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void set_password()
    {
        cin >> this->password;
    }
    void set_erp()
    {
        cin >> this->erp_no;
    }
    bool ask_for_continuation()
    {
        string ask_for_continuation;
        cout << "Do you want to close the portal(y/n)";
        ask_for_continuation = getch();
        if (ask_for_continuation == "y")
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    bool othenticate_admin_erp(int admin_erp_no)
    {
        if (this->admin_erp_no == admin_erp_no)
        {
            return true;
        }
        else
        {
            cout << "*!!!!You have entered WRONG ERP number!!!!*";
            return false;
        }
    }
    bool othenticate_admin_password(string admin_password)
    {
        if (this->admin_password == admin_password)
        {
            return true;
        }
        else
        {
            cout << "*!!!!You have entered WRONG PASSWORD!!!!*";
            return false;
        }
    }
    int ask_for_which_portal()
    {
        cout << "What do you want to open 1. for ADMINISTRATION Portal 2. for STUDENT Portal:";
        int ask_for_which_portal;
        cin >> ask_for_which_portal;
        return ask_for_which_portal;
    }
};