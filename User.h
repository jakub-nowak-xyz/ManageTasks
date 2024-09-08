#pragma once

#include <string>
using namespace std;

class User
{
private:
    string firstName;
    string lastName;

public:
    User(string firstName, string lastName);
    string GetFullName() const;
};