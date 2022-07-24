#include<iostream>
using namespace std;
#define amo long long 
int main(){
    int T;
    cin>>T;
    while(T--){
        amo A,B,N;
        cin>>A>>B>>N;
        if(A%B==0){
            cout<<-1<<endl;
            continue;
        }
        
        amo K = N;
        if(K%A!=0){
            K = N+A-(K%A);
        }
        
        while(!(K%A==0 and K%B!=0)){
            K+=A;
            
        }
        cout<<K<<endl;
    }
    return 0;
}

