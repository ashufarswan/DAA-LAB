#include<iostream>
using namespace std;

bool isCyclicUtil(int **g,int n,int i,bool visited[],bool rs[]){
    if(visited[i]==false){
        visited[i]=true;
        rs[i]=true;
        for(int j=0;j<n;j++){
            if(g[i][j]&&!visited[j]&&isCyclicUtil(g,n,j,visited,rs))
                return true;
            else if(g[i][j]&&rs[j])
                return true;
        }
    }
    rs[i]=false;
    return false;
}

bool isCyclic(int **g,int n){
    bool visited[n];
    bool recstack[n];
    for(int i=0;i<n;i++){
        visited[i]=false ;
        recstack[i]=false;
    }
    for(int i=0;i<n;i++){
        if(isCyclicUtil(g,n,i,visited,recstack))
            return true;
    }
    return false;
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

    if(isCyclic(g,n))
        cout<<"Yes Cycle Exist.\n";
    else
        cout<<"No Cycle Exist.\n";

    return 0;
}
