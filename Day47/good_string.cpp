#include<iostream>
using namespace std;

bool checkGood(string& s){
    for(char c : s){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin , s);

    if(checkGood(s)){
        cout<<"Good String"<<endl;
    }
    else{
        cout<<"Not a Good String"<<endl;
    }
    return 0;
}