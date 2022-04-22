#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, faces=0;
    cin>>n;
    string words[n];
    for(int i=0; i<n; i++) cin>>words[i];
    for(int i=0; i<n; i++){
        if(words[i]=="Tetrahedron") faces+=4;
        else if(words[i]=="Cube") faces+=6;
        else if(words[i]=="Octahedron") faces+=8;
        else if(words[i]=="Dodecahedron") faces+=12;
        else if(words[i]=="Icosahedron") faces+=20;
    }
    cout<<faces;
    return 0;
}
