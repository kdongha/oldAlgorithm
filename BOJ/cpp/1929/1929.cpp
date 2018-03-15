#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int M,N;
    vector<bool> v;
    cin >>M>>N;
    v.assign(N+1,true);
    v[1]=false;
    for(int i=2;i<=N;i++){
        if(v[i]){
            for(int j=i+i;j<=N;j+=i){
                v[j]=false;
            }
        }
    }
    for(int i=M;i<=N;i++){
        if(v[i]){
            cout<<i<<"\n";
        }
    }

}