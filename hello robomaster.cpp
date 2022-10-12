#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    cout << "请输入需要输出的个数："<<endl;
    while(1)
    {
    cin >> a;
    if(a>10)
    {
        cout << "大了" << endl;
    }
    else if(a<1)
    {
        cout << "小了" << endl;
    }
    else
    {
    do
    {
        cout << "Hello RoboMaster!"<< endl;
        b++;
    } while (b<a);
    b=0;
    }
    }
  system("pause");
  return 0;
}
