#include <iostream>
#include <vector>

using namespace std;

int M,N;
vector<vector<int> > v;
vector<vector<int> > dptable;

int getdp(int x,int y){
    if(dptable[x][y]==-1){
        dptable[x][y]=0;
        if(x<M-1 && v[x][y]<v[x+1][y]){
            dptable[x][y]+=getdp(x+1,y);
        }
        if(x>0 && v[x][y]<v[x-1][y]){
            dptable[x][y]+=getdp(x-1,y);
        }
        if(y<N-1 && v[x][y]<v[x][y+1]){
            dptable[x][y]+=getdp(x,y+1);
        }
        if(y>0 && v[x][y]<v[x][y-1]){
            dptable[x][y]+=getdp(x,y-1);
        }
    }
    return dptable[x][y];
}

int main(){
    ios::sync_with_stdio(false);
    cin>>M>>N;
    v.assign(M,vector<int> (N));
    dptable.assign(M,vector<int> (N,-1));
    dptable[0][0]=1;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>v[i][j];
        } 
    }
    cout<<getdp(M-1,N-1);
}