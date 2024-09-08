#ifndef ISSUE_H
#define ISSUE_H

#include <string>
#include <iostream>
#include "WorkItem.h"
#include "UserActions.h"
#include "User.h"

using namespace std;

class Issue : public WorkItem
{
private:
    string efford;

public:
    Issue(string state, string area, int priority, User author, string efford);

    void GetInfo() override;
    void GetInfoMin() override;
};

#endif // ISSUE_H