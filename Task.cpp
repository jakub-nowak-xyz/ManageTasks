#include "Task.h"

Task::Task(string state, string area, int priority, User author, string activity, string remainingWork)
    : WorkItem(state, area, priority, author), activity(activity), remainingWork(remainingWork) {}

void Task::GetInfo()
{
    cout << "ID " << id << " | Work Item TYPE: Task | Author: " << author.GetFullName() << endl;
    GetWorkItemInfo();
    cout << "Activity: " << activity << endl;
    cout << "Remaining Work: " << remainingWork << endl;

    cout << endl;
    cout << " -- -- -- -- -Comments-- -- -- -- -" << endl;
    ShowComments();

    cout << "Do you want to add a comment? (Y/N): ";
    char option;
    cin >> option;
    cin.ignore();
    if (option == 'Y' || option == 'y')
    {
        auto [message, author] = UserActions::addCommentUI();
        addComment(message, author);
    }
}

void Task::GetInfoMin()
{
    cout << "ID " << id << " | Work Item TYPE: Task | Author: " << author.GetFullName() << endl;
}