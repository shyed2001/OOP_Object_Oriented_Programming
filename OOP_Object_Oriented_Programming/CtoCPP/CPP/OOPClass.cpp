<<<<<<< Updated upstream
<<<<<<< Updated upstream

#include <iostream>          //   show messages on the screen.
#include <fstream>           //   read and write files.
#include <string>            //   work with text (strings).
#include <vector>            //   store many things in a list.
#include <map>               //   make a dictionary-like list.
#include <sstream>           //   work with text like

// create a class (a blueprint) called "Student" to remember information about students.
class Student {
public:
// A special function inside the class, called a "constructor," helps make new students.
// Parameterized constructor
Student(int sl, const std::string& roll, const std::string& name)
    : sl(sl), roll(roll), name(name) {}

// Updated constructor with default values
// Constructor with default values
Student(const std::string& roll = "", const std::string& name = "")
    : sl(0), roll(roll), name(name) {}

//
//Student student1(1, "12345", "John");  // Using the parameterized constructor
//Student student2;  // Using the constructor with default values
//Student student3("54321");  // Using the constructor with default values, providing only one argument

//The first constructor is a parameterized constructor that requires all three values (sl, roll, and name)
//to be passed explicitly when creating a "Student" object. The second constructor, on the other hand,
// has default values for all three parameters, allowing you to create instances with default values and
// providing flexibility when creating objects of the "Student" class.

//Explicitness: The first constructor is explicit in its requirements, as it demands to provide values for sl, roll, and name when creating a "Student" object. This can be beneficial in situations where we want to ensure that these values are always supplied and not left as empty strings. If this level of control is important for application, then the first constructor may be more appropriate.

//Default Values: The second constructor allow to create instances of the "Student" class without specifying values for sl, roll, and name. If we use this constructor in place of the first one, it means that you are making these values optional, and if they are not provided when creating an instance, they will be initialized with empty strings.
//

    // get information about a student.
    int getSl() const {
        return sl;
    }

    const std::string& getRoll() const {
        return roll;
    }

    const std::string& getName() const {
        return name;
    }

private:
    int sl;                // This keep the student's serial number.
    std::string roll;      // This keep the student's roll number.
    std::string name;      // This keep the student's name.
};

//  create another class called "Subject" to remember information about school subjects.
class Subject {
public:
    //  this constructor makes new subjects.
    Subject(const std::string& name, float credit)
        : name(name), credit(credit) {}

    // These  help us get information about a subject.
    const std::string& getName() const {
        return name;
    }

    float getCredit() const {
        return credit;
    }

private:
    std::string name;      // remember the name of the subject here.
    float credit;         //  remember how important the subject is here (credit).

};

// another class, "GradingScale," to remember how grades work.
class GradingScale {
public:
    // constructor to create different grading scales.
    GradingScale(int lowerBound, int upperBound, const std::string& letterGrade, float gradePoint)
        : lowerBound(lowerBound), upperBound(upperBound), letterGrade(letterGrade), gradePoint(gradePoint) {}

    // get grading scale information.
    int getLowerBound() const {
        return lowerBound;
    }

    int getUpperBound() const {
        return upperBound;
    }

    const std::string& getLetterGrade() const {
        return letterGrade;
    }

    float getGradePoint() const {
        return gradePoint;
    }

private:
    int lowerBound;            // remember the lowest score for a grade here.
    int upperBound;            //  remember the highest score for a grade here.
    std::string letterGrade;   // remember the letter grade (like A, B, C) here.
    float gradePoint;          //  remember how good the grade is (like 4.0 for A) here.
};


// Function to calculate and write the letter grade to the output stream
void calculateAndWriteLetterGrade(std::ostream& out, int mark, const std::vector<GradingScale>& gradingScales) {
    // Loop through the grading scales to find the appropriate letter grade
    for (const GradingScale& scale : gradingScales) {
        if (mark >= scale.getLowerBound() && mark <= scale.getUpperBound()) {
            out << '\t' << scale.getLetterGrade();
            return; // Exit the loop when the appropriate scale is found
        }
    }
    // If no matching scale is found, you can handle it as needed (e.g., write "N/A" or an error message).
    out << "N/A"; // Default value if no matching scale is found
}




