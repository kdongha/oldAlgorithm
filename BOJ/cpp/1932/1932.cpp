#include <iostream>
#include <vector>

using namespace std;

int getMax(int a,int b){
    return a>b?a:b;
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<vector<int> > inputTable(n,vector<int> (n));
    vector<vector<int> > dpTable(n,vector<int> (n,-1));
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin>>inputTable[i][j];
        }
    }
    dpTable[0][0]=inputTable[0][0];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            dpTable[i+1][j]=getMax(dpTable[i+1][j],dpTable[i][j]+inputTable[i+1][j]);
            dpTable[i+1][j+1]=getMax(dpTable[i+1][j+1],dpTable[i][j]+inputTable[i+1][j+1]);
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        max=getMax(dpTable[n-1][i],max);
    }
    cout<<max;
    return 0;
}