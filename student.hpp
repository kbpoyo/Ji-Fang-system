#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
using namespace std;
#include "Identity.h"

//学生类
class Student : public Identity
{
private:
    int id; //学号
public:
    //默认构造
    Student(/* args */);
    //有参构造
    Student(int id, string name, string pwd);
    //菜单界面
    virtual void operMenu();
    //申请预约
    void applyOrder();
    //查看自己的预约
    void showMyOrder();
    //查看所有预约
    void showAllOrder();
    //取消预约
    void cancelOrder();
    //析构
    ~Student();
};

//默认构造
Student::Student(/* args */)
{
}

//析构
Student::~Student()
{
}

//有参构造
Student::Student(int id, string name, string pwd)
{
}

//菜单界面
void Student::operMenu()
{
}

//申请预约
void Student::applyOrder()
{
}

//查看自己的预约
void Student::showMyOrder()
{
}

//查看所有预约
void Student::showAllOrder()
{
}
//取消预约
void Student::cancelOrder()
{
}

#endif