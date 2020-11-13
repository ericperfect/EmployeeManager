//
// Created by Eric on 2020/11/13.
//

#ifndef EMPLOYEEMANAGE_EMPLOYEE_H
#define EMPLOYEEMANAGE_EMPLOYEE_H
#include <iostream>
#include "worker.h"

class Employee: public Worker
{
public:
    Employee(int id, string name, int dId);

    virtual void showInfo();
    virtual string getDeptName();
};

#endif //EMPLOYEEMANAGE_EMPLOYEE_H
