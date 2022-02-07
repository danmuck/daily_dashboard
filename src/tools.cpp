#include "../include/tools.hpp"

void int_calculator()
{
    int num_stack;
    int nums[num_stack];
    char add_ = '+';
    char sub_ = '-';
    char mul_ = '*';
    char div_ = '/';
    char rem_ = '%';

    std::cout << "Push some symbols onto the stack and retreive some answers in integer form.\n";
    std::cout << "How many numbers will you need in your function?";
    std::cin >> num_stack;

    for (int i = 0; i < num_stack; i++)
    {
        std::cout << "num_" << i << ": " << std::endl;
        std::cin >> nums[num_stack];
    }
}
// 256 % 128 % 64 % 32 % 16 % 8 % 4 % 2 % 1
void tools_menu()
{
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. No Tools Yet" << std::endl;
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
            std::cout << "[Integer Calculator]" << std::endl;
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
            tools_menu();
            break;
        }

    } while (choice != 0);
}
