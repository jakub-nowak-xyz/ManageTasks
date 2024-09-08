#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>
#include "WorkItem.h"
#include "User.h"

using namespace std;

class Task : public WorkItem
{
private:
    string activity;
    string remainingWork;

public:
    Task(string state, string area, int priority, User author, string activity, string remainingWork);

    void GetInfo() override;
    void GetInfoMin() override;
};

#endif // TASK_H