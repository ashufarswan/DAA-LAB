#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first<b.first;
}
int check_index(int a[],int b[],int i,int j,bool complete[],int n){
    for(int k=0;k<n;k++){
        if(a[k]==i&&b[k]==j&&!complete[k]){
            complete[k]=true;
            return k+1;
        }
    }
}
int main(){
    int n,i;
    cin>>n;
    vector<pair<int,int>> v;
    int tt[n],e[n];
    for(i=0;i<n;i++)
        cin>>tt[i];
    for(i=0;i<n;i++)
        cin>>e[i];
    for(i=0;i<n;i++)
        v.push_back(make_pair(e[i],tt[i]));
    vector<int> t;
    sort(v.begin(),v.end());
    int count=0,j=0;
    bool comp[n]={false};
    for(int i=0;i<n;i++){
        if(v[i].first-j>=v[i].second){
            j=j+v[i].second;
            count++;
            t.push_back(check_index(e,tt,v[i].first,v[i].second,comp,n));
        }
    }
    cout<<"Max number of task: "<<count;
    cout<<"\nSelected task no: ";
    for(int i=0;i<t.size();i++){
        cout<<t.at(i)<<",";
    }
    return 0;
}
