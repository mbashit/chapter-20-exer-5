// chapter 20 exer 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Inside an automated teller machine (ATM) there are notes of $10, $5,
and $1. Write a C++ program to emulate the way this ATM works. At
the beginning, the machine prompts the user to enter the four-digit PIN
and then checks for PIN validity (assume “1234” as the valid PIN). If
given PIN is correct, the program must prompt the user to enter the
amount of money (an integer value) that he or she wants to withdraw
and finally it displays the least number of notes the ATM must
dispense. For example, if the user enters an amount of $36, the program
must display “3 note(s) of $10, 1 note(s) of $5, and 1 note(s) of $1”.
Moreover, if the user enters a wrong PIN, the machine will allow him
or her two retries. If the user enters an incorrect PIN all three times, the
message “PIN locked” must be displayed and the program must end.
Assume that the user enters a valid value for the amount.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int $1, $5, $10,PIN,amount,r;

    cout << "Enter a four-digit PIN: " << endl;
    cin >> PIN;

    if (PIN != 1234) {
        cout << "wrong PIN.";
        cout << "Enter a four-digit PIN:";
        cin >> PIN;

        if (PIN != 1234) {
            cout << "wrong PIN. ";
            cout << "Enter a four-digit PIN. ";
            cin >> PIN;
        }
    }
    if (PIN != 1234) {
        cout << "PIN locked";
   }
    else {
        cout << "Enter amount you want to withdraw:";
        cin >> amount;

        $10 = (int)(amount) / 10;
        r = amount % 10;
        $5 = (int)(r) / 5;
        $1 = r % 5;

        cout << $10 <<"note(s) of $10"<<" "<< $5 << "note(s) of $5"<<" "<< $1 << "note(s) of $1";
    }
    return 0;
}

