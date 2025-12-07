#include<iostream>
#include<cstring>
using namespace std;

int compare(char* c1 , char* c2){
    int i ,j =0;
    while(c1[i] != '\0' and c2[j] != '\0'){
        if(c1[i] > c2[j]){
            return 1;
        }
        else if(c2[j]>c1[i]){
            return -1;
        }
        else{
            i++;
            j++;
        }
    }
    if(c1[i] != '\0'){
        return 1;
    }
    else if(c2[j] != '\0'){
        return -1;
    }
    else{
        return 0;
    }
}

int main()
{
    char str1[100];
    cin.getline(str1 , 100);
    char str2[100];
    cin.getline(str2 , 100);
    cout<<compare(str1 , str2);
}