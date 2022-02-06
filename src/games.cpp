#include "../include/games.hpp"

void guess_numbers()
{
    int random_height = 251;
    int random = rand() % random_height;
    std::cout << "Random number for you: " << random << std::endl;

    std::cout << "Guess a number between 0 and " << random_height << ": ";
    while (true)
    {
        int guess;
        std::cin >> guess;
        if (guess == random)
        {
            std::cout << "Winner!" << std::endl;
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low!!" << std::endl;
        }
        else
        {
            std::cout << "Too high!!" << std::endl;
        }
    }
}

void games_menu()
{

    // srand(time(NULL));
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Guessing Game [numbers]" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "bye bye" << std::endl;
            break;
        case 1:
            std::cout << "Let's start a new round!" << std::endl;
            guess_numbers();
            break;
        }

    } while (choice != 0);
}
