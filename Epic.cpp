#include "Epic.h"

Epic::Epic(string state, string area, int priority, User author, string startDate, string endDate)
    : WorkItem(state, area, priority, author), startDate(startDate), endDate(endDate) {}

void Epic::GetInfo()
{
    cout << "ID " << id << " |Work Item TYPE: Epic | Author: " << author.GetFullName() << endl;

    cout << "Start Date: " << startDate << endl;
    cout << "End Date: " << endDate << endl;

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

void Epic::GetInfoMin()
{
    cout << "ID " << id << " | Work Item TYPE: Epic | Author: " << author.GetFullName() << endl;
}