#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

class Student {
public:
    Student(const std::string& roll) : roll(roll) {}

    void addSubjectMark(const std::string& subjectName, int mark) {
        subjectMarks[subjectName] = mark;
    }

    const std::string& getRoll() const {
        return roll;
    }

    const std::map<std::string, int>& getSubjectMarks() const {
        return subjectMarks;
    }

private:
    std::string roll;
    std::map<std::string, int> subjectMarks;
};

int main() {
    std::ifstream inputFile("SubjectMark.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::vector<Student> students;
    std::vector<std::string> subjectNames;

    // Read the header row to extract subject names
    std::string header;
    std::getline(inputFile, header);
    std::istringstream headerStream(header);
    std::string column;

    // Skip the first two columns (Sl and Roll)
    std::getline(headerStream, column, '\t'); // Skip Sl
    std::getline(headerStream, column, '\t'); // Skip Roll

    while (std::getline(headerStream, column, '\t')) {
        subjectNames.push_back(column);
    }

    // Read student data
    std::string line;

    while (std::getline(inputFile, line)) {
        std::istringstream lineStream(line);
        std::string sl, roll, mark;

        // Extract Sl and Roll
        std::getline(lineStream, sl, '\t');
        std::getline(lineStream, roll, '\t');

        // Create a new student instance
        Student student(roll);

        // Iterate through the subject marks and add them to the student
        for (const std::string& subjectName : subjectNames) {
            std::getline(lineStream, mark, '\t');
            int subjectMark = std::stoi(mark);
            student.addSubjectMark(subjectName, subjectMark);
        }

        // Add the student to the vector
        students.push_back(student);
    }

    inputFile.close();

    // Print the Roll, SubjectName, and StudentSubjectMark values
    std::cout << "Roll\t";
    for (const std::string& subjectName : subjectNames) {
        std::cout << subjectName << "\t";
    }
    std::cout << std::endl;

    for (const Student& student : students) {
        std::cout << student.getRoll() << "\t";
        const std::map<std::string, int>& subjectMarks = student.getSubjectMarks();

        for (const std::string& subjectName : subjectNames) {
            std::cout << subjectMarks.at(subjectName) << "\t";
        }

        std::cout << std::endl;
    }

    return 0;
}

