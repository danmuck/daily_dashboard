#include "../include/main.hpp"

void menu()
{
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. []" << std::endl
                  << "2. []" << std::endl
                  << "3. []" << std::endl
                  << "4. []" << std::endl
                  << "5. [Finance]" << std::endl
                  << "6. []" << std::endl
                  << "7. []" << std::endl
                  << "8. [Games]" << std::endl
                  << "9. [interest] -- moving" << std::endl;

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "bye bye" << std::endl;
            break;
        case 1:
            std::cout << "[]" << std::endl;
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
            std::cout << "[finance]" << std::endl;
            finance_menu();
            break;
        case 6:
            std::cout << "[]" << std::endl;
            break;
        case 7:
            std::cout << "[]" << std::endl;
            break;
        case 8:
            std::cout << "[games]" << std::endl;
            games_menu();
            break;
        case 9:
            std::cout << "[compound interest] -- moving" << std::endl;
            calculate_monthly_gains();
            break;
        default:
            std::cout << "Invalid Entry" << std::endl;
            break;
        }

    } while (choice != 0);
}

int main()
{
    menu();
}