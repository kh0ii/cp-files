#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a;
        int p=a/3,r=a%3;
        if(r==0) b=c=p;
            else if(r==1){b=p+1;c=p;}
            else {b=p;c=p+1;}
        cout<<b<<" "<<c<<endl;
    }
}