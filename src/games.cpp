#include "../include/games.hpp"

void games_print_array(int array[], int count)
{
    std::cout << "\n  Your guesses [" << count << "]-- \n{ ";
    for (int i = 0; i < count; i++)
    {
        if (count - 1 == i)
        {
            std::cout << array[i];
        }
        else
        {

            std::cout << array[i] << ", ";
        }
    }
    std::cout << " }" << std::endl
              << std::endl;
    ;
}

void guess_numbers()
{
    int height = 251;
    int guesses_ = (height / 15) + 2;
    int guesses[guesses_];
    int guess_count = 0;

    srand(time(NULL));
    int random = rand() % height;
    // tells the answer
    std::cout << "Random number for you: " << random << std::endl;

    std::cout << "Guess a number between 0 and " << height << ": ";
    std::cout << "You have " << guesses_ << " chances to guess!" << std::endl;
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses[guess_count++] = guess;

        if (guess == random)
        {
            std::cout << "\n\n == Winner! == \n"
                      << std::endl;
            break;
        }
        else if (guess < random)
        {
            std::cout << "Guess #" << guess_count << "\n  ...too low!!" << std::endl;
        }
        else
        {
            std::cout << "Guess #" << guess_count << "\n  ...too high!!" << std::endl;
        }
    }
    games_print_array(guesses, guess_count);
}

void games_menu()
{

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
