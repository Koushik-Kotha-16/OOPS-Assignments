#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;

public:

    Account(const long accNo, const double bal = 0) : accountNumber(accNo)
    {
        balance = bal;
        transactionID = 0;
        transactionType = "None";
    }

    long depositAmount(const long to, const long from, const double amount)
    {
        if(to == accountNumber)
        {
            balance = balance + amount;
            transactionType = "Credit";
            transactionID++;
        }
        return transactionID;
    }

    long creditAmount(const long to, const long from, const double amount)
    {
        if(from == accountNumber && balance >= amount)
        {
            balance = balance - amount;
            transactionType = "Debit";
            transactionID++;
        }
        return transactionID;
    }

    void displayDetails() const
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
        cout << "Transaction Type : " << transactionType << endl;
        cout << "Transaction ID : " << transactionID << endl;
        cout << endl;
    }
};

int main()
{
    Account a1(101,5000);
    Account a2(102,4000);
    Account a3(103,3000);
    Account a4(104,2000);
    Account a5(105,1000);

    a1.depositAmount(101,102,1000);
    a2.creditAmount(101,102,500);

    a3.depositAmount(103,104,700);
    a4.creditAmount(103,104,200);

    a5.depositAmount(105,101,300);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}
