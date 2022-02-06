#include "../include/learning_tools.hpp"

// when passed to a function the array is degraded to an int pointer
// to avoid this you must pass both the array and its size, and declare it like in [int main()] --
void print_array(int array[], int size)
{
    std::cout << "\n\tyour_array = \n\t  { ";
    for (int i = 0; i < size; i++)
    {
        if (size - 1 == i)
        {
            std::cout << array[i];
        }
        else
        {
            std::cout << array[i] << ", ";
        }
    }
    std::cout << " }";
    std::cout << std::endl;
}

void make_array()
{
    const int SIZE = 100;
    int guesses[SIZE];

    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (std::cin >> guesses[i])
        {
            count++;

            // input worked
        }
        else
        {
            // invalid character
            std::cout << std::endl
                      << "Invalid character! \n  Breaking the loop... \n";
            break;
        }
    }
    print_array(guesses, count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void learning_tools_menu()
{
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Make Array" << std::endl;
        //   << "2. [coming soon]" << std::endl
        //   << "3. [coming soon]" << std::endl
        //   << "4. [coming soon]" << std::endl
        //   << "5. [coming soon]" << std::endl
        //   << "6. [coming soon]" << std::endl
        //   << "7. [coming soon]" << std::endl
        //   << "8. [coming soon]" << std::endl
        //   << "9. [coming soon]" << std::endl;

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "bye bye" << std::endl;
            break;
        case 1:
            std::cout << "[]" << std::endl;
            make_array();
            break;
        case 2:
            std::cout << "[]" << std::endl;
            break;
        case 3:
            std::cout << "[]" << std::endl;
            break;
        case 4:
            std::cout << "[]" << std::endl;
            break;
        case 5:
            std::cout << "[]" << std::endl;
            break;
        case 6:
            std::cout << "[]" << std::endl;
            break;
        case 7:
            std::cout << "[]" << std::endl;
            break;
        case 8:
            std::cout << "[]" << std::endl;
            break;
        case 9:
            std::cout << "[]" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            learning_tools_menu();
            break;
        }

    } while (choice != 0);
}
