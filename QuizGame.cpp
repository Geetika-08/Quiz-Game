#include <iostream>
#include <string>

using namespace std;


int playquiz(const string &level);
void displayQuestion(const string &question, const string options[], int numOptions, char correctOption, int &score);




int main() {

    char playagain;
    string level;

    do {
        cout << "Select Level: Beginner, Intermediate, or Expert\n";
        cin >> level;

        int result = playquiz(level);

        cout << "Total Score = " << result << "\n";

        if (result == 0) {
            cout << "Try Harder Next Time!\n";
        } 
        else if (result >= 0 && result < 50) {
            cout << "You Can Do Better!\n";
        } 
        else if (result >= 50 && result <= 60) {
            cout << "Good Job!\n";
        } 
        else if (result > 60 && result <= 100) {
            cout << "Excellent!\n";
        }

        cout << "Play Again? (y / n)\n";
        cin >> playagain;

    } while (playagain == 'y' || playagain == 'Y');

    cout << "Thank you for playing!\n";

    return 0;

}




int playquiz(const string &level) {

    char start;
    int score = 0;

    cout << "---------Welcome To Quiz--------- \n";
    cout << "------Instructions to follow------\n";
    cout << "Step 1: Number of Questions = 10\n";
    cout << "Step 2: Each Question = 10 Marks\n";
    cout << "Step 3: Type the correct option\n";
    cout << "Step 4: Press 's' to start the quiz\n\n";

    cin >> start;

    if (start == 's' || start == 'S') {

        if (level == "Beginner") {
            const string beginnerOptions1[] = {"(a) Delhi", "(b) Mumbai", "(c) Chennai", "(d) Jammu"};
            displayQuestion("Ques 1: Capital of India is __________", beginnerOptions1, 4, 'a', score);

            const string beginnerOptions2[] = {"(a) Earth", "(b) Mars", "(c) Jupiter", "(d) Venus"};
            displayQuestion("Ques 2: Which planet is known as the Red Planet?", beginnerOptions2, 4, 'b', score);

            const string beginnerOptions3[] = {"(a) Charles Dickens", "(b) J.K. Rowling", "(c) William Shakespeare", "(d) Mark Twain"};
            displayQuestion("Ques 3: Who wrote 'Hamlet'?", beginnerOptions3, 4, 'c', score);

            const string beginnerOptions4[] = {"(a) Oxygen", "(b) Hydrogen", "(c) Carbon Dioxide", "(d) Nitrogen"};
            displayQuestion("Ques 4: What gas do plants primarily use for photosynthesis?", beginnerOptions4, 4, 'c', score);

            const string beginnerOptions5[] = {"(a) 5", "(b) 6", "(c) 7", "(d) 8"};
            displayQuestion("Ques 5: How many continents are there on Earth?", beginnerOptions5, 4, 'c', score);

            const string beginnerOptions6[] = {"(a) 100", "(b) 0", "(c) -100", "(d) 300"};
            displayQuestion("Ques 6: What is the boiling point of water in Celsius?", beginnerOptions6, 4, 'a', score);

            const string beginnerOptions7[] = {"(a) 1", "(b) 2", "(c) 3", "(d) 4"};
            displayQuestion("Ques 7: What is the smallest prime number?", beginnerOptions7, 4, 'b', score);

            const string beginnerOptions8[] = {"(a) Neptune", "(b) Pluto", "(c) Earth", "(d) Jupiter"};
            displayQuestion("Ques 8: What is the largest planet in our solar system?", beginnerOptions8, 4, 'd', score);

            const string beginnerOptions9[] = {"(a) 11", "(b) 15", "(c) 19", "(d) 23"};
            displayQuestion("Ques 9: Which of the following is not a prime number?", beginnerOptions9, 4, 'b', score);

            const string beginnerOptions10[] = {"(a) K", "(b) P", "(c) Po", "(d) Ka"};
            displayQuestion("Ques 10: What is the chemical symbol for potassium?", beginnerOptions10, 4, 'a', score);

        } 

        else if (level == "Intermediate") {
            const string intermediateOptions1[] = {"(a) Au", "(b) Ag", "(c) Fe", "(d) Pb"};
            displayQuestion("Ques 1: The chemical symbol for Gold is __________", intermediateOptions1, 4, 'a', score);

            const string intermediateOptions2[] = {"(a) Atlantic", "(b) Indian", "(c) Arctic", "(d) Pacific"};
            displayQuestion("Ques 2: The largest ocean on Earth is __________", intermediateOptions2, 4, 'd', score);

            const string intermediateOptions3[] = {"(a) Isaac Newton", "(b) Galileo Galilei", "(c) Albert Einstein", "(d) Nikola Tesla"};
            displayQuestion("Ques 3: The theory of relativity was proposed by __________", intermediateOptions3, 4, 'c', score);

            const string intermediateOptions4[] = {"(a) Yangtze", "(b) Mississippi", "(c) Nile", "(d) Amazon"};
            displayQuestion("Ques 4: What is the longest river in the world?", intermediateOptions4, 4, 'c', score);

            const string intermediateOptions5[] = {"(a) Albert Einstein", "(b) Isaac Newton", "(c) Niels Bohr", "(d) Richard Feynman"};
            displayQuestion("Ques 5: Who is known as the father of modern physics?", intermediateOptions5, 4, 'a', score);

            const string intermediateOptions6[] = {"(a) Respiration", "(b) Photosynthesis", "(c) Digestion", "(d) Transpiration"};
            displayQuestion("Ques 6: What is the name of the process by which plants convert sunlight into food?", intermediateOptions6, 4, 'b', score);

            const string intermediateOptions7[] = {"(a) Neon", "(b) Sodium", "(c) Nickel", "(d) Nitrogen"};
            displayQuestion("Ques 7: Which element has the chemical symbol 'Na'?", intermediateOptions7, 4, 'b', score);

            const string intermediateOptions8[] = {"(a) C++", "(b) Python", "(c) Java", "(d) JavaScript"};
            displayQuestion("Ques 8: Which of these programming languages is primarily used for web development?", intermediateOptions8, 4, 'd', score);

            const string intermediateOptions9[] = {"(a) Toronto", "(b) Vancouver", "(c) Ottawa", "(d) Montreal"};
            displayQuestion("Ques 9: What is the capital city of Canada?", intermediateOptions9, 4, 'c', score);

            const string intermediateOptions10[] = {"(a) 1912", "(b) 1914", "(c) 1916", "(d) 1918"};
            displayQuestion("Ques 10: In which year did World War I begin?", intermediateOptions10, 4, 'b', score);

        } 

        else if (level == "Expert") {
            const string expertOptions1[] = {"(a) Creeper", "(b) Rabbit", "(c) Trojan", "(d) Sasser"};
            displayQuestion("Ques 1: The first computer virus is known as __________", expertOptions1, 4, 'a', score);

            const string expertOptions2[] = {"(a) 300,000 km/s", "(b) 150,000 km/s", "(c) 450,000 km/s", "(d) 600,000 km/s"};
            displayQuestion("Ques 2: The speed of light in a vacuum is approximately __________", expertOptions2, 4, 'a', score);

            const string expertOptions3[] = {"(a) Methane", "(b) Ethane", "(c) Propane", "(d) Butane"};
            displayQuestion("Ques 3: The main component of natural gas is __________", expertOptions3, 4, 'a', score);

            const string expertOptions4[] = {"(a) Yangtze", "(b) Mississippi", "(c) Nile", "(d) Amazon"};
            displayQuestion("Ques 4: What is the longest river in the world?", expertOptions4, 4, 'c', score);

            const string expertOptions5[] = {"(a) James Joule", "(b) Rudolf Clausius", "(c) Sadi Carnot", "(d) Michael Faraday"};
            displayQuestion("Ques 5: Who proposed the first law of thermodynamics?", expertOptions5, 4, 'a', score);

            const string expertOptions6[] = {"(a) Economies of scale", "(b) Marginal cost", "(c) Diseconomies of scale", "(d) Opportunity cost"};
            displayQuestion("Ques 6: In economics, what is the term for the phenomenon where increased production leads to lower per-unit costs?", expertOptions6, 4, 'a', score);

            const string expertOptions7[] = {"(a) Relativity", "(b) Quantum mechanics", "(c) Thermodynamics", "(d) Electrodynamics"};
            displayQuestion("Ques 7: What is the Heisenberg Uncertainty Principle associated with?", expertOptions7, 4, 'b', score);

            const string expertOptions8[] = {"(a) C++", "(b) Python", "(c) Java", "(d) JavaScript"};
            displayQuestion("Ques 8: Which of these programming languages is primarily used for web development?", expertOptions8, 4, 'd', score);

            const string expertOptions9[] = {"(a) HyperText Transfer Protocol", "(b) HighText Transfer Protocol", "(c) HighText Transport Protocol", "(d) HyperText Transport Protocol"};
            displayQuestion("Ques 9: In computer science, what does the acronym 'HTTP' stand for?", expertOptions9, 4, 'a', score);

            const string expertOptions10[] = {"(a) Heisenberg Uncertainty Principle", "(b) Pauli Exclusion Principle", "(c) Schrödinger's Cat Paradox", "(d) Bohr's Correspondence Principle"};
            displayQuestion("Ques 10: In quantum mechanics, which principle states that two identical fermions cannot occupy the same quantum state simultaneously?", expertOptions10, 4, 'b', score);

        } 
        
        else {
            cout << "Invalid level selected. Please enter 'Beginner', 'Intermediate', or 'Expert'.\n";
            return playquiz("Beginner"); // Default to Beginner level if invalid input
        }
    } 
    
    else {
        cout << "Please enter 's' only to start the quiz.\n";
        return playquiz(level); // Call playquiz() again if invalid input
    }

    return score;
}




void displayQuestion(const string &question, const string options[], int numOptions, char correctOption, int &score) {

    char option;
    cout << question << "\n";

    for (int i = 0; i < numOptions; ++i) {
        cout << options[i] << "  ";
    }

    cout << "\n";
    cin >> option;

    if (option == correctOption || option == toupper(correctOption)) {
        score += 10;
        cout << "Correct!\n";
    } 
    else {
        cout << "Incorrect. The correct answer is " << correctOption << ".\n";
    }

}
