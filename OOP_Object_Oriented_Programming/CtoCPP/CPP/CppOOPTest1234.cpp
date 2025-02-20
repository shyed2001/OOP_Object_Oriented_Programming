#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

class Student {
public:
    Student(int sl, const std::string& roll, const std::string& name)
        : sl(sl), roll(roll), name(name) {}

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
    int sl;
    std::string roll;
<<<<<<< Updated upstream
<<<<<<< Updated upstream
    std::string name;

    ///std::float gpa;



    ///Nested class to link mark, grade, letterGrade
    ///also declare the objects here
        ///SubjectGFrade sub1, sub2, sub3, sub4, sub5;
};



///class SubjectGrade
///id name marks credit lettergrade grade

class Subject
{
=======
=======
>>>>>>> Stashed changes
    std::string name;

    ///std::float gpa;



    ///Nested class to link mark, grade, letterGrade
    ///also declare the objects here
        ///SubjectGFrade sub1, sub2, sub3, sub4, sub5;
};



///class SubjectGrade
///id name marks credit lettergrade grade

class Subject
{
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

public:
    Subject(const std::string& name, float credit)
        : name(name), credit(credit) {}

    const std::string& getName() const {
        return name;
    }

    float getCredit() const {
        return credit;
    }

private:
    std::string name;
    float credit;
};

class GradingScale {
public:
    GradingScale(int lowerBound, int upperBound, const std::string& letterGrade, float gradePoint)
        : lowerBound(lowerBound), upperBound(upperBound), letterGrade(letterGrade), gradePoint(gradePoint) {}

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
    int lowerBound;
    int upperBound;
    std::string letterGrade;
    float gradePoint;
};

int main() {
    // Read student information from StudentInf.txt
    std::ifstream studentFile("StudentInf.txt");
    if (!studentFile.is_open()) {
        std::cerr << "Error opening StudentInf.txt." << std::endl;
        return 1;
    }

    std::vector<Student> students;
    std::string studentLine;
    std::getline(studentFile, studentLine); // Ignore header

    while (std::getline(studentFile, studentLine)) {
        size_t tabPos1 = studentLine.find('\t');
        size_t tabPos2 = studentLine.find('\t', tabPos1 + 1);

        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos) {
            int sl = std::stoi(studentLine.substr(0, tabPos1));
            std::string roll = studentLine.substr(tabPos1 + 1, tabPos2 - tabPos1 - 1);
            std::string name = studentLine.substr(tabPos2 + 1);

            students.emplace_back(sl, roll, name);
        }
    }
    studentFile.close();

    // Read subject information from SubjectInf.txt
    std::ifstream subjectFile("SubjectInf.txt");
    if (!subjectFile.is_open()) {
        std::cerr << "Error opening SubjectInf.txt." << std::endl;
        return 1;
    }

    std::vector<Subject> subjects;
    std::string subjectLine;
    std::getline(subjectFile, subjectLine); // Ignore header

    while (std::getline(subjectFile, subjectLine)) {
        size_t tabPos = subjectLine.find('\t');

        if (tabPos != std::string::npos) {
            std::string name = subjectLine.substr(0, tabPos);
            float credit = std::stof(subjectLine.substr(tabPos + 1));

            subjects.emplace_back(name, credit);
        }
    }
    subjectFile.close();

    // Read grading scale from Grading.txt
    std::ifstream gradingFile("Grading.txt");
    if (!gradingFile.is_open()) {
        std::cerr << "Error opening Grading.txt." << std::endl;
        return 1;
    }

    std::vector<GradingScale> gradingScales;
    std::string gradingLine;
    std::getline(gradingFile, gradingLine); // Ignore header

    while (std::getline(gradingFile, gradingLine)) {
        size_t tabPos1 = gradingLine.find('\t');
        size_t tabPos2 = gradingLine.find('\t', tabPos1 + 1);
        size_t tabPos3 = gradingLine.find('\t', tabPos2 + 1);

        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos && tabPos3 != std::string::npos) {
            int lowerBound = std::stoi(gradingLine.substr(0, tabPos1));
            int upperBound = std::stoi(gradingLine.substr(tabPos1 + 1, tabPos2 - tabPos1 - 1));
            std::string letterGrade = gradingLine.substr(tabPos2 + 1, tabPos3 - tabPos2 - 1);
            float gradePoint = std::stof(gradingLine.substr(tabPos3 + 1));

            gradingScales.emplace_back(lowerBound, upperBound, letterGrade, gradePoint);
        }
    }
    gradingFile.close();

    // Read student marks from SubjectMark.txt and connect them
    std::ifstream subjectMarkFile("SubjectMark.txt");
    if (!subjectMarkFile.is_open()) {
        std::cerr << "Error opening SubjectMark.txt." << std::endl;
        return 1;
    }

    std::vector<std::map<std::string, int>> studentMarks;
    std::vector<std::string> subjectNames;
    std::string subjectMarkLine;
    std::getline(subjectMarkFile, subjectMarkLine);

    std::istringstream headerStream(subjectMarkLine);
    std::string column;
    std::getline(headerStream, column, '\t'); // Skip Sl
    std::getline(headerStream, column, '\t'); // Skip Roll

    while (std::getline(headerStream, column, '\t')) {
        subjectNames.push_back(column);
    }

    while (std::getline(subjectMarkFile, subjectMarkLine)) {
        std::istringstream lineStream(subjectMarkLine);
        std::string sl, roll, mark;
        std::getline(lineStream, sl, '\t');
        std::getline(lineStream, roll, '\t');
        std::map<std::string, int> marks;

        for (const std::string& subjectName : subjectNames) {
            std::getline(lineStream, mark, '\t');
            marks[subjectName] = std::stoi(mark);
        }

        studentMarks.push_back(marks);
    }
    subjectMarkFile.close();

    // Create the output file OOPstudent_grades.txt
    std::ofstream outputFile("OOPstudent_grades.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error creating OOPstudent_grades.txt." << std::endl;
        return 1;
    }

    // Print the header
    outputFile << "Sl\tRoll\tName";
    for (const std::string& subjectName : subjectNames) {
        outputFile << "\t" << subjectName;
    }
    outputFile << std::endl;

    // Print the student data
    for (size_t i = 0; i < students.size(); ++i) {
        outputFile << students[i].getSl() << "\t" << students[i].getRoll() << "\t" << students[i].getName();

        for (const std::string& subjectName : subjectNames) {
            outputFile << "\t" << studentMarks[i][subjectName];
        }

        outputFile << std::endl;
    }

    outputFile.close();

    std::cout << "Data has been written to OOPstudent_grades.txt." << std::endl;

    return 0;
}

