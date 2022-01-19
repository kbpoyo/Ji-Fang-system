#ifndef _IDENTITY_H_
#define _IDENTITY_H_

#include <iostream>
using namespace std;
//身份抽象基类
class Identity
{
public:
    //操作菜单
    virtual void operMenu() = 0;

    string m_Name; //用户名
    string m_pwd;  //密码
};

#endif