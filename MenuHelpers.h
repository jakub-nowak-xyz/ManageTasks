#pragma once

#include <iostream>
#include <vector>
#include "WorkItem.h"
#include "UserActions.h"

using namespace std;

class MenuHelpers
{
public:
    static void DisplayAllTasks(vector<WorkItem *> &workingItems);
    static void GetMenuOptions();
    static void GetContinueMessage();
    static void CreateNewTaskUI(vector<WorkItem *> &workItems);
};