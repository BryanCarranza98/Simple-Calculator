// Bryan Carranza
// CSIS 223
// Midterm Project - #3
/* This program functions as a standard calculator. The program prompts the user to input which mathematical operation they wish to use (addition, subtraction, multiplication or division). After the user makes their selection, the program prompts the user to input two operands for computation. The program then performs the appropriate mathematical operation and outputs the answer.*/


# include <iostream>

using namespace std;

int main() // main function
{
    char op; // initializes the operator selection variable
    float num1, num2; // initializes the variables for the operands
    
    cout << "---Welcome to the BT Calculator Program---" << endl << endl; // welcome message
    cout << "PLEASE CHOOSE THE MATHEMATICAL OPERATION YOU WANT TO USE" << endl; // prompt for mathematical operation selection
    cout << "Enter (+) for ADDITION, (-) for SUBTRACTION, (*) for MULTIPLICATION, or (/) for DIVISION: "; // list of acceptable choices
    cin >> op; // receives user input for operator variable
    if (op != '+' && op != '-' && op != '*' && op != '/') // if statement to check validity of operator selection
    {
        cout << "Error: INVALID OPERATOR" << endl << "Enter (+) for ADDITION, (-) for SUBTRACTION, (*) for MULTIPLICATION, or (/) for DIVISION: "; // error message for invalid operator selection input and prompt to enter valid input
        cin >> op; // receives valid operator selection into op variable
    }
    cout << endl;
    cout << "Enter operand 1: "; // receives user input for first operand
    cin >> num1; // stores user input into num1 variable
    cout << "Enter operand 2: "; // receives user input for second operand
    cin >> num2; // stores user input into num2 variable
    
    switch(op) // switch for various mathematical operations
    {
        case '+': // for addition
            cout << endl << "Answer: " << num1 + num2 << endl; // outputs the sum of the operands
            break;
            
        case '-': // for subraction
            cout << endl << "Answer: " << num1 - num2 << endl; // outputs the difference of the operands
            break;
            
        case '*': // for multiplication
            cout << endl << "Answer: " << num1 * num2 << endl; // outputs the product of the operands
            break;
            
        case '/': // for division
            if (op == '/' && num2 == 0) // if statement to account for attempted division by zero
            {
                cout << endl << "Answer: Undefined -- Cannot divide by zero" << endl; // notification of undefined answer resulting from attempt to divide by zero
                break;
            }
            cout << endl << "Answer: " << num1 / num2 << endl; // outputs the quotient of the operands
            break;
    }
    
    return 0;
} // end main function
