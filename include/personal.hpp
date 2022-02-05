#ifndef PERSONAL_HPP
#define PERSONAL_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <map>

class Tasks
{
private:
    std::map<int, std::string> tasks;

public:
    Tasks();
    std::string new_task();
    std::string get_task(int index);
    std::string del_task(int index);
    std::string mod_task(int index);
    char get_all_tasks();
};

#endif // PERSONAL_HPP