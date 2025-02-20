#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

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
    std::ifstream inputFile("Grading.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::vector<GradingScale> gradingScales;

    // Read and ignore the header row
    std::string line;
    std::getline(inputFile, line);

    while (std::getline(inputFile, line)) {
        size_t tabPos1 = line.find('\t');
        size_t tabPos2 = line.find('\t', tabPos1 + 1);
        size_t tabPos3 = line.find('\t', tabPos2 + 1);

        if (tabPos1 != std::string::npos && tabPos2 != std::string::npos && tabPos3 != std::string::npos) {
            int lowerBound = std::stoi(line.substr(0, tabPos1));
            int upperBound = std::stoi(line.substr(tabPos1 + 1, tabPos2 - tabPos1 - 1));
            std::string letterGrade = line.substr(tabPos2 + 1, tabPos3 - tabPos2 - 1);
            float gradePoint = std::stof(line.substr(tabPos3 + 1));

            gradingScales.emplace_back(lowerBound, upperBound, letterGrade, gradePoint);
        }
    }

    inputFile.close();

    // Print LowerBound Marks, UpperBound Marks, LetterGrade, and GradePoint
    std::cout << "LowerBound\tUpperBound\tLetterGrade\tGradePoint" << std::endl;
    for (const GradingScale& gradingScale : gradingScales) {
        std::cout << gradingScale.getLowerBound() << "\t"
                  << gradingScale.getUpperBound() << "\t"
                  << gradingScale.getLetterGrade() << "\t"
                  << gradingScale.getGradePoint() << std::endl;
    }

    return 0;
}
