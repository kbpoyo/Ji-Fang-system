#ifndef _TEACHER_H_
#define _TEACHER_H_
#include <iostream>
using namespace std;
#include "Identity.h"

//教师类设计
class Teacher : public Identity
{
private:
    int m_EmpId; //职工号
public:
    //默认构造
    Teacher(/* args */);
    //有参构造
    Teacher(int empId, string name, string pwd);
    //菜单界面
    virtual void operMenu();
    //查看所有人的预约
    void showAllOrder();
    //审核预约
    void validOrder();
    //析构
    ~Teacher();
};
//默认构造
Teacher::Teacher(/* args */)
{
}
//析构
Teacher::~Teacher()
{
}
//有参构造
Teacher::Teacher(int empId, string name, string pwd)
{
}
//菜单界面
void Teacher::operMenu()
{
  
}
//查看所有人的预约
void Teacher::showAllOrder()
{
}
//审核预约
void Teacher::validOrder()
{
}
#endif