#include<iostream>
using namespace std;
int main()
{
    const int A = 12;
    cout << "a year has " <<A <<" months" <<endl;
    cout << "int account for " <<sizeof(int) << endl;
    cout << "int account for " <<sizeof(A) << endl;
    long B = 122;
    cout << "long zccount for " <<sizeof(long) <<endl;
    float C = 3.1415926535;
    double D = 3.1415926535;
    cout << C << endl;
    cout << D << endl;
    cout << "The size of float is " << sizeof(C) <<endl;
    cout << "The size of double is " << sizeof(double) <<endl;
    float E = 3e5;
    cout << E << endl;
    system("pause");
    return 0;
}  
