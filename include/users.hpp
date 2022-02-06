#ifndef USERS_HPP
#define USERS_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <map>

class User
{
private:
    std::string priv_key;
    std::string pub_key;
    std::string password;
    int key_pin[9];

public:
    int user_id;
    std::string user_name;
    std::string wallet_address = pub_key;
    char bio[120];
};

#endif // USERS_HPP