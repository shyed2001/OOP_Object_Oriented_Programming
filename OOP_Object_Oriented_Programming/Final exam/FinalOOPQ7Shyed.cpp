<<<<<<< Updated upstream
<<<<<<< Updated upstream
/// Create a OOP program to prepare grade sheet of a Summer2023 semester
/// taking student wise marks for five subjects from a file.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

class Student {
public:
    std::string name;
    int roll;
    std::vector<int> marks;

    void calculateLetterGrade() {
        for (int i = 0; i < marks.size(); ++i) {
            grades.push_back(getLetterGrade(marks[i]));
        }
    }

    std::string getLetterGrade(int mark) const {
        if (mark >= 80) return "A+";
        else if (mark >= 75) return "A";
        else if (mark >= 70) return "A-";
        else if (mark >= 65) return "B+";
        else if (mark >= 60) return "B";
        else if (mark >= 55) return "B-";
        else if (mark >= 50) return "C+";
        else if (mark >= 45) return "C";
        else if (mark >= 40) return "D";
        else return "F";
    }

    double calculateGradePoint(std::string grade) const {
        if (grade == "A+") return 4.00;
        else if (grade == "A") return 3.75;
        else if (grade == "A-") return 3.50;
        else if (grade == "B+") return 3.25;
        else if (grade == "B") return 3.00;
        else if (grade == "B-") return 2.75;
        else if (grade == "C+") return 2.50;
        else if (grade == "C") return 2.25;
        else if (grade == "D") return 2.00;
        else return 0.00;
    }

    double calculateCGPA() const {
        double totalGradePoints = 0.0;
        for (const std::string& grade : grades) {
            totalGradePoints += calculateGradePoint(grade);
        }
        return totalGradePoints / grades.size();
    }

    void printGradeSheet() const {
        std::cout << "Student: " << name << ", Roll: " << roll << std::endl;
        for (int i = 0; i < marks.size(); ++i) {
            std::cout << "Subject" << i + 1 << ": Mark " << marks[i] << " LetterGrade " << grades[i] << std::endl;
        }
        std::cout << "CGPA: " << std::fixed << std::setprecision(2) << calculateCGPA() << std::endl;
        std::cout << std::endl;
    }

private:
    std::vector<std::string> grades;
};

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    // Read the attribute names from the first line
    std::string line;
    std::getline(inputFile, line);
    std::istringstream attributeStream(line);
    std::vector<std::string> attributes;
    std::string attribute;
    while (attributeStream >> attribute) {
        attributes.push_back(attribute);
    }

    // Read student data and create Student objects
    std::vector<Student> students;
    while (std::getline(inputFile, line)) {
        std::istringstream dataStream(line);
        Student student;
        dataStream >> student.name >> student.roll;
        int mark;
        while (dataStream >> mark) {
            student.marks.push_back(mark);
        }
        student.calculateLetterGrade();
        students.push_back(student);
    }

    // Print the grade sheet for each student
    for (const Student &student : students) {
        student.printGradeSheet();
    }

    inputFile.close();
    return 0;
}
=======
=======
>>>>>>> Stashed changes
/// Create a OOP program to prepare grade sheet of a Summer2023 semester
/// taking student wise marks for five subjects from a file.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

class Student {
public:
    std::string name;
    int roll;
    std::vector<int> marks;

    void calculateLetterGrade() {
        for (int i = 0; i < marks.size(); ++i) {
            grades.push_back(getLetterGrade(marks[i]));
        }
    }

    std::string getLetterGrade(int mark) const {
        if (mark >= 80) return "A+";
        else if (mark >= 75) return "A";
        else if (mark >= 70) return "A-";
        else if (mark >= 65) return "B+";
        else if (mark >= 60) return "B";
        else if (mark >= 55) return "B-";
        else if (mark >= 50) return "C+";
        else if (mark >= 45) return "C";
        else if (mark >= 40) return "D";
        else return "F";
    }

    double calculateGradePoint(std::string grade) const {
        if (grade == "A+") return 4.00;
        else if (grade == "A") return 3.75;
        else if (grade == "A-") return 3.50;
        else if (grade == "B+") return 3.25;
        else if (grade == "B") return 3.00;
        else if (grade == "B-") return 2.75;
        else if (grade == "C+") return 2.50;
        else if (grade == "C") return 2.25;
        else if (grade == "D") return 2.00;
        else return 0.00;
    }

    double calculateCGPA() const {
        double totalGradePoints = 0.0;
        for (const std::string& grade : grades) {
            totalGradePoints += calculateGradePoint(grade);
        }
        return totalGradePoints / grades.size();
    }

    void printGradeSheet() const {
        std::cout << "Student: " << name << ", Roll: " << roll << std::endl;
        for (int i = 0; i < marks.size(); ++i) {
            std::cout << "Subject" << i + 1 << ": Mark " << marks[i] << " LetterGrade " << grades[i] << std::endl;
        }
        std::cout << "CGPA: " << std::fixed << std::setprecision(2) << calculateCGPA() << std::endl;
        std::cout << std::endl;
    }

private:
    std::vector<std::string> grades;
};

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    // Read the attribute names from the first line
    std::string line;
    std::getline(inputFile, line);
    std::istringstream attributeStream(line);
    std::vector<std::string> attributes;
    std::string attribute;
    while (attributeStream >> attribute) {
        attributes.push_back(attribute);
    }

    // Read student data and create Student objects
    std::vector<Student> students;
    while (std::getline(inputFile, line)) {
        std::istringstream dataStream(line);
        Student student;
        dataStream >> student.name >> student.roll;
        int mark;
        while (dataStream >> mark) {
            student.marks.push_back(mark);
        }
        student.calculateLetterGrade();
        students.push_back(student);
    }

    // Print the grade sheet for each student
    for (const Student &student : students) {
        student.printGradeSheet();
    }

    inputFile.close();
    return 0;
}
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
