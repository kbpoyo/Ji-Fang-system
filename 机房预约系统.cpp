#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

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
            break;
        case 2: //老师
            break;
        case 3: //管理员
            break;
        case 0: //退出
            cout<<"欢迎下次使用！"<<endl;
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