#include "User.h"

User::User(string firstName, string lastName) : firstName(firstName), lastName(lastName) {}

string User::GetFullName() const
{
    return firstName + " " + lastName;
}