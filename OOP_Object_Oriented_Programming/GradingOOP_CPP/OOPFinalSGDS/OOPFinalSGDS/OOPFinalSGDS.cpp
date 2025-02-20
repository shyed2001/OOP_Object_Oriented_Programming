<<<<<<< Updated upstream
<<<<<<< Updated upstream
// OOPFinalSGDS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;
// A class to store the information of a student
class Student {
private:
    // Attributes of a student
    string name; // Name of the student
    int roll; // Roll number of the student
    int marks[5]; // Marks of the student in five subjects
    string grades[5]; // Letter grades of the student in five subjects
    double cgpa; // Cumulative grade point average of the student

public:
    // A constructor to initialize the attributes from a file
    Student(ifstream& fin) {
        // Read the name and roll from the file
        fin >> name >> roll;
        // Read the marks from the file
        for (int i = 0; i < 5; i++) {
            fin >> marks[i];
        }
        // Calculate the grades and cgpa
        calculateGrades();
        calculateCGPA();
    }

    // A function to calculate the letter grades of the student
    void calculateGrades() {
        // Define the grading system as a 2D array
        int gradingSystem[10][2] = { {80, 100}, {75, 79}, {70, 74}, {65, 69}, {60, 64}, {55, 59}, {50, 54}, {45, 49}, {40, 44}, {0, 39} };
        // Define the letter grades as a 1D array
        string letterGrades[10] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "D", "F" };
        // Loop through the marks of the student
        for (int i = 0; i < 5; i++) {
            // Loop through the grading system
            for (int j = 0; j < 10; j++) {
                // Check if the mark falls in the range of the grading system
                if (marks[i] >= gradingSystem[j][0] && marks[i] <= gradingSystem[j][1]) {
                    // Assign the corresponding letter grade
                    grades[i] = letterGrades[j];
                    // Break the inner loop
                    break;
                }
            }
        }
    }

    // A function to calculate the cgpa of the student
    void calculateCGPA() {
        // Define the letter grades as a 1D array
        string letterGrades[10] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "D", "F" };

        // Define the grade points as a 1D array
        double gradePoints[10] = { 4.00, 3.75, 3.50, 3.25, 3.00, 2.75, 2.50, 2.25, 2.00, 0.00 };
        // Initialize the total grade points and the number of subjects
        double totalGradePoints = 0;
        int numSubjects = 5;
        // Loop through the grades of the student
        for (int i = 0; i < 5; i++) {
            // Loop through the grade points
            for (int j = 0; j < 10; j++) {
                // Check if the grade matches the grade point
                if (grades[i] == letterGrades[j]) {
                    // Add the grade point to the total grade points
                    totalGradePoints += gradePoints[j];
                    // Break the inner loop
                    break;
                }
            }
        }
        // Calculate the cgpa by dividing the total grade points by the number of subjects
        cgpa = totalGradePoints / numSubjects;
    }

    // A function to print the grade sheet of the student
    void printGradeSheet() {
        // Print the name and roll of the student
        cout << "Student: " << name << ", Roll: " << roll << endl;
        // Print the marks and grades of the student in five subjects
        for (int i = 0; i < 5; i++) {
            cout << "Subject" << i + 1 << ": Mark " << marks[i] << " LetterGrade " << grades[i] << endl;
        }
        // Print the cgpa of the student
        cout << "CGPA " << cgpa << endl;
    }
};

