#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string before,after;
    int group=0;
    cin>>before;
    group++;
    for(int i=1;i<n;i++){
        cin>>after;
        if(before!=after){
            group++;
        }
        before=after;
    }
    cout<<group;
    return 0;
}
