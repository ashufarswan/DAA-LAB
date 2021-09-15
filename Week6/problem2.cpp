#include<iostream>
#include<queue>
using namespace std;

/* 0 = not colored
   1 = Red
   -1 = Blue
*/
bool isBipartite(int **g,int n,int s){
    queue<int>q;
    int color[n]={0};
    int c_color = 1;
    color[s]=c_color;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(g[u][u]!=0)      //check self loop
            return false;
        c_color*=-1;
        for(int i=0;i<n;i++){
            if(g[u][i]!=0&&color[i]==0){
                color[i]=c_color;
                q.push(i);
            }
            if(g[u][i]!=0&&color[u]==color[i])
                return false;
        }
    }
    return true;
}


int main(){
    int n;
    scanf("%d",&n);
    int** g = new int*[n];
    for(int i=0;i<n;i++){
        g[i]=new int[n];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&g[i][j]);

    if(isBipartite(g,n,0))
        cout<<"YES Bipartite";
    else
        cout<<"Not Bipartite";
    return 0;
}
