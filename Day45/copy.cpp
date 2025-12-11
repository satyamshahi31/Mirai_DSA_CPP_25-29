#include<iostream>
#include<cstring>
using namespace std;

void copy(char* s1 , char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i = 0;
    int j = 0;
    while(j < len2){
        s1[i]= s2[j];
        i++;
        j++;
    
    }
    s1[i]= '\0';


}

int main(){

    char s1[100];
    cin.getline(s1, 100);
    char s2[100];
    cin.getline(s2, 100);
    cout<<"s1"<<s1<<endl;
    cout<<"s2"<<s2<<endl;
    copy(s1, s2);

    //strcpy(s1,s2);-- copy thr comtrnt of s2 in s1
    cout<<s1<<endl;
}