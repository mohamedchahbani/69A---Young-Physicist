#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,z,sx=0,sy=0,sz=0;
    cin>>n;
    while (n--)
    {
        cin>>x>>y>>z;
        sx+=x;
        sz+=z;
        sy+=y;
    }
    if ((sx==0)&&(sy==0)&&(sz==0))
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    
    return 0;
}