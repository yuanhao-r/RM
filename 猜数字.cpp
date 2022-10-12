#include<iostream>
using namespace std;
int main()
{
    int a = 30;
    cout << "请输入您的数字"<< endl;
    cin >> a;

    while (a>30)
    {
        cout <<"高了,请再次输入"<< endl;
        cin >> a;
    }
    while (a<30)
    {
        cout <<"低了，请再次输入"<< endl;
        cin >> a;
    }
    if (a=30)
    {
        cout << "猜对了"<< endl;
    }
    
}
