#ifndef WORKITEM_H
#define WORKITEM_H

#include <string>
#include <vector>
#include "User.h"
#include "Comment.h"

using namespace std;

class WorkItem
{
    static int count;

protected:
    int id;
    string state;
    string area;
    int priority;
    User author;
    vector<Comment> comments;

public:
    // Constructor with const reference for User
    WorkItem(string state, string area, int priority, const User &author)
        : id(++count), state(state), area(area), priority(priority), author(author) {}

    // Virtual destructor
    virtual ~WorkItem() = default;

    // Pure virtual functions
    virtual void GetInfo() = 0;
    virtual void GetInfoMin() = 0;

    // Member functions
    void GetWorkItemInfo() const;
    void ShowComments() const;
    void addComment();

    int GetId() const
    {
        return id;
    }
};

#endif // WORKITEM_H
