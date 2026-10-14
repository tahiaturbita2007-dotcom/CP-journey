#include<iostream>
#include<string>
#include<set>
#include<cctype>

using namespace std;

bool isPangram(const string& str){
    set<char>letters;
    for(char ch : str){
        if(isalpha(ch)){
            letters.insert(tolower(ch));
        }
    }
    return letters.size() == 26;
}

int main(){
    int n;
    string s;
    cin>>n>>s;
    if(n<26){
        cout<<"NO"<<endl;
        return 0;
    }
    if(isPangram(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}