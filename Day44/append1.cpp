#include<iostream>
#include<cstring>
using namespace std;

void append(char* s1 , char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i = 0;
    int j = len1;
    while(i < len2){
        s1[j]= s2[i];
        i++;
        j++;
    
    }
    s1[j]= '\0';


}

int main(){

    char s1[100];
    cin.getline(s1, 100);
    char s2[100];
    cin.getline(s2, 100);

    append(s1, s2);
    cout<<s1<<endl;
}