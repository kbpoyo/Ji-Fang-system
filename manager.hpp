#ifndef _MANAGER_H_
#define _MANAGER_H_
#include <iostream>
using namespace std;
#include "Identity.h"

//管理员类
class Manager : public Identity
{
public:
    //默认构造
    Manager(/* args */);
    //有参构造
    Manager(string name, string pwd);
    //菜单界面
    virtual void operMenu();
    //添加账号
    void addPerson();
    //查看账号
    void showPerson();
    //查看机房信息
    void showComputer();
    //清空预约记录
    void cleanFile();
    //析构
    ~Manager();
};
//默认构造
Manager::Manager(/* args */)
{
}
//析构
Manager::~Manager()
{
}
//有参构造
Manager::Manager(string name, string pwd)
{
    //初始化管理员信息
    this->m_Name = name;
    this->m_pwd = pwd;
}
//菜单界面
void Manager::operMenu()
{
    cout << "欢迎管理员：" << this->m_Name << "登录！" << endl;
    cout << "\t\t -----------------------------------------------" << endl;
    cout << "\t\t|                1. 添加账号               \t| " << endl;
    cout << "\t\t|                                         \t| " << endl;
    cout << "\t\t|                2. 查看账号                \t| " << endl;
    cout << "\t\t|                                          \t| " << endl;
    cout << "\t\t|                3. 查看机房                \t| " << endl;
    cout << "\t\t|                                          \t| " << endl;
    cout << "\t\t|                4. 清空预约                \t| " << endl;
    cout << "\t\t|                                          \t| " << endl;
    cout << "\t\t|                0. 注销登录                \t| " << endl;
    cout << "\t\t|                                          \t| " << endl;
    cout << "\t\t -----------------------------------------------\n"
         << endl;
    cout << "请选择您的操作：" << endl;
}
//添加账号
void Manager::addPerson()
{
}
//查看账号
void Manager::showPerson()
{
}
//查看机房信息
void Manager::showComputer()
{
}
//清空预约记录
void Manager::cleanFile()
{
}

#endif