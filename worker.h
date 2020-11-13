//
// Created by Eric on 2020/11/13.
//

#ifndef EMPLOYEEMANAGE_WORKER_H
#define EMPLOYEEMANAGE_WORKER_H

#include <string>

using namespace std;

class Worker
{
public:
    virtual void showInfo() = 0;

    virtual string getDeptName() = 0;

    int m_Id;
    string m_Name;
    int m_DeptId;
};


#endif //EMPLOYEEMANAGE_WORKER_H
