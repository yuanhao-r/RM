#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int a = rand()%100 ;
    cout << a << endl;
    int b=0;
    while(1)
    {
        cin >> b;
        if(b<a)
        {
            cout << "小了"<< endl;
        }
        else if(b>a)
        {
            cout << "大了"<< endl;
        }
        else
        {
            cout << "对了"<< endl;
            break;
        }
    }
}
