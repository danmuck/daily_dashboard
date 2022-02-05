#include "../include/main.hpp"

void menu()
{
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. [coming soon]" << std::endl
                  << "2. [coming soon]" << std::endl
                  << "3. [coming soon]" << std::endl
                  << "4. [coming soon]" << std::endl
                  << "5. [coming soon]" << std::endl
                  << "6. [coming soon]" << std::endl
                  << "7. [coming soon]" << std::endl
                  << "8. [coming soon]" << std::endl
                  << "9. Calculate Monthly Interest Gains" << std::endl;

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "bye bye" << std::endl;
            return;
        case 1:
            std::cout << "[coming soon]" << std::endl;
        case 2:
            std::cout << "[coming soon]" << std::endl;
            return;
        case 3:
            std::cout << "[coming soon]" << std::endl;
            return;
        case 4:
            std::cout << "[coming soon]" << std::endl;
            return;
        case 5:
            std::cout << "[coming soon]" << std::endl;
            return;
        case 6:
            std::cout << "[coming soon]" << std::endl;
            return;
        case 7:
            std::cout << "[coming soon]" << std::endl;
            return;
        case 8:
            std::cout << "[coming soon]" << std::endl;
            return;
        case 9:
            std::cout << "== Calculate compound interest paid monthly ==" << std::endl;
            calculate_monthly_gains();
        }

    } while (choice != 0);
}

int main()
{
    menu();
}