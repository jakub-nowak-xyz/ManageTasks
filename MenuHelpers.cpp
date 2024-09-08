#include "MenuHelpers.h"

void MenuHelpers::DisplayAllTasks(vector<WorkItem *> &workingItems)
{
    system("clear");
    cout << "All working items:" << endl;

    if (workingItems.empty())
    {
        cout << "No items found...";
        return;
    }

    for (const auto &item : workingItems)
    {
        item->GetInfoMin();
    }
}

void MenuHelpers::GetMenuOptions()
{
    system("clear");

    cout << "Manage Tasks App Option:" << endl;
    cout << "1. Add new work item." << endl;
    cout << "2. Remove work item." << endl;
    cout << "3. Find task by ID" << endl;
    cout << "4. Display all tasks" << endl;
    cout << "To exit the program type 'exit'" << endl;
}

void MenuHelpers::GetContinueMessage()
{
    cout << "Press any key to continue..." << endl;
    cin.get();
}

void MenuHelpers::CreateNewTask(vector<WorkItem *> &workItems)
{
    system("clear");
    cout << "Creating new Working Item" << endl;

    cout << "1. Epic" << endl;
    cout << "2. Task" << endl;
    cout << "3. Issue" << endl;

    string userInput = UserActions::GetInput("Choose work item TYPE:");

    system("clear");

    if (userInput == "1")
    {
        UserActions::CreateEpic(workItems);
    }
    else if (userInput == "2")
    {
        UserActions::CreateTask(workItems);
    }
    else if (userInput == "3")
    {
        UserActions::CreateIssue(workItems);
    }
    else
    {
        cout << "Invalid work item type!" << endl;
    }
}