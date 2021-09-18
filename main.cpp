#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class atm
{
private:                     ///private member variables
    long int account_no;
    string name;
    int PIN;
    double balance;
    string mobile_no;
public:                     ///public member functions
    void setdata( long int acccount_no_a , string name_a, int PIN_a, double balance_a, string mobile_no_a)
    {
        account_no = acccount_no_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_no = mobile_no_a;
    }

    ///getxyz function will return the user's xyz

    long int acc_no()
    {
        return account_no;
    }
    string getname()
    {
        return name;
    }
    int getPIN()
    {
        return PIN;
    }
    double getbalance()
    {
        return balance;
    }
    string getmobileNo()
    {
        return mobile_no;
    }

    void setmobile(string mob_pre, string mob_new)         ///updating the users mobile no.
    {
        if( mob_pre == mobile_no)
        {
            mobile_no = mob_new;
            cout<<endl<<"Sucessully updated mobile number ";
            getch();
        }
        else
        {
            cout<<endl<<"Incorrect old mobile No.";
            getch();
        }
    }
    ///cashwithdraw function is used to withdraw money from atm
    void cashWithdraw(int amount_a)
    {
        if(amount_a> 0 && amount_a<balance)
        {
            balance-=amount_a;
            cout<<"Please collect your cash ";
            count<<endl<<"Available balance : "<<balance;
            getch();
        }
        else
        {
            cout<<endl<<"Invalid input or insufficient balance ";
            getch();
        }
    }

};

//////////////////
int main()
{
    int choice = 0, enterPIN;         ///enterPIN & enterAccountNo for ----->for user authentication
    long int enterAccountNo;

    system("cls");                    ///for clearing screen when we move from one variable to other.

}
