#include <iostream>
#include <string>
#include "q2.h"

Bank::Bank()
{
    name = "no name";
    acc_num = "0000000000";
    balance = 0.00;
}

Bank::Bank(const std::string & co, const std::string & an, double pr){
    name = co;
    int warn = 0;
    acc_num = an;
    for (int i = 0; i < acc_num.length(); i++)
    {
        if (an[i] > '9' || acc_num[i] < '0')
        {
            if (warn == 0)
            {
                std::cout << "The account number invalid;"
                        << name << " invalid numbers set to 0\n";
                warn = 1;
            }
            acc_num[i] = '0';
        }
    }
    if (pr < 0)
    {
        std::cout << "The balance of an account cannot be negative; "
                  << name << " balance set to 0.\n";
        balance = 0.0;
    }
    else
    {
        balance = pr;
    }
}

Bank::~Bank()
{
    std::cout << "Goodbye! " << name << '\n';
}

void Bank::save(double num)
{
    if (num < 0)
    {
        std::cout << "Number of the save amount cannot be negative."
                  << "  Transaction is aborted.\n";
    }
    else
    {
        balance = balance + num;
        std::cout << '$' << num << " has been saved into account " << name << '\n';
    }
}

void Bank::withdraw(double num)
{
    if (num > balance)
    {
        std::cout << "Sorry, insufficient balance!"
                  << "  Transaction is aborted.\n";
    }
    else
    {
        balance = balance - num;
        std::cout << '$' << num << " has been withdrawed in account " << name << '\n';
    }
}

void Bank::show()
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(2);

    cout << "Name: " << name << '\n'
         << "Account number: " << acc_num << '\n'
         << "Reminding balance: $" << balance << '\n';

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

