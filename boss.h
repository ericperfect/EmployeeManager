//
// Created by Eric on 2020/11/13.
//

#ifndef EMPLOYEEMANAGE_BOSS_H
#define EMPLOYEEMANAGE_BOSS_H

#include <iostream>

using namespace std;

#include "worker.h"

class Boss : public Worker
{
public:
    Boss(int id, string name, int dId);

    virtual void showInfo();

    virtual string getDeptName();

};


#endif //EMPLOYEEMANAGE_MANAGER_H
