#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();  //used for ignore /n
    char ch[20];
    cin.getline(ch , 20);

    cout<<ch;
    return 0;
}