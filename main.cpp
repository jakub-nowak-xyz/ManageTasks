#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#include "WorkItem.h"
#include "MenuHelpers.h"
#include "UserActions.h"

vector<WorkItem *> workItems;
bool isRunning = true;

int main()
{
    do
    {
        MenuHelpers::GetMenuOptions();
        string userOption = UserActions::GetInput("Choose an option:");

        transform(userOption.begin(), userOption.end(), userOption.begin(), ::tolower); // transform toLower()

        if (userOption == "1")
        {
            MenuHelpers::CreateNewTask(workItems);
            MenuHelpers::GetContinueMessage();
        }
        else if (userOption == "2")
        {
            cout << "Remove task" << endl;
            MenuHelpers::GetContinueMessage();
        }
        else if (userOption == "3")
        {
            cout << "Find task" << endl;
            UserActions::FindTask(workItems);
            MenuHelpers::GetContinueMessage();
        }
        else if (userOption == "4")
        {
            MenuHelpers::DisplayAllTasks(workItems);
            MenuHelpers::GetContinueMessage();
        }
        else if (userOption == "exit")
        {
            isRunning = false;
        }
        else
        {
            cout << "Invalid option. Please try again." << endl;
            MenuHelpers::GetContinueMessage();
        }

    } while (isRunning);

    return 0;
}