//
// Created by Eric on 2020/11/13.
//

#pragma once

#include <iostream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "fstream"

#define FILENAME "empFile.txt"

using namespace std;

class WorkerManager
{
public:
    WorkerManager();

    void Show_Menu();

    void ExitSystem();

    int m_EmpNum;
    Worker **m_EmpArray;

    void Add_Emp();

    void save();

    bool m_FileIsEmpty;

    int get_EmpNum();

    void init_Emp();

    void show_Emp();


    void Del_Emp();

    int IsExist(int id);

    void Mod_Emp();

    void Find_Emp();

    void Sort_Emp();

    void Clean_File();

    ~WorkerManager();
};
