#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
string s1,s2;

cin>>s1>>s2;

for(auto& s3 : s1){
    s3 = tolower(s3); 
}

for(auto& s4 : s2){
    s4 = tolower(s4);
}

if(s1>s2){
    cout<<1;
}
if(s1<s2){
    cout<<-1;
}
if(s1==s2){
    cout<<0;
}

 return 0;
}
