#include<iostream>
using namespace std;

int main(){
    int arr[] ={3,6,9};

    cout<<arr<<endl;

    int * p;
    p = arr;
    cout<<p<<endl;

    cout<<*p<<endl;


    return 0;
}