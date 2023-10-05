#include <iostream>
#include <vector>

// Function to calculate the grade based on the score
char calculateGrade(double score) {
    if (score >= 90.0) {
        return 'A';
    } else if (score >= 80.0) {
        return 'B';
    } else if (score >= 70.0) {
        return 'C';
    } else if (score >= 60.0) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    std::vector<std::string> studentNames;
    std::vector<double> studentScores;

    int numStudents;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    // Input student names and scores
    for (int i = 0; i < numStudents; ++i) {
        std::string name;
        double score;

        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin >> name;
        studentNames.push_back(name);

        std::cout << "Enter the score for " << name << ": ";
        std::cin >> score;
        studentScores.push_back(score);
    }

    // Display student names, scores, and grades
    std::cout << "\nStudent Report:\n";
    for (int i = 0; i < numStudents; ++i) {
        char grade = calculateGrade(studentScores[i]);
        std::cout << studentNames[i] << " - Score: " << studentScores[i] << " - Grade: " << grade << std::endl;
    }

    return 0;
}
