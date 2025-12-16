#include<iostream>
#include<string>
using namespace std;

bool isVowel(char c){
    return (c=='a' || c == 'e' || c == 'i' || c== 'o' || c =='u');
}

int longestGood(string& s){
    int maxi = 0;
    int len = 0;
    for(char c : s){
        if(isVowel(c)){
            len++;
            maxi = max (maxi , len);
        }
        else{
            len = 0;
        }
    }
    return maxi;
}

int main()
{
    string s;
    getline(cin , s);

    cout<<longestGood(s)<<endl;
    return 0;
}