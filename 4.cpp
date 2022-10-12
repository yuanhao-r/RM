#include<iostream>
using namespace std;
int main()
{
     char A = 'a';
     cout << "Please write the number of A " << endl;
     cin >> A;
     cout << A << endl;
     float A = 3.1415926;
     cout << A << endl;
     double B = 3.1415926;
     cout << B << endl;
     float a = 3;
     float b = a++ *10;
     cout << a << "\n" << b << endl;
     int a = 2;
     int b = a-- *3;
     cout << a            <<        b << endl;
     int a = 1;
     int b = 2;
     cout << (a == b) << endl;
     float c = 3;
     int d = 4;
     cout << (c <= d ) << endl;
     int a = 23;
     cout << !!a << endl;
     int a = 0;
     float b = 2;
     cout << (a && b ) << endl;
     char a = 'a';
     cout << (int)a << endl;
     int a = 10;
     int b = 20;
     int c = 0;
     c = (a<b ? a : b);
     cout << c << endl;
     (a>b ? b : a )=100;
     cout << a << endl;
     cout << b << endl;
     int score = 0;
     cin >> score;
     switch(score)
     {
         case 10:
         cout << "good" << endl;
         break;
         case 9:
         cout << "nice" << endl;
         break;
         default:
         cout << "bad" << endl;
     }
     int a = 10;
     int b = ++a*10;
     cout << a << endl;
     cout << b << endl;

     while(a<20)
     {
        
         cout << a << endl;
         a++;
     }




}
