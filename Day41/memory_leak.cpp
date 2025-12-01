#include<iostream>
using namespace std;

int main()
{
    int *p = new int[100];
    
    p = nullptr;
    delete[] p;

    return 0;
   
}