// main part/entry point of the program starts
int main() {
    // start by reading student information from a file called "StudentInf.txt."
    std::ifstream studentFile("StudentInf.txt");
    if (!studentFile.is_open()) {
        std::cerr << "Error opening StudentInf.txt." << std::endl;
        return 1;
    }

    std::vector<Student> students; //  create a list to remember all the students.
    std::string studentLine;       //  an object where to store each line from the file.
    std::getline(studentFile, studentLine); //  read the first line (which is the header) and ignore it.

    //  go through each line of student information and remember it in our list.
    while (std::getline(studentFile, studentLine)) {
        size_t tabPos1 = studentLine.find('\t'); // look for a tab character (like pressing the Tab key).
        size_t tabPos2 = studentLine.find('\t', tabPos1 + 1); //  look for another tab after the first one.

        // find both tabs to understand the student's information.
        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos) {
            int sl = std::stoi(studentLine.substr(0, tabPos1)); //  get the serial number (a number).
            std::string roll = studentLine.substr(tabPos1 + 1, tabPos2 - tabPos1 - 1); //  get the roll number.
            std::string name = studentLine.substr(tabPos2 + 1); //  get the student's name.

            students.emplace_back(sl, roll, name); //  add this student to our list.
        }
    }
    studentFile.close(); //  close the file after we're done with it.

    //  do similar things for subjects and grading scales, but I'll continue in the next message due to length limitations.
    // Read subject information from SubjectInf.txt
    std::ifstream subjectFile("SubjectInf.txt");
    if (!subjectFile.is_open()) {
        std::cerr << "Error opening SubjectInf.txt." << std::endl;
        return 1;
    }

    std::vector<Subject> subjects; // create a list to remember all the school subjects.

    std::string subjectLine;       // an variable object where to put each line from the file.
    std::getline(subjectFile, subjectLine); // read the first line (which is the header) and ignore it.
    // After this line of code is executed, subjectLine contains the header, but it's usually not used further in the code, effectively ignoring it while setting up the stream to read the actual data lines.

    //Subsequent calls to std::getline will read and process the data lines from the file.

    // go through each line of subject information and remember it in our list.
    float TotalCredits = 0.0;
    while (std::getline(subjectFile, subjectLine)) {
        size_t tabPos = subjectLine.find('\t'); // look for a tab character (the Tab key).

        //  understand the subject's information.
        if (tabPos != std::string::npos) {
            std::string name = subjectLine.substr(0, tabPos); //  get the name of the subject.
            float credit = std::stof(subjectLine.substr(tabPos + 1)); // get how important the subject is (like 3.0).
            TotalCredits += credit;
            subjects.emplace_back(name, credit); //  add this subject to list/vector.
        }
    }
    subjectFile.close(); // close the file after we're done with it.

    // read grading scale information from Grading.txt.
    std::ifstream gradingFile("Grading.txt");
    if (!gradingFile.is_open()) {
        std::cerr << "Error opening Grading.txt." << std::endl;
        return 1;
    }

    std::vector<GradingScale> gradingScales; // create a list to remember all the grading scales.
    std::string gradingLine;                 // This is like a  box to put each line from the file.
    std::getline(gradingFile, gradingLine);   //  read the first line (which is the header) and ignore it.

    //  go through each line of grading scale information and remember it in our list.
    while (std::getline(gradingFile, gradingLine)) {
        size_t tabPos1 = gradingLine.find('\t');        // look for the first tab character.
        size_t tabPos2 = gradingLine.find('\t', tabPos1 + 1); // look for the second tab character.
        size_t tabPos3 = gradingLine.find('\t', tabPos2 + 1); // look for the third tab character.

        // all three tabs the grading scale information.
        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos && tabPos3 != std::string::npos) {
            int lowerBound = std::stoi(gradingLine.substr(0, tabPos1));         //  get the lowest score for the grade.
            int upperBound = std::stoi(gradingLine.substr(tabPos1 + 1, tabPos2 - (tabPos1 + 1))); //  get the highest score.
            std::string letterGrade = gradingLine.substr(tabPos2 + 1, tabPos3 - (tabPos2 + 1));   // get the letter grade (A,B etc).
            float gradePoint = std::stof(gradingLine.substr(tabPos3 + 1)); //  get how good the grade is (4.0 for A).

            gradingScales.emplace_back(lowerBound, upperBound, letterGrade, gradePoint); //  add this grading scale to our list/vector .
        }
    }
    gradingFile.close(); //  close the file after we're done with it.

    //  read student marks from SubjectMark.txt and connect them.
    std::ifstream subjectMarkFile("SubjectMark.txt");
    if (!subjectMarkFile.is_open()) {
        std::cerr << "Error opening SubjectMark.txt." << std::endl;
        return 1;
    }

    std::vector<std::map<std::string, int>> studentMarks; // create a list to remember all the students' marks.

