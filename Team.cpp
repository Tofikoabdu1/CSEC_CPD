#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,pro=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            pro++;
        }
    }
    cout<<pro;
    return 0;
}
