#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;
struct Node{
    string str;
    int n;
};
int main(){
    vector<Node> list;
    string str;
    char ch;

    while((ch=getchar())!=EOF){
        if(ch=='\n'){
            bool flag=true;
            for(vector<Node>::iterator it=list.begin();it!=list.end();it++){
                if(((*it).str)==str){
                    ((*it).n)+=1;
                    flag=false;
                }
            }
            if(flag){
                Node *node=new Node();
                node->n=1;
                node->str=str;
                list.push_back(*node);
            }
            str.erase(0);
            for(int i=0;i<list.size()-1;i++){
                for(int j=i+1;j<list.size();j++){
                    if(list[i].n<list[j].n||(list[i].n==list[j].n&&list[i].str<list[j].str)){
                        int tmp=list[i].n; list[i].n=list[j].n; list[j].n=tmp;
                        string str=list[i].str; list[i].str=list[j].str; list[j].str=str;
                    }
                }
            }
            for(vector<Node>::iterator it=list.begin();it!=list.end();it++){
                if(it+1!=list.end())
                    cout<<(*it).str<<"("<<(*it).n<<")"<<" ";
                else
                    cout<<(*it).str<<"("<<(*it).n<<")";
            }
            cout<<endl;
            str.erase(0);
            vector<Node>::iterator it1=list.begin(),it2=list.end();
            list.erase(it1,it2);
        }
        if(ch==' '){
            bool flag=true;
            for(vector<Node>::iterator it=list.begin();it!=list.end();it++){
                if(((*it).str)==str){
                    ((*it).n)+=1;
                    flag=false;
                }
            }
            if(flag){
                Node *node=new Node();
                node->n=1;
                node->str=str;
                list.push_back(*node);
            }
            str.erase(0);
        }
        else{
            str.push_back(ch);
        }
        
    }
    
    return 0;
}
