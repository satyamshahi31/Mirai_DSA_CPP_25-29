#include<iostream>
using namespace std;

void readstring(char* arr , int size , char del){
    char ch;
    ch = cin.get();
    int i = 0;

    while(ch != del and i < size - 1){
        arr[i]= ch;
        ch = cin.get();
        i++;
    }
    arr[i]= '\0';
    cout<<arr<<endl;
}
int main()
{
    char arr[10];
    char del;
    del = cin.get();
    readstring(arr, 10, del);
    return 0;
}