#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

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
    std::string name;
};

int main() {
    std::ifstream inputFile("StudentInf.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::vector<Student> students;

    // Read and ignore the header row
    std::string line;
    std::getline(inputFile, line);

    while (std::getline(inputFile, line)) {
        size_t tabPos1 = line.find('\t');
        size_t tabPos2 = line.find('\t', tabPos1 + 1);

        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos) {
            int sl = std::stoi(line.substr(0, tabPos1));
            std::string roll = line.substr(tabPos1 + 1, tabPos2 - tabPos1 - 1);
            std::string name = line.substr(tabPos2 + 1);

            students.emplace_back(sl, roll, name);
        }
    }

    inputFile.close();

    // Print Sl, Roll, and corresponding Names
    std::cout << "Sl\tRoll\tName" << std::endl;
    for (const Student& student : students) {
        std::cout << student.getSl() << "\t" << student.getRoll() << "\t" << student.getName() << std::endl;
        }

      std::cout << "Sl\tRoll\tName" << std::endl;
    for (const Student& student : students) {
        std::cout << student.getSl() << "\t" << std::endl;
        std::cout << student.getRoll() << "\t" << std::endl;
        std::cout << student.getName() << std::endl;
        }


    return 0;
}
