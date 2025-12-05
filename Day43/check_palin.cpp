#include<iostream>
#include<cstring>
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
  
}
void reverse(char* arr){
    int i = 0;
    int j = strlen(arr)-1;
    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

bool checkplain(char* array){
    int i = 0;
    int j = strlen(array)-1;
    while(i < j){
       if(array[i] != array[j]){
        return false;
       }
        i++;
        j--;
    }
    return true;
}

int main()
{
    char arr[100];
    char del;
    del = cin.get();
    readstring(arr, 100, del);
     cout<<arr<<endl;  //before reverse
    reverse(arr);
    cout<<arr<<endl;  //after reverse

    cout<<checkplain(arr)<<endl;
    return 0;
}