// The declaration std::vector<std::map<std::string, int>> studentMarks; creates a container called studentMarks.
// This container is a vector (of maps), which means it can hold multiple maps. map is a key value data pair.
// Each map inside the vector represents a collection of student names (strings) and their associated marks (integers).
//
//In other words, studentMarks is a list or a collection that can store the marks of multiple students,
//with each student identified by their name (a string) and associated with a mark (an integer).
//This data structure is useful for storing and organizing data where you need to keep track of student marks and associate them with individual student names.

    std::vector<std::string> subjectNames; //  create a list to remember the names of the subjects.
    std::string subjectMarkLine;            // used to store each line from the file.
    std::getline(subjectMarkFile, subjectMarkLine); //  read the first line (which is the header).

    //  going to break down the header to get the subject names.
    std::istringstream headerStream(subjectMarkLine); // This helps to read text

    std::string column; // put each part of the header in this.

    //  skip the first two columns in the header ("Sl" and "Roll") and store the rest (subject names) later.
    std::getline(headerStream, column, '\t'); //  skip the first column (Sl).
    std::getline(headerStream, column, '\t'); // skip the second column (Roll).
   // Nothing was done with the first two column values

    // Now read and store the subject names from the header.
    while (std::getline(headerStream, column, '\t')) {
        subjectNames.push_back(column); //  add each subject name to subjectNames vector list.
    }

    //  go through each line of student marks and connect them to the subjects later.
    while (std::getline(subjectMarkFile, subjectMarkLine)) {
        std::istringstream lineStream(subjectMarkLine); // to read each line
        std::string sl, roll, mark; // used for student info and marks.
        std::getline(lineStream, sl, '\t');  //  get the student's serial number (sl).
        std::getline(lineStream, roll, '\t'); //  get the student's roll number.


        // connect them to the subjects by map key value pair
        std::map<std::string, int> marks; //  store subject marks for this student.

        //  go through each subject and get the marks for the student.
        for (const std::string& subjectName : subjectNames) {
            std::getline(lineStream, mark, '\t'); //  get the mark for the subject.
            marks[subjectName] = std::stoi(mark); //  connect the mark to the subject name and store it.
        }

        studentMarks.push_back(marks); //  add this student's marks to our list.
    }

    subjectMarkFile.close(); // close the file after we're done with it.





    // create an output file called "OOPstudent_grades.txt" to write our results.
    std::ofstream OutputFile2("OOP_S_G.txt");
    if (!OutputFile2.is_open()) {
        std::cerr << "Error creating OutputFile2.txt." << std::endl;
        return 1;
    }

    //  start by writing the header in the output file.
    OutputFile2<< "Sl\tRoll\tName";
    for (const std::string& subjectName : subjectNames) {
        OutputFile2 << "\t" << subjectName;
        //OutputFile2 << "\t" << subjectName;
    }
    OutputFile2 << std::endl;

    /// write the student data along with their marks to the output file.
//    for (size_t i = 0; i < students.size(); ++i) {
//        OutputFile2 << students[i].getSl() << "\t" << students[i].getRoll() << "\t" << students[i].getName();
//
//        for (const std::string& subjectName : subjectNames) {
//            OutputFile2<< "\t" << studentMarks[i][subjectName];
//
//        }
//
//        OutputFile2 << std::endl;
//    }


/// Write the student data along with their letter grades to the output file.
for (size_t i = 0; i < students.size(); ++i) {
    OutputFile2 << students[i].getSl() << "\t" << students[i].getRoll() << "\t" << students[i].getName();

    for (const std::string& subjectName : subjectNames) {
        int mark = studentMarks[i][subjectName];
        calculateAndWriteLetterGrade(OutputFile2, mark, gradingScales); // Calculate and write the letter grade
    }

    OutputFile2 << std::endl;
}
    OutputFile2<< "\n Total Offered Credit \t" <<TotalCredits << std::endl;

    OutputFile2.close(); // close the output file.



    // print a message to let the user know that the data has been written to the output file.
    std::cout << "Data has been written to OOP_S_G.txt." << std::endl;




    return 0;
}



