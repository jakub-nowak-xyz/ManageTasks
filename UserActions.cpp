#include "UserActions.h"
#include <iostream>

using namespace std;

string UserActions::GetInput(const string &msg)
{
    cout << msg;
    string input;
    getline(cin, input);
    return input;
}

User UserActions::CreateUser()
{
    string firstName = GetInput("Enter first name: ");
    string lastName = GetInput("Enter last name: ");
    User newUser(firstName, lastName);
    return newUser;
}

tuple<string, string, int, User> UserActions::CreateWorkItem()
{
    string state = GetInput("Enter state value (NEW | IN PROGRESS | DONE):");
    string area = GetInput("Enter area value (TEXT):");

    int priority;
    while (true)
    {
        string priorityText = GetInput("Enter priority (NUMBER):");
        try
        {
            priority = stoi(priorityText);
            break; // Exit the loop if conversion is successful
        }
        catch (const invalid_argument &e)
        {
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        catch (const out_of_range &e)
        {
            cout << "Number out of range. Please enter a smaller number." << endl;
        }
    }

    User author = CreateUser();
    return make_tuple(state, area, priority, author);
}

void UserActions::CreateEpic(vector<WorkItem *> &workItems)
{
    cout << "Creating Epic" << endl;
    auto [state, area, priority, author] = CreateWorkItem();

    string startDate = GetInput("Enter start date (dd-MM-yyyy):");
    string endDate = GetInput("Enter end date (dd-MM-yyyy):");

    Epic *epic = new Epic(state, area, priority, author, startDate, endDate);
    workItems.push_back(epic);
}

void UserActions::CreateIssue(vector<WorkItem *> &workItems)
{
    cout << "Creating Issue" << endl;
    auto [state, area, priority, author] = CreateWorkItem();

    string effort = GetInput("Enter effort value (TEXT):");

    Issue *issue = new Issue(state, area, priority, author, effort);
    workItems.push_back(issue);
}

void UserActions::CreateTask(vector<WorkItem *> &workItems)
{
    cout << "Creating Task" << endl;
    auto [state, area, priority, author] = CreateWorkItem();

    string activity = GetInput("Enter activity value (TEXT):");
    string remainingWork = GetInput("Enter remaining work value (TEXT):");

    Task *task = new Task(state, area, priority, author, activity, remainingWork);
    workItems.push_back(task);
}

void UserActions::FindTask(vector<WorkItem *> &workItems)
{
    system("clear");
    int id;
    while (true)
    {
        string idText = GetInput("Enter work item ID:");
        try
        {
            id = stoi(idText);
            break; // Exit the loop if conversion is successful
        }
        catch (const invalid_argument &e)
        {
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        catch (const out_of_range &e)
        {
            cout << "Number out of range. Please enter a smaller number." << endl;
        }
    }

    for (const auto &item : workItems)
    {
        if (item->GetId() == id)
        {
            item->GetInfo();
            return;
        }
    }

    cout << "Task with ID " << id << " not found." << endl;
}

tuple<string, User> UserActions::addComment()
{
    string message = GetInput("Enter comment message:");
    User author = CreateUser();
    return make_tuple(message, author);
}