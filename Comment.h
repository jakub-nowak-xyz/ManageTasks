#pragma once

#include <iostream>
#include <chrono>
#include "User.h"

using namespace std;

class Comment
{
    string message;
    User author;
    chrono::system_clock::time_point createdDate;

public:
    Comment(string msg, User user);

    string getCreatedDate() const;
    void Display() const;
};