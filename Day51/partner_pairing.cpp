#include<iostream>
using namespace std;


int ways(int n){

    if(n==1 || n==2){
        return n;
    }

    return ways(n-1)+(n-1)*ways(n-2);

}

int main()
{
    cout<<ways(10);

    return 0;
}