/**================================================XXXXXXXX==============================================================**/

/**C++ program steps:

Read and store the student information from "StudentInf.txt" into a data structure, such as a map or vector.
Read and store the subject information from "SubjectInf.txt" into another data structure, such as a map or vector.
Read and store the grading information from "Grading.txt" into another data structure, such as a map or vector.
Read and store the subject marks from "SubjectMark.txt" into a suitable data structure, such as a 2D vector.
Calculate the earned credit hours and weighted credit GPA for each student based on their subject marks and the grading information.
Print the desired output to  the console and/or an output file, "OOPstudent_grades.txt".

**/


/**

Classes, Functions/Methods and Members:

Class: Student
+------------------------+
| Private Attributes     |
| - roll                 |
| - name                 |
| - sl                   |
|                        |
| Methods                |
| - getRoll()            |
| - getName()            |
| - getSl()              |
|                        |
| Relationships          |
| - Has StudentMarks     |
+------------------------+

Class: Subject
+------------------------+
| Private Attributes     |
| - subjectName          |
| - credit               |
|                        |
| Methods                |
| - getSubjectName()     |
| - getCredit()          |
|                        |
| Relationships          |
| - None                 |
+------------------------+

Class: Grading
+------------------------+
| Private Attributes     |
| - letterGrade          |
| - lowerBound           |
| - upperBound           |
|                        |
| Methods                |
| - getLetterGrade()     |
| - getLowerBound()      |
| - getUpperBound()      |
|                        |
| Relationships          |
| - None                 |
+------------------------+

Class: StudentMarks
+------------------------+
| Private Attributes     |
| - marks                |
|                        |
| Methods                |
| - addMark()            |
| - getMarks()           |
| - calculateCreditAndGPA() |
|                        |
| Relationships          |
| - Belongs to Student   |
| - Uses Subject         |
| - Uses Grading         |
+------------------------+

Objects:

- student: Instance of Student class
  - Has: StudentMarks

- subject: Instance of Subject class

- grading: Instance of Grading class

Relationships:

- student has a StudentMarks object.
- StudentMarks belongs to Student.
- StudentMarks uses Subject.
- StudentMarks uses Grading.



Class Diagram for Student Information System

Classes:
* Student
* Subject
* Grading
* StudentMarks

Relationships:
* StudentMarks has a one-to-many relationship with Student, meaning that a Student can have multiple StudentMarks, but a StudentMark can only belong to one Student.
* StudentMarks has a many-to-many relationship with Subject, meaning that a Student can have marks for multiple Subjects, and a Subject can have marks for multiple Students.
* StudentMarks has a many-to-many relationship with Grading, meaning that a StudentMark can have a corresponding Grading, and a Grading can have multiple corresponding StudentMarks.

Objects:
* students: A map of Student objects, keyed by their roll number.
* subjects: A map of Subject objects, keyed by their subject name.
* gradingInfo: A map of Grading objects, keyed by their letter grade.
* studentMarks: A map of StudentMarks objects, keyed by student roll number.

How the objects interact:
* The main() function reads the input data from the four text files and populates the students, subjects, gradingInfo, and studentMarks maps.
* The calculateCreditAndGPA() method on the StudentMarks class calculates the earned credit hours and GPA for a student based on their marks and the subject and grading information.
* The main() function then writes the calculated GPA for each student to the StudentGPA.txt file.


Here is a more detailed explanation of the relationships between the classes:

* **StudentMarks has a one-to-many relationship with Student:**
This means that a Student object can have multiple StudentMarks objects associated with it, but a StudentMarks object can only be associated with one Student object.
For example, a student may have a StudentMarks object for each semester or each course they take.

* **StudentMarks has a many-to-many relationship with Subject:**
This means that a StudentMarks object can have multiple Subject objects associated with it, and a Subject object can have multiple StudentMarks objects associated with it.
For example, a StudentMarks object may have Subject objects associated with it for all of the courses a student has taken,
and a Subject object may have StudentMarks objects associated with it for all of the students who have taken that course.

* **StudentMarks has a many-to-many relationship with Grading:**
This means that a StudentMarks object can have a Grading object associated with it, and a Grading object can have multiple StudentMarks objects associated with it.
For example, a StudentMarks object may have a Grading object associated with it for a particular course,
and a Grading object may have StudentMarks objects associated with it for all of the students who have taken that course and received that letter grade.



**/
=======
=======
>>>>>>> Stashed changes

