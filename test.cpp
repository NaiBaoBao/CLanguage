#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2,str3;
    int l1,l2;
    while(cin>>str1>>str2){
        l1=str1.length();
        l2=str2.length();
        for(int i=0;i<=l2-l1;i++){
           str3=str2.substr(i,l1);
           if(str3==str1)
           cout<<i<<" ";
       }
       cout<<-1<<endl;
    }
    return 0;
}
