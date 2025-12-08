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

void append(char* str, char* str2 ) {
    int i = 0;
    int len2 = strlen(str2);
    int len = strlen(str);
    int j = len;
    for(i = 0; i < len2; i++) {
        str[j++] = str2[i];

    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char str2[100];
    
    readstring(str,100, '\n');
    // cin.ignore();
    readstring(str2,100 , '\n');
    // append(str, str2);

    strcat(str , str2);
     cout<<str<<endl;
    return 0;
}   