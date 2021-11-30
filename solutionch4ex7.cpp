#include "std_lib_facilities.h"


/*
   UCF COP3330 Fall 2021 Assignment 5 Solution
   Copyright 2021 Ihosvany Marquez
 */

vector<string> integer;

void init_vector()
{
    integer.push_back("Zero");
    integer.push_back("One");
    integer.push_back("Two");
    integer.push_back("Three");
    integer.push_back("Four");
    integer.push_back("Five");
    integer.push_back("Six");
    integer.push_back("Seven");
    integer.push_back("Eight");
    integer.push_back("Nine");
}

int fetchInt()
{
    int input = 0; 
    if (cin >> input)

        return input;

    cin.clear();

    string multipleInput;

    cin >> multipleInput;
    for (int x = 0; x < integer.size(); ++x) 
    {
      if (integer[x] == multipleInput)

      return x;
    }

    return(-1);
}

int main()
{
    init_vector();

    cout << "Enter two values as either single digits or spelled out separated by an operator character such as +, -, * or /.\n";

    while (true) 
    {
        int number1 = 0;
        int number2 = 0;

        char operation = 0;

        number1 = fetchInt();
        cin >> operation;
        number2 = fetchInt();

        if (number1 <= -1 || number2 <= -1)
            cout << "Integers must be positive.\n";

        else {

            switch (operation) 
            {
            case '+':
                cout << number1 << " + " << number2 << " = " << number1 + number2 << ".\n";
                break;

            case '-':

                cout << number1 << " - " << number2 << " = " << number1 - number2 << ".\n";
                break;

            case '*':

                cout << number1 << " * " << number2 << " = " << number1 * number2 << ".\n";
                break;

            case '/':
                if (number2 == 0)

                    cout << "ERROR: Cannot divide by zero.\n";
                    
                else

                    cout << number1 << " / " << number2 << " = " << double(number1)/number2 << ".\n";
                break;

            default:

                cout << "ERROR: Not a valid input.\n";
                break;

            }
        }
    }
}