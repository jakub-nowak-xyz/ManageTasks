#include "Comment.h"

Comment::Comment(string msg, User user)
    : message(msg), author(user), createdDate(chrono::system_clock::now()) {}

string Comment::getCreatedDate() const
{
    time_t createdTime = chrono::system_clock::to_time_t(createdDate);
    return ctime(&createdTime);
}

void Comment::Display() const
{
    cout << "Message: " << message << endl;
    cout << "Author: " << author.GetFullName() << endl;
    cout << "Created Date: " << getCreatedDate() << endl;
}