#include <iostream>          //   show messages on the screen.
#include <fstream>           //   read and write files.
#include <string>            //   work with text (strings).
#include <vector>            //   store many things in a list.
#include <map>               //   make a dictionary-like list.
#include <sstream>           //   work with text like

// create a class (a blueprint) called "Student" to remember information about students.
class Student {
public:
// A special function inside the class, called a "constructor," helps make new students.
// Parameterized constructor
Student(int sl, const std::string& roll, const std::string& name)
    : sl(sl), roll(roll), name(name) {}

// Updated constructor with default values
// Constructor with default values
Student(const std::string& roll = "", const std::string& name = "")
    : sl(0), roll(roll), name(name) {}

//
//Student student1(1, "12345", "John");  // Using the parameterized constructor
//Student student2;  // Using the constructor with default values
//Student student3("54321");  // Using the constructor with default values, providing only one argument

//The first constructor is a parameterized constructor that requires all three values (sl, roll, and name)
//to be passed explicitly when creating a "Student" object. The second constructor, on the other hand,
// has default values for all three parameters, allowing you to create instances with default values and
// providing flexibility when creating objects of the "Student" class.

//Explicitness: The first constructor is explicit in its requirements, as it demands to provide values for sl, roll, and name when creating a "Student" object. This can be beneficial in situations where we want to ensure that these values are always supplied and not left as empty strings. If this level of control is important for application, then the first constructor may be more appropriate.

//Default Values: The second constructor allow to create instances of the "Student" class without specifying values for sl, roll, and name. If we use this constructor in place of the first one, it means that you are making these values optional, and if they are not provided when creating an instance, they will be initialized with empty strings.
//

    // get information about a student.
    int getSl() const {
        return sl;
    }

    const std::string& getRoll() const {
        return roll;
    }

    const std::string& getName() const {
        return name;
    }

private:
    int sl;                // This keep the student's serial number.
    std::string roll;      // This keep the student's roll number.
    std::string name;      // This keep the student's name.
};

//  create another class called "Subject" to remember information about school subjects.
class Subject {
public:
    //  this constructor makes new subjects.
    Subject(const std::string& name, float credit)
        : name(name), credit(credit) {}

    // These  help us get information about a subject.
    const std::string& getName() const {
        return name;
    }

    float getCredit() const {
        return credit;
    }

private:
    std::string name;      // remember the name of the subject here.
    float credit;         //  remember how important the subject is here (credit).

};

// another class, "GradingScale," to remember how grades work.
class GradingScale {
public:
    // constructor to create different grading scales.
    GradingScale(int lowerBound, int upperBound, const std::string& letterGrade, float gradePoint)
        : lowerBound(lowerBound), upperBound(upperBound), letterGrade(letterGrade), gradePoint(gradePoint) {}

    // get grading scale information.
    int getLowerBound() const {
        return lowerBound;
    }

    int getUpperBound() const {
        return upperBound;
    }

    const std::string& getLetterGrade() const {
        return letterGrade;
    }

    float getGradePoint() const {
        return gradePoint;
    }

private:
    int lowerBound;            // remember the lowest score for a grade here.
    int upperBound;            //  remember the highest score for a grade here.
    std::string letterGrade;   // remember the letter grade (like A, B, C) here.
    float gradePoint;          //  remember how good the grade is (like 4.0 for A) here.
};


// Function to calculate and write the letter grade to the output stream
void calculateAndWriteLetterGrade(std::ostream& out, int mark, const std::vector<GradingScale>& gradingScales) {
    // Loop through the grading scales to find the appropriate letter grade
    for (const GradingScale& scale : gradingScales) {
        if (mark >= scale.getLowerBound() && mark <= scale.getUpperBound()) {
            out << '\t' << scale.getLetterGrade();
            return; // Exit the loop when the appropriate scale is found
        }
    }
    // If no matching scale is found, you can handle it as needed (e.g., write "N/A" or an error message).
    out << "N/A"; // Default value if no matching scale is found
}




