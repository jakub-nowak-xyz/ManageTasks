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

    addComment();
}

void Task::GetInfoMin()
{
    cout << "ID " << id << " | Work Item TYPE: Task | Author: " << author.GetFullName() << endl;
}