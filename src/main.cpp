#include "../include/main.hpp"

void menu(void)
{
    int choice;

    do
    {
        std::cout << "1. [Tasks]x" << std::endl
                  << "2. [Personal]x" << std::endl
                  << "3. [Tools]" << std::endl
                  << "4. [Projects]x" << std::endl
                  << "5. [Finance]" << std::endl
                  << "6. [Users]x" << std::endl
                  << "7. [Learning Tools]" << std::endl
                  << "8. [Games]" << std::endl
                  << "9. [Other] -- interest moving" << std::endl
                  << "0. Quit" << std::endl;

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "bye bye" << std::endl;
            break;
        case 1:
            std::cout << "[Tasks]" << std::endl;
            break;
        case 2:
            std::cout << "[Personal]" << std::endl;
            break;
        case 3:
            std::cout << "[Tools]" << std::endl;
            tools_menu();
            break;
        case 4:
            std::cout << "[Projects]" << std::endl;
            break;
        case 5:
            std::cout << "[Finance Tools]" << std::endl;
            finance_menu();
            break;
        case 6:
            std::cout << "[Users]" << std::endl;
            break;
        case 7:
            std::cout << "[Learning Tools]" << std::endl;
            learning_tools_menu();
            break;
        case 8:
            std::cout << "[Games]" << std::endl;
            games_menu();
            break;
        case 9:
            std::cout << "[Other] -- moving" << std::endl;
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