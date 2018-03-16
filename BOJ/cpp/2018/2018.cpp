#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    int count=0;
    int start=1;
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
        while(sum>N){
            sum-=start++;
        }
        if(sum==N){
            count++;
        }
    }
    cout<<count;
}