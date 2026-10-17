#include<iostream>

using namespace std;

int sandwiches(int a,int b){
    int sliced=0;
    while(a!=0||b!=0){
        a-=2;
        b-=1;
        sliced++;
    }
    return sliced;
}

int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        sandwiches(a,b);
    }
    return 0;

}