// main part/entry point of the program starts
int main() {
    // start by reading student information from a file called "StudentInf.txt."
    std::ifstream studentFile("StudentInf.txt");
    if (!studentFile.is_open()) {
        std::cerr << "Error opening StudentInf.txt." << std::endl;
        return 1;
    }

    std::vector<Student> students; //  create a list to remember all the students.
    std::string studentLine;       //  an object where to store each line from the file.
    std::getline(studentFile, studentLine); //  read the first line (which is the header) and ignore it.

    //  go through each line of student information and remember it in our list.
    while (std::getline(studentFile, studentLine)) {
        size_t tabPos1 = studentLine.find('\t'); // look for a tab character (like pressing the Tab key).
        size_t tabPos2 = studentLine.find('\t', tabPos1 + 1); //  look for another tab after the first one.

        // find both tabs to understand the student's information.
        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos) {
            int sl = std::stoi(studentLine.substr(0, tabPos1)); //  get the serial number (a number).
            std::string roll = studentLine.substr(tabPos1 + 1, tabPos2 - tabPos1 - 1); //  get the roll number.
            std::string name = studentLine.substr(tabPos2 + 1); //  get the student's name.

            students.emplace_back(sl, roll, name); //  add this student to our list.
        }
    }
    studentFile.close(); //  close the file after we're done with it.

    //  do similar things for subjects and grading scales, but I'll continue in the next message due to length limitations.
    // Read subject information from SubjectInf.txt
    std::ifstream subjectFile("SubjectInf.txt");
    if (!subjectFile.is_open()) {
        std::cerr << "Error opening SubjectInf.txt." << std::endl;
        return 1;
    }

    std::vector<Subject> subjects; // create a list to remember all the school subjects.

    std::string subjectLine;       // an variable object where to put each line from the file.
    std::getline(subjectFile, subjectLine); // read the first line (which is the header) and ignore it.
    // After this line of code is executed, subjectLine contains the header, but it's usually not used further in the code, effectively ignoring it while setting up the stream to read the actual data lines.

    //Subsequent calls to std::getline will read and process the data lines from the file.

    // go through each line of subject information and remember it in our list.
    float TotalCredits = 0.0;
    while (std::getline(subjectFile, subjectLine)) {
        size_t tabPos = subjectLine.find('\t'); // look for a tab character (the Tab key).

        //  understand the subject's information.
        if (tabPos != std::string::npos) {
            std::string name = subjectLine.substr(0, tabPos); //  get the name of the subject.
            float credit = std::stof(subjectLine.substr(tabPos + 1)); // get how important the subject is (like 3.0).
            TotalCredits += credit;
            subjects.emplace_back(name, credit); //  add this subject to list/vector.
        }
    }
    subjectFile.close(); // close the file after we're done with it.

    // read grading scale information from Grading.txt.
    std::ifstream gradingFile("Grading.txt");
    if (!gradingFile.is_open()) {
        std::cerr << "Error opening Grading.txt." << std::endl;
        return 1;
    }

    std::vector<GradingScale> gradingScales; // create a list to remember all the grading scales.
    std::string gradingLine;                 // This is like a  box to put each line from the file.
    std::getline(gradingFile, gradingLine);   //  read the first line (which is the header) and ignore it.

    //  go through each line of grading scale information and remember it in our list.
    while (std::getline(gradingFile, gradingLine)) {
        size_t tabPos1 = gradingLine.find('\t');        // look for the first tab character.
        size_t tabPos2 = gradingLine.find('\t', tabPos1 + 1); // look for the second tab character.
        size_t tabPos3 = gradingLine.find('\t', tabPos2 + 1); // look for the third tab character.

        // all three tabs the grading scale information.
        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos && tabPos3 != std::string::npos) {
            int lowerBound = std::stoi(gradingLine.substr(0, tabPos1));         //  get the lowest score for the grade.
            int upperBound = std::stoi(gradingLine.substr(tabPos1 + 1, tabPos2 - (tabPos1 + 1))); //  get the highest score.
            std::string letterGrade = gradingLine.substr(tabPos2 + 1, tabPos3 - (tabPos2 + 1));   // get the letter grade (A,B etc).
            float gradePoint = std::stof(gradingLine.substr(tabPos3 + 1)); //  get how good the grade is (4.0 for A).

            gradingScales.emplace_back(lowerBound, upperBound, letterGrade, gradePoint); //  add this grading scale to our list/vector .
        }
    }
    gradingFile.close(); //  close the file after we're done with it.

    //  read student marks from SubjectMark.txt and connect them.
    std::ifstream subjectMarkFile("SubjectMark.txt");
    if (!subjectMarkFile.is_open()) {
        std::cerr << "Error opening SubjectMark.txt." << std::endl;
        return 1;
    }

    std::vector<std::map<std::string, int>> studentMarks; // create a list to remember all the students' marks.

