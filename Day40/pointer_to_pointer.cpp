#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int * p1 = &x;
    int **p2;
    p2 = &p1;
    int ***p3 = &p2;
    cout<<&x<<endl;
    cout<<&p1<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;

    cout<<&p2<<endl;
    cout<<p2<<endl;
    cout<<*p2<<endl;

    cout<<**p2<<endl;

    cout<<**p3<<endl;



    return 0;
}