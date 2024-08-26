#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;

    std::cout << "I have generated a random number between 1 and 100. Try to guess it!" << std::endl;

    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess > randomNumber) {
            std::cout << "Your guess is too high. Try again." << std::endl;
        } else if (userGuess < randomNumber) {
            std::cout << "Your guess is too low. Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            break;
        }
    }

    return 0;
}