// The declaration std::vector<std::map<std::string, int>> studentMarks; creates a container called studentMarks.
// This container is a vector (of maps), which means it can hold multiple maps. map is a key value data pair.
// Each map inside the vector represents a collection of student names (strings) and their associated marks (integers).
//
//In other words, studentMarks is a list or a collection that can store the marks of multiple students,
//with each student identified by their name (a string) and associated with a mark (an integer).
//This data structure is useful for storing and organizing data where you need to keep track of student marks and associate them with individual student names.

    std::vector<std::string> subjectNames; //  create a list to remember the names of the subjects.
    std::string subjectMarkLine;            // used to store each line from the file.
    std::getline(subjectMarkFile, subjectMarkLine); //  read the first line (which is the header).

    //  going to break down the header to get the subject names.
    std::istringstream headerStream(subjectMarkLine); // This helps to read text

    std::string column; // put each part of the header in this.

    //  skip the first two columns in the header ("Sl" and "Roll") and store the rest (subject names) later.
    std::getline(headerStream, column, '\t'); //  skip the first column (Sl).
    std::getline(headerStream, column, '\t'); // skip the second column (Roll).
   // Nothing was done with the first two column values

    // Now read and store the subject names from the header.
    while (std::getline(headerStream, column, '\t')) {
        subjectNames.push_back(column); //  add each subject name to subjectNames vector list.
    }

    //  go through each line of student marks and connect them to the subjects later.
    while (std::getline(subjectMarkFile, subjectMarkLine)) {
        std::istringstream lineStream(subjectMarkLine); // to read each line
        std::string sl, roll, mark; // used for student info and marks.
        std::getline(lineStream, sl, '\t');  //  get the student's serial number (sl).
        std::getline(lineStream, roll, '\t'); //  get the student's roll number.


        // connect them to the subjects by map key value pair
        std::map<std::string, int> marks; //  store subject marks for this student.

        //  go through each subject and get the marks for the student.
        for (const std::string& subjectName : subjectNames) {
            std::getline(lineStream, mark, '\t'); //  get the mark for the subject.
            marks[subjectName] = std::stoi(mark); //  connect the mark to the subject name and store it.
        }

        studentMarks.push_back(marks); //  add this student's marks to our list.
    }

    subjectMarkFile.close(); // close the file after we're done with it.





    // create an output file called "OOPstudent_grades.txt" to write our results.
    std::ofstream OutputFile2("OOP_S_G.txt");
    if (!OutputFile2.is_open()) {
        std::cerr << "Error creating OutputFile2.txt." << std::endl;
        return 1;
    }

    //  start by writing the header in the output file.
    OutputFile2<< "Sl\tRoll\tName";
    for (const std::string& subjectName : subjectNames) {
        OutputFile2 << "\t" << subjectName;
        //OutputFile2 << "\t" << subjectName;
    }
    OutputFile2 << std::endl;

    /// write the student data along with their marks to the output file.
//    for (size_t i = 0; i < students.size(); ++i) {
//        OutputFile2 << students[i].getSl() << "\t" << students[i].getRoll() << "\t" << students[i].getName();
//
//        for (const std::string& subjectName : subjectNames) {
//            OutputFile2<< "\t" << studentMarks[i][subjectName];
//
//        }
//
//        OutputFile2 << std::endl;
//    }


/// Write the student data along with their letter grades to the output file.
for (size_t i = 0; i < students.size(); ++i) {
    OutputFile2 << students[i].getSl() << "\t" << students[i].getRoll() << "\t" << students[i].getName();

    for (const std::string& subjectName : subjectNames) {
        int mark = studentMarks[i][subjectName];
        calculateAndWriteLetterGrade(OutputFile2, mark, gradingScales); // Calculate and write the letter grade
    }

    OutputFile2 << std::endl;
}
    OutputFile2<< "\n Total Offered Credit \t" <<TotalCredits << std::endl;

    OutputFile2.close(); // close the output file.



    // print a message to let the user know that the data has been written to the output file.
    std::cout << "Data has been written to OOP_S_G.txt." << std::endl;




    return 0;
}



