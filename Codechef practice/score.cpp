#include <bits/stdc++.h>


using namespace std;

int main() {
    int T;
    cin>>T;
	for(int i=0;i<T;i++){
	    int arr[3];
	    for(int j=0;j<3;j++){
	     cin>>arr[j];   
	    }
	    cout<<*(max_element(arr, arr + 3))<<endl;
	}

    return 0;
}