#include <iostream>

int main() {
    int guess;
    int SLAYER;
    int LAYERS;
    SLAYER = guess;


    std::cout << "Guess a six-digit number SLAYER so that the following equation is true, where each letter stands for the digit in the position shown:" << std::endl << std::endl;
    std::cout << "SLAYER + SLAYER + SLAYER = LAYERS" << std::endl << std::endl;
    std::cout << "Enter your guess for SLAYER: " << std::flush;
    std::cin >> guess;
    LAYERS = guess + guess + guess;

    if(guess == 142857) {
        std::cout << "Your guess is correct:" << std::endl;
        std::cout << "SLAYER + SLAYER + SLAYER = " << LAYERS << std::endl;
        std::cout << "LAYERS = " << LAYERS << std::endl;
        std::cout << "Thanks for playing." << std::endl;
    }
    if(guess < 142857 || guess > 142857){
        std::cout << "Your guess is incorrect: " << std::endl;
        std::cout << "SLAYER + SLAYER + SLAYER = " << LAYERS << std::endl;
        std::cout << "LAYERS = " << LAYERS  << std::endl;
        std::cout << "Thanks for playing." << std::endl;
    }
    if(guess%100000 < 0) {
        std::cout << "Your guess is incorrect: " << std::endl;
        std::cout << "SLAYER must be a 6-digit number." << std::endl;
        std::cout  << "Thanks for playing." << std::endl;
    }
    return 0;
}
