#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

class Subject {
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

int main() {
    std::ifstream inputFile("SubjectInf.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::vector<Subject> subjects;

    // Read and ignore the header row
    std::string line;
    std::getline(inputFile, line);

    while (std::getline(inputFile, line)) {
        size_t tabPos = line.find('\t');

        if (tabPos != std::string::npos) {
            std::string name = line.substr(0, tabPos);
            float credit = std::stof(line.substr(tabPos + 1));

            subjects.emplace_back(name, credit);
        }
    }

    inputFile.close();

    // Print Subject and Credit values
    std::cout << "Subject\tCredit" << std::endl;
    for (const Subject& subject : subjects) {
        std::cout << subject.getName() << "\t" << subject.getCredit() << std::endl;
    }


        for (const Subject& subject : subjects) {
        std::cout << subject.getName() << "\t" << std::endl;
        std::cout << subject.getCredit() << std::endl;
    }

    return 0;
}
