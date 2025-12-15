#include<iostream>
#include<cstring>
using namespace std;

bool checkAnagram (char* s1 , char* s2){
    int freq[26]={0};
if(strlen(s1) != strlen(s2)){
    return false;
}
else{
    for(int i = 0 ; i < strlen(s1) ; i++){
        freq[s1[i]-'a']++;
    }
    for(int i = 0 ; i < strlen(s2) ; i++){
        freq[s2[i]-'a']--;
    }

    for(int i = 0 ; i <= 25 ; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}



}



int main(){
    char s1[100];
    char s2[100];
    cin.getline(s1,100);
    cin.getline(s2,100);

    bool ans =checkAnagram(s1,s2);
    if(ans){
        cout<<"anagram"<<endl;
    }
    else{
        cout<<"Not an anagram"<<endl;
    }
    return 0;
}