#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "Identity.h"
#include "globalFile.h"
#include "student.hpp"
#include "teacher.hpp"
#include "manager.hpp"
using namespace std;

//登录功能 参数1 操作文件名 参数2 操作身份类型
void loginIn(string fileName, int type)
{
    Identity *person = NULL;

    //读文件
    ifstream ifs;
    ifs.open(fileName, ios::in);

    //判断文件是否存在
    if (!ifs.is_open())
    {
        cout << "文件不存在！" << endl;
        ifs.close();
        return;
    }

    //准备接受用户信息
    int id = 0;
    string name;
    string pwd;

    //判断身份
    if (type == 1) //学生
    {
        cout << "请输入您的学号：" << endl;
        cin >> id;
    }
    else if (type == 2)
    {
        cout << "请输入您的职工号：" << endl;
        cin >> id;
    }
    cout << "请输入用户名：" << endl;
    cin >> name;

    cout << "请输入密码：" << endl;
    cin >> pwd;

    if (type == 1)
    {
        //学生身份验证
        int fId;      //从文件中获取的id号
        string fName; //从文件中获取的姓名
        string fPwd;  //从文件中获取的密码
        while (ifs >> fId && ifs >> fName && ifs >> fPwd)
        {
            //与用户的输入信息作对比
            if (fId == id && fName == name && fPwd == pwd)
            {
                cout << "学生验证登录成功！" << endl;
                system("read -p 'Press Enter to continue...' var");
                system("clear");
                person = new Student(id, name, pwd);
                //进入学生身份的子菜单

                return;
            }
        }
    }
    else if (type == 2)
    {
        //教师身份验证
    }
    else if (type == 3)
    {
        //管理员身份验证
    }

    cout << "验证登录失败！" << endl;
    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

void showManu()
{
    cout << "==================== 欢迎来到机房预约系统 =======================" << endl;
    cout << endl
         << "请输入您的身份" << endl;
    cout << "\t\t -----------------------------------------------" << endl;
    cout << "\t\t|                1. 学生代表               \t| " << endl;
    cout << "\t\t|                                         \t| " << endl;
    cout << "\t\t|                2. 老   师                \t| " << endl;
    cout << "\t\t|                                          \t| " << endl;
    cout << "\t\t|                3. 管 理 员                \t| " << endl;
    cout << "\t\t|                                          \t| " << endl;
    cout << "\t\t|                0. 退    出                \t| " << endl;
    cout << "\t\t|                                          \t| " << endl;
    cout << "\t\t -----------------------------------------------\n"
         << endl;
    cout << "请输入您的选择:" << endl;
}
int main()
{

    while (true)
    {
        showManu();
        int select; //接受用户的选择
        cin >> select;

        switch (select) //根据用户输入选择实现不同接口
        {
        case 1: //学生
            loginIn(STUDENT_FILE, 1);
            break;
        case 2: //老师
            loginIn(TEACHER_FILE, 2);
            break;
        case 3: //管理员
            loginIn(ADMIN_FILE, 3);
            break;
        case 0: //退出
            cout << "欢迎下次使用！" << endl;
            exit(1);
            break;
        default:
            cout << "输入有误，请重新选择！" << endl;
            system("read -p 'Press Enter to continue...' var");
            system("clear");
            break;
        }
    }

    return 0;
}