// A main function to test the program
int main() {
    // Open the input file
    ifstream fin("input.txt");
    // Check if the file is opened successfully
    if (fin.is_open()) {
        // Declare a vector of students
        vector<Student> students;
        // Declare a string to store the first line of the file
        string firstLine;
        // Read the first line of the file and ignore it
        getline(fin, firstLine);
        // Loop until the end of the file
        while (!fin.eof()) {
            // Create a student object from the file
            Student s(fin);
            // Add the student object to the vector
            students.push_back(s);
        }
        // Close the file
        fin.close();
        // Loop through the vector of students
        for (int i = 0; i < students.size(); i++) {
            // Print the grade sheet of each student
            students[i].printGradeSheet();
            // Print a blank line
            cout << endl;
        }
    }
    else {
        // Print an error message
        cout << "Error: Cannot open the file." << endl;
    }
    // Return 0 to indicate successful execution
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
=======
=======
>>>>>>> Stashed changes
// OOPFinalSGDS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;
// A class to store the information of a student
class Student {
private:
    // Attributes of a student
    string name; // Name of the student
    int roll; // Roll number of the student
    int marks[5]; // Marks of the student in five subjects
    string grades[5]; // Letter grades of the student in five subjects
    double cgpa; // Cumulative grade point average of the student

public:
    // A constructor to initialize the attributes from a file
    Student(ifstream& fin) {
        // Read the name and roll from the file
        fin >> name >> roll;
        // Read the marks from the file
        for (int i = 0; i < 5; i++) {
            fin >> marks[i];
        }
        // Calculate the grades and cgpa
        calculateGrades();
        calculateCGPA();
    }

    // A function to calculate the letter grades of the student
    void calculateGrades() {
        // Define the grading system as a 2D array
        int gradingSystem[10][2] = { {80, 100}, {75, 79}, {70, 74}, {65, 69}, {60, 64}, {55, 59}, {50, 54}, {45, 49}, {40, 44}, {0, 39} };
        // Define the letter grades as a 1D array
        string letterGrades[10] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "D", "F" };
        // Loop through the marks of the student
        for (int i = 0; i < 5; i++) {
            // Loop through the grading system
            for (int j = 0; j < 10; j++) {
                // Check if the mark falls in the range of the grading system
                if (marks[i] >= gradingSystem[j][0] && marks[i] <= gradingSystem[j][1]) {
                    // Assign the corresponding letter grade
                    grades[i] = letterGrades[j];
                    // Break the inner loop
                    break;
                }
            }
        }
    }

    // A function to calculate the cgpa of the student
    void calculateCGPA() {
        // Define the letter grades as a 1D array
        string letterGrades[10] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "D", "F" };

        // Define the grade points as a 1D array
        double gradePoints[10] = { 4.00, 3.75, 3.50, 3.25, 3.00, 2.75, 2.50, 2.25, 2.00, 0.00 };
        // Initialize the total grade points and the number of subjects
        double totalGradePoints = 0;
        int numSubjects = 5;
        // Loop through the grades of the student
        for (int i = 0; i < 5; i++) {
            // Loop through the grade points
            for (int j = 0; j < 10; j++) {
                // Check if the grade matches the grade point
                if (grades[i] == letterGrades[j]) {
                    // Add the grade point to the total grade points
                    totalGradePoints += gradePoints[j];
                    // Break the inner loop
                    break;
                }
            }
        }
        // Calculate the cgpa by dividing the total grade points by the number of subjects
        cgpa = totalGradePoints / numSubjects;
    }

    // A function to print the grade sheet of the student
    void printGradeSheet() {
        // Print the name and roll of the student
        cout << "Student: " << name << ", Roll: " << roll << endl;
        // Print the marks and grades of the student in five subjects
        for (int i = 0; i < 5; i++) {
            cout << "Subject" << i + 1 << ": Mark " << marks[i] << " LetterGrade " << grades[i] << endl;
        }
        // Print the cgpa of the student
        cout << "CGPA " << cgpa << endl;
    }
};

// A main function to test the program
int main() {
    // Open the input file
    ifstream fin("input.txt");
    // Check if the file is opened successfully
    if (fin.is_open()) {
        // Declare a vector of students
        vector<Student> students;
        // Declare a string to store the first line of the file
        string firstLine;
        // Read the first line of the file and ignore it
        getline(fin, firstLine);
        // Loop until the end of the file
        while (!fin.eof()) {
            // Create a student object from the file
            Student s(fin);
            // Add the student object to the vector
            students.push_back(s);
        }
        // Close the file
        fin.close();
        // Loop through the vector of students
        for (int i = 0; i < students.size(); i++) {
            // Print the grade sheet of each student
            students[i].printGradeSheet();
            // Print a blank line
            cout << endl;
        }
    }
    else {
        // Print an error message
        cout << "Error: Cannot open the file." << endl;
    }
    // Return 0 to indicate successful execution
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
