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
