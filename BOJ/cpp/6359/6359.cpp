#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int T,n,num;
    cin>>T;
    vector<bool> table(101,false);
    for(int i=1;i<101;i++){
        int temp=sqrt(i);
        if(i==temp*temp){
            table[i]=true;
        }
    }
    for(int i=0;i<T;i++){
        num=0;
        cin>>n;
        for(int j=1;j<=n;j++){
            if(table[j]){
                num++;
            }
        }
        cout<<num<<"\n";
    }
    return 0;
}