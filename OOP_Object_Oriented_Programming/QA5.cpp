<<<<<<< Updated upstream
<<<<<<< Updated upstream
///QA 5: Create a class Student having data members to store roll number, name of student,
/// name of three subjects, max marks, min marks, obtained marks. Declared an object of class student.
/// Provide facilities to input data in data members and display result of student?
// Include the necessary libraries
#include <iostream>
#include <string>
using namespace std;

// Define a class Student
class Student {
    // Declare the data members as private
    private:
        int roll; // Roll number of the student
        string name; // Name of the student
        string subjects[3]; // An array of three subjects
        int max_marks[3]; // An array of maximum marks for each subject
        int min_marks[3]; // An array of minimum marks for each subject
        int obtained_marks[3]; // An array of obtained marks for each subject

    // Declare the member functions as public
    public:
        // A constructor to initialize the data members with default values
        Student() {
            roll = 0;
            name = "";
            for (int i = 0; i < 3; i++) {
                subjects[i] = "";
                max_marks[i] = 0;
                min_marks[i] = 0;
                obtained_marks[i] = 0;
            }
        }

        // A function to input data in data members from the user
        void input_data() {
            cout << "Enter the roll number: ";
            cin >> roll;
            cout << "Enter the name: ";
            cin.ignore(); // To ignore the newline character after entering the roll number
            getline(cin, name); // To read the whole name as a string
            for (int i = 0; i < 3; i++) {
                cout << "Enter the name of subject " << i + 1 << ": ";
                getline(cin, subjects[i]);
                cout << "Enter the maximum marks for subject " << i + 1 << ": ";
                cin >> max_marks[i];
                cout << "Enter the minimum marks for subject " << i + 1 << ": ";
                cin >> min_marks[i];
                cout << "Enter the obtained marks for subject " << i + 1 << ": ";
                cin >> obtained_marks[i];
                cin.ignore(); // To ignore the newline character after entering the obtained marks
            }
        }

        // A function to display the result of the student
        void display_result() {
            cout << "\nRoll number: " << roll << endl;
            cout << "Name: " << name << endl;
            int total_max_marks = 0; // To store the total maximum marks
            int total_min_marks = 0; // To store the total minimum marks
            int total_obtained_marks = 0; // To store the total obtained marks
            double percentage; // To store the percentage of marks
            string grade; // To store the grade of the student
            bool pass = true; // To store whether the student passed or not

            for (int i = 0; i < 3; i++) {
                cout << "\nSubject " << i + 1 << ": " << subjects[i] << endl;
                cout << "Maximum marks: " << max_marks[i] << endl;
                cout << "Minimum marks: " << min_marks[i] << endl;
                cout << "Obtained marks: " << obtained_marks[i] << endl;
                total_max_marks += max_marks[i]; // Add the maximum marks to the total maximum marks
                total_min_marks += min_marks[i]; // Add the minimum marks to the total minimum marks
                total_obtained_marks += obtained_marks[i]; // Add the obtained marks to the total obtained marks

                if (obtained_marks[i] < min_marks[i]) { // If the obtained marks are less than the minimum marks, then the student failed in that subject
                    pass = false; // Set pass to false
                    cout << "Result: Fail" << endl;
                }
                else { // Otherwise, the student passed in that subject
                    cout << "Result: Pass" << endl;
                }
            }

            percentage = (double)total_obtained_marks / total_max_marks * 100; // Calculate the percentage of marks as a double value

            if (percentage >= 90) { // If percentage is greater than or equal to 90, then grade is A+
                grade = "A+";
            }
            else if (percentage >= 80) { // If percentage is greater than or equal to 80, then grade is A
                grade = "A";
            }

            else if (percentage >= 70) { // If percentage is greater than or equal to 70, then grade is B+
                grade = "B+";
            }
            else if (percentage >= 60) { // If percentage is greater than or equal to 60, then grade is B
                grade = "B";
            }
            else if (percentage >= 50) { // If percentage is greater than or equal to 50, then grade is C
                grade = "C";
            }
            else if (percentage >= 40) { // If percentage is greater than or equal to 40, then grade is D
                grade = "D";
            }
            else { // Otherwise, grade is F
                grade = "F";
            }

            cout << "\nTotal maximum marks: " << total_max_marks << endl;
            cout << "Total minimum marks: " << total_min_marks << endl;
            cout << "Total obtained marks: " << total_obtained_marks << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            cout << "Grade: " << grade << endl;

            if (pass) { // If pass is true, then the student passed in all subjects
                cout << "Overall result: Pass" << endl;
            }
            else { // Otherwise, the student failed in one or more subjects
                cout << "Overall result: Fail" << endl;
            }
        }
};

