#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char lar[100];
    int maxi_length = 0;

    char a[100];
    int n;
    cin>>n;

    cin.ignore();
    for(int i = 0 ; i < n ; i++){
      cin.getline(a , 100);
      if(strlen(a)> maxi_length){
        maxi_length = strlen(a);
        strcpy(lar , a);
      }
    }
    cout<<lar<<endl;
}