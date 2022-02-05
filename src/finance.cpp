#include "../include/finance.hpp"

double calculate_monthly_gains()
{

    double starting_cash;
    double interest_rate;
    double monthly_interest_total = 0;
    int interest_calc_time;
    int interest_div;

    std::cout << "Please enter the starting cash amount \n: $";
    std::cin >> starting_cash;

    std::cout << "Please enter the interest rate percentage \n: % ";
    std::cin >> interest_rate;

    std::cout << "Interest Calculation Method: \n  0: APY (Interest rate / 12 months) \n  1: Monthly (Interest rate applied in full -- / 1) \n: ";
    std::cin >> interest_calc_time;
    switch (interest_calc_time)
    {
    case 0:
        interest_div = 12;
        break;
    case 1:
        interest_div = 1;
        break;
    default:
        std::cout << "Default used: APY \n";
        interest_div = 12;
        break;
    }

    double new_cash_total = starting_cash;
    int i, j;
    std::cout << "How many months would you like to calculate gains for? \n: ";
    std::cin >> j;
    for (i = 0; i < j; ++i)
    {
        double month_interest = new_cash_total * ((interest_rate * .01) / interest_div);
        monthly_interest_total = monthly_interest_total + month_interest;

        std::cout << std::endl;
        std::cout << "  Month " << i << " start: $" << new_cash_total << std::endl;
        new_cash_total = new_cash_total + month_interest;
        std::cout << "    Interest: $" << month_interest << std::endl;
    }
    std::cout << std::endl
              << "Initial Investment: $" << starting_cash
              << std::endl
              << "Total interest gained over " << j << " months: $" << monthly_interest_total << std::endl
              << std::endl;

    return new_cash_total;
}

void finance_menu()
{
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Calculate Monthly Interest Gains" << std::endl;
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
            std::cout << "== Calculate compound interest paid monthly ==" << std::endl;
            calculate_monthly_gains();
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
            // finance_menu();
            break;
        }

    } while (choice != 0);
}