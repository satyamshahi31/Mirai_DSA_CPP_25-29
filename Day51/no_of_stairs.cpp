#include<iostream>
using namespace std;

int no_of_stairs(int n){

    if(n==1 or n == 2){
        return n;
    }
    return no_of_stairs(n-1)+no_of_stairs(n-2);
}

int main()
{

    cout<<no_of_stairs(3);
    return 0;
}