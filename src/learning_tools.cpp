#include "../include/learning_tools.hpp"

// when passed to a function the array is degraded to an int pointer
// to avoid this you must pass both the array and its size, and declare it like in [int main()] --
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " _ ";
    }
    std::cout << std::endl;
}

void make_array()
{
    /**
     * @brief Store numbers into a basic C++ array and then print them out
     *
     */
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
