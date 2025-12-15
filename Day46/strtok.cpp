#include<iostream>
#include<cstring>

using namespace std;

int  main()
{
    char ch[] = "abc.def,ghi";
    char* token = strtok(ch , ".");
    while(token != NULL){
     cout<<token<<endl;
     token = strtok(NULL , ".,");  

    }
    

    return 0;
}