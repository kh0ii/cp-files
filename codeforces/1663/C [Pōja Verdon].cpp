#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum = 0, x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        sum += x;
    }
    cout << sum;
    return 0;
}