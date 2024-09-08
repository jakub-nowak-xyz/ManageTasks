#include "Issue.h"

Issue::Issue(string state, string area, int priority, User author, string efford)
    : WorkItem(state, area, priority, author), efford(efford) {}

void Issue::GetInfo()
{
    cout << "ID " << id << " | Work Item TYPE: Issue | Author: " << author.GetFullName() << endl;
    GetWorkItemInfo();
    cout << "Effort: " << efford << endl;

    cout << endl;
    cout << " -- -- -- -- -Comments-- -- -- -- -" << endl;
    ShowComments();

    cout << "Do you want to add a comment? (Y/N): ";
    char option;
    cin >> option;
    cin.ignore();
    if (option == 'Y' || option == 'y')
    {
        auto [message, author] = UserActions::addComment();
        addComment(message, author);
    }
}

void Issue::GetInfoMin()
{
    cout << "ID " << id << " | Work Item TYPE: Issue | Author: " << author.GetFullName() << endl;
}