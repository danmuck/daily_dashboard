#include "../include/main.hpp"

// class Menu
// {
// public:
//     char exit_char;
//     int height;
//     std::string topics[];
//     Menu(char exit_char, int height, std::string topics[]);

//     void new_menu()
//     {
//         // this->exit_char = exit_char;
//         // this->height = height;
//         // this->topics[height] = topics[height];
//         // exit_char = this->exit_char;
//         // height = this->height;
//         // topics[height] = this->topics[height];
//         int i;
//         for (i = 0; i < height; i++)
//         {
//             std::cout << i << ". [" << topics[i] << "]" << std::endl;
//         }
//         std::cout << exit_char << ". to quit" << std::endl;

//         int choice;
//         do
//         {

//             std::cin >> choice;

//             switch (choice)
//             {
//             case 0:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i] + "_menu";
//                     void j();
//                 }
//                 break;
//             case 1:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 2:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 3:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 4:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 5:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 6:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 7:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 8:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             case 9:
//                 if (topics[i] != "")
//                 {
//                     std::cout << "[ " << topics[i] << " ] \n";
//                     std::string j = topics[i];
//                     void j();
//                 }
//                 break;
//             default:
//                 std::cout << "Invalid choice" << std::endl;
//                 // finance_menu();
//                 break;
//             }

//         } while (choice != 0 && choice != exit_char);
//     }
// };

void menu()
{
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. [Tasks]x" << std::endl
                  << "2. [Personal]x" << std::endl
                  << "3. [Tools]" << std::endl
                  << "4. [Projects]x" << std::endl
                  << "5. [Finance]" << std::endl
                  << "6. [Users]x" << std::endl
                  << "7. [Learning Tools]" << std::endl
                  << "8. [Games]" << std::endl
                  << "9. [Other] -- interest moving" << std::endl;

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
    // std::string topic[1] = {
    //     "finance_menu"};
    // Menu menus('q', 1, topic);
    // menus.new_menu();
}