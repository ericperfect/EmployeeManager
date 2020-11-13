//
// Created by Eric on 2020/11/13.
//

#ifndef EMPLOYEEMANAGE_MANAGER_H
#define EMPLOYEEMANAGE_MANAGER_H

#include <iostream>

using namespace std;

#include "worker.h"

class Manager : public Worker
{
public:
    Manager(int id, string name, int dId);

    virtual void showInfo();

    virtual string getDeptName();

};


#endif //EMPLOYEEMANAGE_MANAGER_H
