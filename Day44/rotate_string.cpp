#include<iostream>
#include<cstring>
using namespace std;

void rotate(char* ch){
    int len = strlen(ch);
    int i = len - 2;
    char lc = ch[len-1];
    while(i >= 0){
        ch[i+1]= ch[i];
        i--;
    }
    ch[0]= lc;
}

int main()
{
    char ch[100];
    cin.getline(ch , 100);

    int k ;
    cin >> k;
    k = k % (strlen(ch));
    for(int i = 0 ; i < k ; i++){
        rotate(ch);
    }
    cout<<ch<<endl;
    return 0;
}