#ifndef USERACTIONS_H
#define USERACTIONS_H

#include <vector>
#include <string>
#include <tuple>
#include "User.h"
#include "Issue.h"
#include "Task.h"
#include "Epic.h"

using namespace std;

class WorkItem; // Forward declaration

class UserActions
{
public:
    static string GetInput(const string &msg);
    static User CreateUser();
    static tuple<string, string, int, User> CreateWorkItem();
    static void CreateIssue(vector<WorkItem *> &workItems);
    static void CreateTask(vector<WorkItem *> &workItems);
    static void CreateEpic(vector<WorkItem *> &workItems);
    static void FindTask(vector<WorkItem *> &workItems);
    static tuple<string, User> addComment();
};

#endif // USERACTIONS_H