/**================================================XXXXXXXX==============================================================**/

/**C++ program steps:

Read and store the student information from "StudentInf.txt" into a data structure, such as a map or vector.
Read and store the subject information from "SubjectInf.txt" into another data structure, such as a map or vector.
Read and store the grading information from "Grading.txt" into another data structure, such as a map or vector.
Read and store the subject marks from "SubjectMark.txt" into a suitable data structure, such as a 2D vector.
Calculate the earned credit hours and weighted credit GPA for each student based on their subject marks and the grading information.
Print the desired output to  the console and/or an output file, "OOPstudent_grades.txt".

**/


/**

Classes, Functions/Methods and Members:

Class: Student
+------------------------+
| Private Attributes     |
| - roll                 |
| - name                 |
| - sl                   |
|                        |
| Methods                |
| - getRoll()            |
| - getName()            |
| - getSl()              |
|                        |
| Relationships          |
| - Has StudentMarks     |
+------------------------+

Class: Subject
+------------------------+
| Private Attributes     |
| - subjectName          |
| - credit               |
|                        |
| Methods                |
| - getSubjectName()     |
| - getCredit()          |
|                        |
| Relationships          |
| - None                 |
+------------------------+

Class: Grading
+------------------------+
| Private Attributes     |
| - letterGrade          |
| - lowerBound           |
| - upperBound           |
|                        |
| Methods                |
| - getLetterGrade()     |
| - getLowerBound()      |
| - getUpperBound()      |
|                        |
| Relationships          |
| - None                 |
+------------------------+

Class: StudentMarks
+------------------------+
| Private Attributes     |
| - marks                |
|                        |
| Methods                |
| - addMark()            |
| - getMarks()           |
| - calculateCreditAndGPA() |
|                        |
| Relationships          |
| - Belongs to Student   |
| - Uses Subject         |
| - Uses Grading         |
+------------------------+

Objects:

- student: Instance of Student class
  - Has: StudentMarks

- subject: Instance of Subject class

- grading: Instance of Grading class

Relationships:

- student has a StudentMarks object.
- StudentMarks belongs to Student.
- StudentMarks uses Subject.
- StudentMarks uses Grading.



Class Diagram for Student Information System

Classes:
* Student
* Subject
* Grading
* StudentMarks

Relationships:
* StudentMarks has a one-to-many relationship with Student, meaning that a Student can have multiple StudentMarks, but a StudentMark can only belong to one Student.
* StudentMarks has a many-to-many relationship with Subject, meaning that a Student can have marks for multiple Subjects, and a Subject can have marks for multiple Students.
* StudentMarks has a many-to-many relationship with Grading, meaning that a StudentMark can have a corresponding Grading, and a Grading can have multiple corresponding StudentMarks.

Objects:
* students: A map of Student objects, keyed by their roll number.
* subjects: A map of Subject objects, keyed by their subject name.
* gradingInfo: A map of Grading objects, keyed by their letter grade.
* studentMarks: A map of StudentMarks objects, keyed by student roll number.

How the objects interact:
* The main() function reads the input data from the four text files and populates the students, subjects, gradingInfo, and studentMarks maps.
* The calculateCreditAndGPA() method on the StudentMarks class calculates the earned credit hours and GPA for a student based on their marks and the subject and grading information.
* The main() function then writes the calculated GPA for each student to the StudentGPA.txt file.


Here is a more detailed explanation of the relationships between the classes:

* **StudentMarks has a one-to-many relationship with Student:**
This means that a Student object can have multiple StudentMarks objects associated with it, but a StudentMarks object can only be associated with one Student object.
For example, a student may have a StudentMarks object for each semester or each course they take.

* **StudentMarks has a many-to-many relationship with Subject:**
This means that a StudentMarks object can have multiple Subject objects associated with it, and a Subject object can have multiple StudentMarks objects associated with it.
For example, a StudentMarks object may have Subject objects associated with it for all of the courses a student has taken,
and a Subject object may have StudentMarks objects associated with it for all of the students who have taken that course.

* **StudentMarks has a many-to-many relationship with Grading:**
This means that a StudentMarks object can have a Grading object associated with it, and a Grading object can have multiple StudentMarks objects associated with it.
For example, a StudentMarks object may have a Grading object associated with it for a particular course,
and a Grading object may have StudentMarks objects associated with it for all of the students who have taken that course and received that letter grade.



**/
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
