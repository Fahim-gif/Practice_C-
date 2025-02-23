#include <iostream>
using namespace std;

void lucky(int n, int c);
int main() {
    char c;
    int a;
    cin>>a;
    int arr[a];
    for(int i = 0; i<a; i++){
        cin>>arr[i];
        
    }
    return 0;
}

void lucky(int n, int c){
    int l[]= {4,7,47,744};
    bool found = false;
    for(int i=0; i<4; i++){
        if(l[i] >= n && l[i] <= c){
            cout<<l[i]<<" ";
            found = true;
        }
    }
    if (!found) {
        cout<<"-1";
    }
    cout<<endl;
}