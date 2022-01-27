#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    double res;
    cin>>n;
    while(n>0){
        res = 0;
        cin>>k;
        int nums[k];
        for(int i=0; i<k; i++) cin>>nums[i];
        sort(nums, nums+k);
        for(int i=0; i<k-1; i++){
            res += double(nums[i]);
        }
        res = res/(k-1) + nums[k-1];
        n--;
        cout<<fixed<<setprecision(9)<<res<<"\n";
    }
}
