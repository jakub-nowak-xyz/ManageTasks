#ifndef EPIC_H
#define EPIC_H

#include <string>
#include <iostream>
#include "WorkItem.h"
#include "UserActions.h"
#include "User.h"

using namespace std;

class Epic : public WorkItem
{

private:
    string startDate;
    string endDate;

public:
    Epic(string state, string area, int priority, User author, string startDate, string endDate);

    void GetInfo() override;
    void GetInfoMin() override;
};

#endif // EPIC_H