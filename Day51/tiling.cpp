#include<iostream>
using namespace std;

int tiles(int n){

    if(n<4){
        return 1;
    }
    if(n==4){
        return 2;
    }
    return tiles(n-1)+tiles(n-4);
}

int main()
{

    cout<<tiles(6);
    return 0;
}