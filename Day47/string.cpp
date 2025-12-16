#include<iostream>
#include<string>
using namespace std;

int main()
{
    // string s1 = "hello";
    // cout<<s1<<endl;
    // string s2(s1);  //content of s1 copied in s2
    // cout<<s2<<endl;
   
    // string s3;  // user input
    // getline(cin , s3);
    // cout<<s3<<endl;

    // string s4 =  " world";

    // // s3 = s3 + s4;
    // s3.append(s4);

    // cout<<s3.find("world")<<endl; //find - gives the starting index of the word

    // cout<<s3<<endl;

    string s5 = "helloworld";
    s5.insert(5, " ");
    cout<<s5<<endl;
    s5.replace(6, 2 , "Mirai"); //it will start fron 6 index take two char and replace wirh string
    s5.erase();
    cout<<s5.length()<<endl;


    return 0;
}