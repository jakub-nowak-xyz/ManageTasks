#include "WorkItem.h"
#include <iostream>

int WorkItem::count = 0;

void WorkItem::GetWorkItemInfo() const
{
    cout << "ID: " << id << "\nState: " << state << "\nArea: " << area << "\nPriority: " << priority << "\nAuthor: " << author.GetFullName() << endl;
}

void WorkItem::ShowComments() const
{
    for (const auto &comment : comments)
    {
        comment.Display();
    }
}

void WorkItem::addComment()
{
    // Add a comment to the work item
}