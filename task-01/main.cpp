#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){ string name;
cout<<"enter name:";
getline(cin, name);
reverse(name.begin(), name.end());
cout<<name<<endl;}
