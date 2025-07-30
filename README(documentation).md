Simple Calculator in C — Code Documentation
Assignment: Open Source C Project Calculator Analysis
Link (Open source project) - https://github.com/Anish-Paul-01/Simple-Calculator-in-C

Introduction
For this assignment, I selected an open-source C project from GitHub that implements a basic calculator. The repository I chose is Simple-Calculator-in-C by Anish-Paul-01. I downloaded the project, analyzed its code, and documented how each part works. Below is my detailed explanation of the code structure and the logic behind each section.

Project Structure
The project contains the following files:

Simple_Calculator.c — The main source code for the calculator.
README.md — Project overview and instructions.
Calc_in_c.gif — A demonstration image (not relevant for code analysis).
For this documentation, I focused on the Simple_Calculator.c file.

Code Walkthrough
1. Header Files
   
#include <stdio.h>
#include <stdlib.h>
stdio.h is used for input and output functions like printf and scanf.
stdlib.h is used for the exit() function, which allows the program to terminate early.

3. Main Function and Variable Declaration

int main()
{
    float num_1, num_2;
    char cal, opr;
    ...
}
The program starts in the main() function.
It declares two floating-point variables (num_1 and num_2) for the numbers to be calculated.
Two character variables are used: cal for the user's choice to use the calculator, and opr for the operator.

3. Asking the User to Use the Calculator


printf("Want to use calculator?(Y/N) : \n");
scanf("%c", &cal);
The program first asks the user if they want to use the calculator.
The user must enter Y/y for yes or N/n for no.

4. Handling the User’s Choice
If the user enters 'N' or 'n':


if (cal == 'n' || cal == 'N')
{
    printf("\nThank You !\n");
    exit(0);
}
The program thanks the user and exits immediately.
If the user enters 'Y' or 'y':

else if (cal == 'y' || cal == 'Y')
{
    // Operator and number input
    // Switch-case for operation
}
The program continues and asks for the operator and numbers.

5. Getting the Operator and Numbers

printf("Choose an operator ( + , - , * , / ) : \n");
scanf(" %c", &opr);

printf("Enter the value of Number 1 : \n");
scanf(" %f", &num_1);
printf("Enter the value of Number 2 : \n");
scanf(" %f", &num_2);
The user is prompted to enter the operator (+, -, *, or /).
Then, the user enters two numbers for the calculation.
6. Performing the Calculation

switch (opr)
{
    case '+':
        printf("Addition of Two Numbers :\n\n %.2f + %.2f = %.2f\n", num_1, num_2, (num_1 + num_2));
        break;
    case '-':
        printf("Substraction of Two Numbers :\n\n %.2f - %.2f = %.2f\n", num_1, num_2, (num_1 - num_2));
        break;
    case '*':
        printf("Multiplication of Two Numbers :\n\n %.2f * %.2f = %.2f\n", num_1, num_2, (num_1 * num_2));
        break;
    case '/':
        if (num_2 == 0)
        {
            printf("Cannot Divide by Zero !\n");
            break;
        }
        else
        {
            printf("Division of Two Numbers :\n\n %.2f / %.2f = %.2f\n", num_1, num_2, (num_1 / num_2));
            break;
        }
    default:
        printf("Invalid Operator \n");
        break;
}
The program uses a switch statement to check which operator the user entered.
It then performs the corresponding operation and prints the result.
For division, it checks if the second number is zero to avoid dividing by zero.
If the operator is not valid, it prints an error message.

7. Handling Invalid Input

else if (cal != 'n' && cal != 'N' && cal != 'y' && cal != 'Y')
{
    printf("Invalid input!\n");
}
If the user enters anything other than Y, y, N, or n at the start, the program prints "Invalid input!".
8. Program End

printf("\n Thank You !\n");
return 0;
The program thanks the user and ends.

Summary Table

Ask to use calc	Checks if user wants to use the calculator
Get operator/nums	Asks for operator and two numbers
Switch statement	Performs the chosen operation
Division check	Prevents division by zero
Invalid input	Handles wrong inputs gracefully
End message	Thanks the user and exits

What I Learned

How to use switch statements for menu-driven programs.
How to handle user input and basic input validation in C.
The importance of checking for errors like division by zero.

Suggestions for Improvement

The code could be improved by using separate functions for each operation.
It could also allow the user to perform multiple calculations in a loop.
More input validation (e.g., checking for non-numeric input) would make it more robust.
