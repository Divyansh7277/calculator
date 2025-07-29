//Calculator:
//Imports (Libraries):
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Main Function and Locale:
int main(void){
    setlocale(LC_ALL,"English");
//Variables:
    int operation_menu, basic_operation, fg_operation, form_operation, extra_operation, sum_1, sum_2, sum_result, subtract_1, subtract_2, subtract_result, multiply_1, multiply_2, multiply_result, sqrt_1, sqrt_result, power_1, power_2, power_result, bhaskara_a, bhaskara_b, bhaskara_c, bhaskara_delta, bhaskara_r1, bhaskara_r2, square_1, square_2, square_result, triangle_base, triangle_height, triangle_result;
    float percent_1, percent_2, percent_result, circle_1, circle_result, divide_1, divide_2, divide_result;

//Interaction:
    printf("\n[Calculator (V3.5)]\n\n");
    printf("Select the operation by typing the corresponding number and pressing 'Enter':\n\n1.Basic Operations.\n2.Square Root.\n3.Power.\n4.Bhaskara's Formula.\n5.Percentage.\n6.Geometric Figures.\n0.Mathematical Formulas.\n\n");
    scanf("%i", &operation_menu);
    printf("\n------------------------------------------------------------------------\n\n");

//Basic Operations:
    if(operation_menu == 1){
        printf("Select the basic operation you want to perform and press 'Enter':\n\n1.Add.\n2.Subtract.\n3.Multiply.\n4.Divide.\n\n");
        scanf("%i", &basic_operation);
        printf("\n------------------------------------------------------------------------\n\n");
    }
    
    //Addition:
    if(basic_operation == 1){
        printf("To start the addition, enter the first number and press 'Enter':\n\n");
        scanf("%i", &sum_1);
        printf("\nEnter the second number:\n\n");
        scanf("%i", &sum_2);
        printf("\n------------------------------------------------------------------------\n\n");
        sum_result = sum_1 + sum_2;    //Calculation
        printf("The result of the addition is : %i \n", sum_result);
    }
    
    //Subtraction:
    if(basic_operation == 2){
        printf("To start the subtraction, enter the first number and press 'Enter':\n\n");
        scanf("%i", &subtract_1);
        printf("\nEnter the second number:\n\n");
        scanf("%i", &subtract_2);
        printf("\n------------------------------------------------------------------------\n\n");
        subtract_result = subtract_1 - subtract_2;    //Calculation
        printf("The result of the subtraction is : %i \n", subtract_result);
    }

    //Multiplication:
    if(basic_operation == 3){
        printf("To start the multiplication, enter the first number and press 'Enter':\n\n");
        scanf("%i", &multiply_1);
        printf("\nEnter the second number:\n\n");
        scanf("%i", &multiply_2);
        printf("\n------------------------------------------------------------------------\n\n");
        multiply_result = multiply_1 * multiply_2;    //Calculation
        printf("The result of the multiplication is : %i \n", multiply_result);
    }

    //Division:
    if(basic_operation == 4){
        printf("To start the division, enter the first number and press 'Enter':\n\n");
        scanf("%f", &divide_1);
        printf("\nEnter the second number:\n\n");
        scanf("%f", &divide_2);
        printf("\n------------------------------------------------------------------------\n\n");
        divide_result = divide_1 / divide_2;    //Calculation
        printf("The result of the division is : %f. \n", divide_result);
    }

//Square Root:
    if(operation_menu == 2){
        printf("To calculate the square root, enter the number you desire and press 'Enter':\n\n");
        scanf("%i", &sqrt_1);
        printf("\n------------------------------------------------------------------------\n\n");
        sqrt_result = sqrt(sqrt_1);    //Calculation
        printf("The result of the square root is : %i. \n", sqrt_result);
    }

//Power:
    if(operation_menu == 3){
        printf("To calculate the power, enter the number you desire and press 'Enter':\n\n");
        scanf("%i", &power_1);
        printf("Enter the exponent for your number:\n\n");
        scanf("%i", &power_2);
        printf("\n------------------------------------------------------------------------\n\n");
        power_result = pow(power_1, power_2);
        printf("The result of the power operation is : %i. \n", power_result);
    }

//Bhaskara's Formula:
    if(operation_menu == 4){
        printf("To calculate Bhaskara's formula, enter the number for 'A' and press 'Enter':\n\n");
        scanf("%d", &bhaskara_a);
        printf("\nEnter the value for 'B':\n\n");
        scanf("%d", &bhaskara_b);
        printf("\nEnter the value for 'C':\n\n");
        scanf("%d", &bhaskara_c);
        bhaskara_delta = pow(bhaskara_b, 2) - 4*bhaskara_a*bhaskara_c;    //Delta Calculation
        bhaskara_r1 = (-bhaskara_b + sqrt(bhaskara_delta)) / (2*bhaskara_a);    //X1 Calculation
        bhaskara_r2 = (-bhaskara_b - sqrt(bhaskara_delta)) / (2*bhaskara_a);    //X2 Calculation
        printf("\n------------------------------------------------------------------------\n\n");
        printf("Using the square root of positive delta for X1 and negative delta for X2, the results are:\nX1 = %d. \nX2 = %d. \n\n", bhaskara_r1, bhaskara_r2);
    }

//Percentage:
    if(operation_menu == 5){
        printf("\nTo calculate the percentage, enter the value that you want to calculate the percentage of and press 'Enter':\n\n");
        scanf("%f", &percent_1);
        printf("\nEnter the value from which the percentage will be calculated:\n\n");
        scanf("%f", &percent_2);
        percent_result = percent_2 * (percent_1 / 100);        //Calculation
        printf("\n------------------------------------------------------------------------\n\n");
        printf("The result of this calculation is: %f. \n", percent_result);
    }

//Geometric Figures Area:
    if(operation_menu == 6){
        printf("\nSelect the geometric figure you want to calculate the area for:\n\n1.Square or Rectangle.\n2.Circle.\n3.Triangle.\n\n");
        scanf("%i", &fg_operation);
    }
    
    //Square/Rectangle:
    if(fg_operation == 1){
        printf("\nTo continue the operation, enter the value for the top or bottom side of the square/rectangle: _\n\n");
        scanf("%i", &square_1);
        printf("\nEnter the value for the left or right side of the square/rectangle: |\n\n");
        scanf("%i", &square_2);
        square_result = square_1 * square_2;    //Calculation
        printf("\n------------------------------------------------------------------------\n\n");
        printf("The area of the square/rectangle is: %i \n", square_result);
    }
    
    //Circle:
    if(fg_operation == 2){
        printf("\nTo calculate the area of the circle, enter the radius:\n\n");
        scanf("%f", &circle_1);
        circle_result = 3.14 * pow(circle_1, 2);    //Calculation
        printf("\n------------------------------------------------------------------------\n\n");
        printf("The area of the circle is : %f \n", circle_result);
    }
    
    //Triangle:
    if(fg_operation == 3){
        printf("\nTo calculate the area of the triangle, enter the base value:\n\n");
        scanf("%i", &triangle_base);
        printf("\nEnter the height value:\n\n");
        scanf("%i", &triangle_height);
        triangle_result = (triangle_base * triangle_height) / 2;    //Calculation
        printf("\n------------------------------------------------------------------------\n\n");
        printf("The area of the triangle is : %i \n", triangle_result);
    }

//Mathematical Formulas:
    if(operation_menu == 0){
        printf("\nEnter the number corresponding to each formula and press 'Enter':\n1.Bhaskara's Formula.\n2.Relativity.\n3.Area of Square/Rectangle.\n4.Circumference.\n5.Area of Triangle.\n6.Extras.\n\n");
        scanf("%i", &form_operation);
        printf("\n------------------------------------------------------------------------\n\n");
    }
    
    //Bhaskara's Formula:
    if(form_operation == 1){
        printf("delta = b² - 4*a*c\n\n-b ± sqrt{delta}/2*a.\n");
    }
    
    //Relativity:
    if(form_operation == 2){
        printf("E = m*c².\n");
    }
    
    //Area of Square/Rectangle:
    if(form_operation == 3){
        printf("Area = Base * Height.\n");
    }
    
   if(form_operation == 5){
    printf("A = base*height/2.\n");
}

//Extras:
if(form_operation == 6){
    printf("Enter the number corresponding to the desired option:\n\n1.Value of pi.\n2.Gravity of planet Earth.\n3.Gravity of Earth's moon.\n\n");
    scanf("%i", &extra_operation);
}

//Value of Pi:
if(extra_operation == 1){
    printf("The value of Pi is: 3.14159265358979323846...\n");
}

//Gravity of planet Earth:
if(extra_operation == 2){
    printf("The gravity of Earth is: 9.807 m/s².\n");
}

//Gravity of the Moon:
if(extra_operation == 3){
    printf("The gravity of the Moon is: 1.62 m/s².\n");
}
//End:
printf("\n------------------------------------------------------------------------\n\n");
system("Pause");
return 0;
}
//End of code.
