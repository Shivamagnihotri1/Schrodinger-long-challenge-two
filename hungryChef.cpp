#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int x ,y,n,r;
        cin>>x>>y>>n>>r;
        if((r/y)>=n){
            cout<<0 <<" "<<n<<endl;
        }
        else if((r/x)<n){
            cout<<-1<<endl;
        }
        else{
            int node = (r-(y*n))/(x-y);
            if((r-(y*n))%(x-y)!=0){
                node+=1;
            }
            cout<<node<<" "<<n-node<<endl;
        }
    }
    return 0;
}