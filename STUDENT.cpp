class STUDENT : public ADMIN
{
public:
    void student_login_successfully()
    {
        cout << "                  **||" << name << " Successfully Login||**\n\n"
             << endl;
        cout << "Do you want to display your full details(y/n):";
        string input;
        cin >> input;
        if (input == "y")
        {
            cout << "\nName:" << name << "              Roll No.:" << roll_no << endl;
            cout << "Father's Name:" << father_name << "      Gender:" << gender << endl;
            cout << "College:" << college << "        Course & Branch:" << course << " " << branch_code << endl;
        }
        else
        {
            cout << "\n\n             Thank You!";
        }
    }
    void login_failed()
    {
        cout << "\n\n                 **||Login Failed||**\n\n"
             << endl;
    }
    bool othenticate_password(string password)
    {
        if (this->password == password)
        {
            return true;
        }
        else
        {
            cout << "*!!!!You have entered WRONG PASSWORD!!!!*";
            return false;
        }
    }
    bool othenticate_erp(int erp_no)
    {
        if (this->erp_no == erp_no)
        {
            return true;
        }
        else
        {
            cout << "*!!!!You have entered WRONG ERP number!!!!*";
            return false;
        }
    }
};