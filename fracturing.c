//********************************************************
// fracturing.c
// Author: Aakarshan Kumar, UCFID: 5693300
// Class: COP 3223, Professor Parra
// Purpose: Ask for 5 sets of points and after each one display those values back to the user.
// Also, give the distance between the two points, perimeter, area, height, and width for  
// the respective set of points.
// Input: Values for x1, x2, y1, and y2 (asked 5 times)
//
// Output: (to the command line) The five sets of points and the values for the 
// distance between the two points, perimeter, area, height, and width for the respective set.
// //********************************************************

// Libraries
#include <stdio.h>
#include <math.h>

#define PI 3.14159 // PI Preprocessor Directive

// Fractured Helper Functions

//********************************************************
// double askForUserInput ()
//
// Purpose:        Asks the user for an input
// Output:         None
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double askForUserInput() // Gets user input 
{
    double userInput = 0;
    scanf("%lf", &userInput);

    return userInput;  
} // end of askForUserInput

//********************************************************
// void printUserInput (double x1,double x2,double y1,double y2)
//
// Purpose:        Prints a set of points stored in the input-storing variables
// Output:         Point 1 and Point 2 Values
// Precondition:    None.
// Postcondition:   None.
//********************************************************
void printUserInput(double x1,double x2,double y1,double y2) // prints user input back to the user
{
    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2, y2);
} // end of printUserInput

//********************************************************
// double getDiameter(double x1,double x2,double y1,double y2)
//
// Purpose:        Calculates the diameter for a set of points
// Output:         The diameter of the circle using two points
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double getDiameter(double x1,double x2,double y1,double y2) // calculates just the diameter of circle
{
    double diameter = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return diameter;
} // end of getDiameter

// Fractured Required Functions

//********************************************************
// double calculateDistance()
//
// Purpose:        Gets user input of a set of points, displays them back, and 
//                 shows the distance between the two points
// Output:         The entered set of points and the distance between the two points
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateDistance() // Gets user inputs for a set of points then outputs those points and the distance.
{
    // Asking the user for input and storing it in the respective variables
    printf("Enter value for x1: ");
    double x1 = askForUserInput(); 
    printf("Enter value for x2: ");
    double x2 = askForUserInput(); 
    printf("Enter value for y1: ");
    double y1 = askForUserInput(); 
    printf("Enter value for y2: ");
    double y2 = askForUserInput();
    
    printUserInput(x1, x2, y1, y2); // Outputs the entered values back
    
    // Calculate and store the distance then output the value
    double distance =  getDiameter(x1,x2,y1,y2);
    printf("The distance between the two points is %.2lf\n",distance);

    return distance;
} // end of calculateDistance

//********************************************************
// double calculatePerimeter()
//
// Purpose:        Gets user input of a set of points, displays them back, and 
//                 shows the perimeter or circumference of the circle formed by the diameter
//                 between the two points
// Output:         The entered set of points and the circumference of the circle
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculatePerimeter() // Gets user inputs for a set of points then outputs those points and the perimeter.
{
    // Asking the user for input and storing it in the respective variables
    printf("Enter value for x1: ");
    double x1 = askForUserInput(); 
    printf("Enter value for x2: ");
    double x2 = askForUserInput(); 
    printf("Enter value for y1: ");
    double y1 = askForUserInput(); 
    printf("Enter value for y2: ");
    double y2 = askForUserInput();
    
    printUserInput(x1, x2, y1, y2); // Outputs the entered values back
    
    // Calculate and store the perimeter then output the value
    double cityDiameter = getDiameter(x1,x2,y1,y2);
    double perimeter = PI*cityDiameter;
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    return 5.0;
} // end of calculatePerimeter

//********************************************************
// double calculateArea()
//
// Purpose:        Gets user input of a set of points, displays them back, and 
//                 shows the area of the circle formed by the diameter
//                 between the two points
// Output:         The entered set of points and the area of the circle
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateArea() // Gets user inputs for a set of points then outputs those points and the area.
{
    // Asking the user for input and storing it in the respective variables
    printf("Enter value for x1: ");
    double x1 = askForUserInput(); 
    printf("Enter value for x2  ");
    double x2 = askForUserInput(); 
    printf("Enter value for y1: ");
    double y1 = askForUserInput(); 
    printf("Enter value for y2: ");
    double y2 = askForUserInput();
    
    printUserInput(x1, x2, y1, y2); // Outputs the entered values back
    
    // Calculate and store the distance then output the value
    double cityRadius = getDiameter(x1,x2,y1,y2)/2;
    double area = PI*(pow(cityRadius,2));
    printf("The area of the city encompassed by your request is %.3lf\n", area);

    return 2.0;
} // end of calculateArea

//********************************************************
// double calculateWidth()
//
// Purpose:        Gets user input of a set of points, displays them back, and 
//                 shows the width of the circle formed by the diameter
//                 between the two points
// Output:         The entered set of points and the width of the circle
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateWidth() // Gets user inputs for a set of points then outputs those points and the width.
{
    // Asking the user for input and storing it in the respective variables
    printf("Enter value for x1: ");
    double x1 = askForUserInput(); 
    printf("Enter value for x2: ");
    double x2 = askForUserInput(); 
    printf("Enter value for y1: ");
    double y1 = askForUserInput(); 
    printf("Enter value for y2: ");
    double y2 = askForUserInput();
    
    printUserInput(x1, x2, y1, y2); // Outputs the entered values back
    
    // Calculate and store the distance then output the value
    double width = getDiameter(x1,x2,y1,y2);
    printf("The width of the city encompassed by your request is %.3lf\n", width);

    return 1.0;
} // end of calculateWidth

//********************************************************
// double calculateHeight()
//
// Purpose:        Gets user input of a set of points, displays them back, and 
//                 shows the height of the circle formed by the diameter
//                 between the two points
// Output:         The entered set of points and the height of the circle
// Precondition:    None.
// Postcondition:   None.
//********************************************************
double calculateHeight() // Gets user inputs for a set of points then outputs those points and the height.
{
    // Asking the user for input and storing it in the respective variables
    printf("Enter value for x1: ");
    double x1 = askForUserInput(); 
    printf("Enter value for x2: ");
    double x2 = askForUserInput(); 
    printf("Enter value for y1: ");
    double y1 = askForUserInput(); 
    printf("Enter value for y2: ");
    double y2 = askForUserInput();
    
    printUserInput(x1, y1, x2, y2); // Outputs the entered values back
    
    // Calculate and store the distance then output the value
    double height = getDiameter(x1,x2,y1,y2);
    printf("The height of the city encompassed by your request is %.3lf\n", height);

    return 1.0;
} // end of calculateHeight

// main function
int main(int argc, char**argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} // end of main function