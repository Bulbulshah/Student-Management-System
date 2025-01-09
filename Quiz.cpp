#include <iostream>
#include <string>
using namespace std;

// Structure to store a question
struct Question {
    string questionText;
    string options[4];
    int correctAnswer; // Index of the correct option (0 to 3)
};

// Function prototypes
void addQuestions(Question[], int&);
void takeQuiz(const Question[], int, int&);
void displayResults(int, int);

int main() {
    const int MAX_QUESTIONS = 10; // Maximum number of questions
    Question quiz[MAX_QUESTIONS];
    int questionCount = 0; // Tracks the number of questions added
    int choice;

    do {
        cout << "\n=== Online Quiz System ===\n";
        cout << "1. Add Questions\n";
        cout << "2. Take Quiz\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addQuestions(quiz, questionCount);
                break;
            case 2: {
                int score = 0;
                takeQuiz(quiz, questionCount, score);
                displayResults(score, questionCount);
                break;
            }
            case 3:
                cout << "Exiting... Thank you for using the Quiz System!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again!" << endl;
        }
    } while (choice != 3);

    return 0;
}

// Function to add questions
void addQuestions(Question quiz[], int& questionCount) {
    int numQuestions;
    cout << "How many questions do you want to add? ";
    cin >> numQuestions;

    cin.ignore(); // Clear the input buffer
    for (int i = 0; i < numQuestions; i++) {
        cout << "Enter question " << (questionCount + 1) << ": ";
        getline(cin, quiz[questionCount].questionText);

        cout << "Enter 4 options:" << endl;
        for (int j = 0; j < 4; j++) {
            cout << "Option " << (j + 1) << ": ";
            getline(cin, quiz[questionCount].options[j]);
        }

        cout << "Enter the correct option number (1-4): ";
        cin >> quiz[questionCount].correctAnswer;
        quiz[questionCount].correctAnswer--; // Convert to 0-based index

        cin.ignore(); // Clear the input buffer
        questionCount++;
        cout << "Question added successfully!\n" << endl;
    }
}

// Function to take the quiz
void takeQuiz(const Question quiz[], int questionCount, int& score) {
    if (questionCount == 0) {
        cout << "No questions available. Please add questions first." << endl;
        return;
    }

    for (int i = 0; i < questionCount; i++) {
        cout << "\nQuestion " << (i + 1) << ": " << quiz[i].questionText << endl;
        for (int j = 0; j < 4; j++) {
            cout << j + 1 << ". " << quiz[i].options[j] << endl;
        }

        int answer;
        cout << "Your answer (1-4): ";
        cin >> answer;

        if (answer - 1 == quiz[i].correctAnswer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer was: " << quiz[i].options[quiz[i].correctAnswer] << endl;
        }
    }
}

// Function to display quiz results
void displayResults(int score, int totalQuestions) {
    cout << "\n=== Quiz Results ===" << endl;
    cout << "Your Score: " << score << " out of " << totalQuestions << endl;

    if (score == totalQuestions) {
        cout << "Excellent! You got all answers correct!" << endl;
    } else if (score >= totalQuestions / 2) {
        cout << "Good job! You passed the quiz!" << endl;
    } else {
        cout << "Better luck next time!" << endl;
    }
}