int main() {
    // Declare an object of class Student
    Student s;

    // Call the input_data function to input data in data members
    s.input_data();

    // Call the display_result function to display the result of the student
    s.display_result();

    return 0;
}
=======
=======
>>>>>>> Stashed changes
///QA 5: Create a class Student having data members to store roll number, name of student,
/// name of three subjects, max marks, min marks, obtained marks. Declared an object of class student.
/// Provide facilities to input data in data members and display result of student?
// Include the necessary libraries
#include <iostream>
#include <string>
using namespace std;

// Define a class Student
class Student {
    // Declare the data members as private
    private:
        int roll; // Roll number of the student
        string name; // Name of the student
        string subjects[3]; // An array of three subjects
        int max_marks[3]; // An array of maximum marks for each subject
        int min_marks[3]; // An array of minimum marks for each subject
        int obtained_marks[3]; // An array of obtained marks for each subject

    // Declare the member functions as public
    public:
        // A constructor to initialize the data members with default values
        Student() {
            roll = 0;
            name = "";
            for (int i = 0; i < 3; i++) {
                subjects[i] = "";
                max_marks[i] = 0;
                min_marks[i] = 0;
                obtained_marks[i] = 0;
            }
        }

        // A function to input data in data members from the user
        void input_data() {
            cout << "Enter the roll number: ";
            cin >> roll;
            cout << "Enter the name: ";
            cin.ignore(); // To ignore the newline character after entering the roll number
            getline(cin, name); // To read the whole name as a string
            for (int i = 0; i < 3; i++) {
                cout << "Enter the name of subject " << i + 1 << ": ";
                getline(cin, subjects[i]);
                cout << "Enter the maximum marks for subject " << i + 1 << ": ";
                cin >> max_marks[i];
                cout << "Enter the minimum marks for subject " << i + 1 << ": ";
                cin >> min_marks[i];
                cout << "Enter the obtained marks for subject " << i + 1 << ": ";
                cin >> obtained_marks[i];
                cin.ignore(); // To ignore the newline character after entering the obtained marks
            }
        }

        // A function to display the result of the student
        void display_result() {
            cout << "\nRoll number: " << roll << endl;
            cout << "Name: " << name << endl;
            int total_max_marks = 0; // To store the total maximum marks
            int total_min_marks = 0; // To store the total minimum marks
            int total_obtained_marks = 0; // To store the total obtained marks
            double percentage; // To store the percentage of marks
            string grade; // To store the grade of the student
            bool pass = true; // To store whether the student passed or not

            for (int i = 0; i < 3; i++) {
                cout << "\nSubject " << i + 1 << ": " << subjects[i] << endl;
                cout << "Maximum marks: " << max_marks[i] << endl;
                cout << "Minimum marks: " << min_marks[i] << endl;
                cout << "Obtained marks: " << obtained_marks[i] << endl;
                total_max_marks += max_marks[i]; // Add the maximum marks to the total maximum marks
                total_min_marks += min_marks[i]; // Add the minimum marks to the total minimum marks
                total_obtained_marks += obtained_marks[i]; // Add the obtained marks to the total obtained marks

                if (obtained_marks[i] < min_marks[i]) { // If the obtained marks are less than the minimum marks, then the student failed in that subject
                    pass = false; // Set pass to false
                    cout << "Result: Fail" << endl;
                }
                else { // Otherwise, the student passed in that subject
                    cout << "Result: Pass" << endl;
                }
            }

            percentage = (double)total_obtained_marks / total_max_marks * 100; // Calculate the percentage of marks as a double value

            if (percentage >= 90) { // If percentage is greater than or equal to 90, then grade is A+
                grade = "A+";
            }
            else if (percentage >= 80) { // If percentage is greater than or equal to 80, then grade is A
                grade = "A";
            }

            else if (percentage >= 70) { // If percentage is greater than or equal to 70, then grade is B+
                grade = "B+";
            }
            else if (percentage >= 60) { // If percentage is greater than or equal to 60, then grade is B
                grade = "B";
            }
            else if (percentage >= 50) { // If percentage is greater than or equal to 50, then grade is C
                grade = "C";
            }
            else if (percentage >= 40) { // If percentage is greater than or equal to 40, then grade is D
                grade = "D";
            }
            else { // Otherwise, grade is F
                grade = "F";
            }

            cout << "\nTotal maximum marks: " << total_max_marks << endl;
            cout << "Total minimum marks: " << total_min_marks << endl;
            cout << "Total obtained marks: " << total_obtained_marks << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            cout << "Grade: " << grade << endl;

            if (pass) { // If pass is true, then the student passed in all subjects
                cout << "Overall result: Pass" << endl;
            }
            else { // Otherwise, the student failed in one or more subjects
                cout << "Overall result: Fail" << endl;
            }
        }
};

int main() {
    // Declare an object of class Student
    Student s;

    // Call the input_data function to input data in data members
    s.input_data();

    // Call the display_result function to display the result of the student
    s.display_result();

    return 0;
}
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
