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
    std::cout << " } \n";
}
void print_vector(std::vector<int> vec)
{
    int i, j;
    j = vec.size();
    std::cout << "\n\tyour_vector = \n\t  { ";

    for (i = 0; i < j; i++)
    {
        if (j - 1 == i)
        {
            std::cout << vec[i];
        }
        else
        {
            std::cout << vec[i] << ", ";
        }
    }
    std::cout << " } \n";
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

void make_vector()
{
    /**
     * int items [] =
     *
     */
    // normal array declared
    int items_array[] = {12, 13};
    // vector declared
    std::vector<int> items = {12, 13, 69, 420, 12, 34, 56};

    // add the integer 199 to the vector
    items.push_back(199);

    // get the value at index 2 (199)
    std::cout << items[2] << " index 2 \n";

    // get length of the vector
    std::cout << items.size() << " length \n";

    // get the last item in the vector
    std::cout << items[items.size() - 1] << " last item \n";

    // remove last item in the vector
    items.pop_back();

    std::cout << items.size() << " new length \n";

    // int i, j;
    // j = items.size();
    // for (i = 0; i < j; i++)
    // {
    //     std::cout << items[i] << std::endl;
    // }

    print_vector(items);
}

void learning_tools_menu()
{
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Make Array" << std::endl
                  << "2. Make Vector" << std::endl;
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
            std::cout << "[array]" << std::endl;
            make_array();
            break;
        case 2:
            std::cout << "[vector]" << std::endl;
            make_vector();
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
