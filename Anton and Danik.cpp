#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int anton=0;
    int danik=0;
    for(char ch : a){
        if(ch=='A')anton++;
        else if(ch=='D')danik++;
    }
    if (anton>danik){cout << "Anton" <<endl;}
    else if(anton<danik){cout << "Danik" <<endl;}
    else if (anton==danik){cout << "Friendship" <<endl;}
    return 0;
}
