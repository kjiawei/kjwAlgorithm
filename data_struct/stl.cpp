#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
/*
一 vector
二 iterator智能指针
三 
*/

using namespace std;

int main(int argc,char **argv)
{
    vector<string> name;
    name.push_back("lll");
    name.push_back("jjj");
    name.push_back("ttt");
    name.push_back("bbb");
    name.push_back("fff");

    sort(name.begin(),name.end());

    vector<string>::iterator iter = name.begin();
    while(iter!=name.end())
    {
        
        cout<<*iter<<"\n";
        ++iter;
    }
    

    /*二 vector<string>::iterator iter = name.begin();
    while(iter!=name.end())
    {
        cout<<*iter<<"\n";
        ++iter;
    }*/
    

    /*一 vector<string> name;
    name.push_back("666");
    name.push_back("999"); 
    for(int i = 0;i<name.size();i++)
    {
        cout<<name[i]<<"\n";
    }*/
    
    return 0;
}