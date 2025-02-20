<<<<<<< Updated upstream
<<<<<<< Updated upstream
/// QA 4: Create a class named ‘AreaCalculate’ that uses overloaded function ‘Area’
///to calculate area of circle, reractangle, square and triangle.
#include <iostream>
#include <cmath>
using namespace std;

// Define a constant value for pi
const double PI = 3.14159;

// Declare a class named AreaCalculate
class AreaCalculate {
    public:
        // Declare an overloaded function named Area
        // The function will have different parameters and return types depending on the shape
        double Area(double radius); // For circle
        int Area(int length, int width); // For rectangle
        int Area(int side); // For square
        double Area(double base, double height, double angle); // For triangle
};

// Define the function for circle
double AreaCalculate::Area(double radius) {
    // Return the area of circle using the formula A = pi * r^2
    return PI * pow(radius, 2);
}

// Define the function for rectangle
int AreaCalculate::Area(int length, int width) {
    // Return the area of rectangle using the formula A = l * w
    return length * width;
}

// Define the function for square
int AreaCalculate::Area(int side) {
    // Return the area of square using the formula A = s^2
    return pow(side, 2);
}

// Define the function for triangle
double AreaCalculate::Area(double base, double height, double angle) {
    // Convert the angle from degree to radian
    angle = angle * PI / 180;
    // Return the area of triangle using the formula A = 0.5 * b * h * sin(A)
    return 0.5 * base * height * sin(angle);
}

// Create a main function to test the class and the function
int main() {
    // Create an object of the class
    AreaCalculate obj;

    // Declare some variables to store the values of the parameters
    double radius, base, height, angle;
    int length, width, side;

    // Ask the user to enter the values of the parameters for each shape
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Enter the side of the square: ";
    cin >> side;

    cout << "Enter the base, height and angle of the triangle: ";
    cin >> base >> height >> angle;

    // Call the function for each shape and display the result
    cout << "The area of the circle is " << obj.Area(radius) << endl;

    cout << "The area of the rectangle is " << obj.Area(length, width) << endl;

    cout << "The area of the square is " << obj.Area(side) << endl;

    cout << "The area of the triangle is " << obj.Area(base, height, angle) << endl;

    return 0;
}

=======
=======
>>>>>>> Stashed changes
/// QA 4: Create a class named ‘AreaCalculate’ that uses overloaded function ‘Area’
///to calculate area of circle, reractangle, square and triangle.
#include <iostream>
#include <cmath>
using namespace std;

// Define a constant value for pi
const double PI = 3.14159;

// Declare a class named AreaCalculate
class AreaCalculate {
    public:
        // Declare an overloaded function named Area
        // The function will have different parameters and return types depending on the shape
        double Area(double radius); // For circle
        int Area(int length, int width); // For rectangle
        int Area(int side); // For square
        double Area(double base, double height, double angle); // For triangle
};

// Define the function for circle
double AreaCalculate::Area(double radius) {
    // Return the area of circle using the formula A = pi * r^2
    return PI * pow(radius, 2);
}

// Define the function for rectangle
int AreaCalculate::Area(int length, int width) {
    // Return the area of rectangle using the formula A = l * w
    return length * width;
}

// Define the function for square
int AreaCalculate::Area(int side) {
    // Return the area of square using the formula A = s^2
    return pow(side, 2);
}

// Define the function for triangle
double AreaCalculate::Area(double base, double height, double angle) {
    // Convert the angle from degree to radian
    angle = angle * PI / 180;
    // Return the area of triangle using the formula A = 0.5 * b * h * sin(A)
    return 0.5 * base * height * sin(angle);
}

// Create a main function to test the class and the function
int main() {
    // Create an object of the class
    AreaCalculate obj;

    // Declare some variables to store the values of the parameters
    double radius, base, height, angle;
    int length, width, side;

    // Ask the user to enter the values of the parameters for each shape
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Enter the side of the square: ";
    cin >> side;

    cout << "Enter the base, height and angle of the triangle: ";
    cin >> base >> height >> angle;

    // Call the function for each shape and display the result
    cout << "The area of the circle is " << obj.Area(radius) << endl;

    cout << "The area of the rectangle is " << obj.Area(length, width) << endl;

    cout << "The area of the square is " << obj.Area(side) << endl;

    cout << "The area of the triangle is " << obj.Area(base, height, angle) << endl;

    return 0;
}

<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
