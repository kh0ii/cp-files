#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int xsum=0, ysum=0, x=0, y=n-1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(a[x]>a[y]){
                xsum+=a[x];
                x++;
            }
            else{
                xsum+=a[y];
                y--;
            }
        }
        else{
            if(a[x]>a[y]){
                ysum+=a[x];
                x++;
            }
            else{
                ysum+=a[y];
                y--;
            }
        }
    }
    cout<<xsum<<" "<<ysum;
}
