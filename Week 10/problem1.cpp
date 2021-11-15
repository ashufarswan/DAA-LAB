#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<pair<int,int>> v;
    int s[n],e[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
        cin>>e[i];
    for(i=0;i<n;i++)
        v.push_back(make_pair(e[i],s[i]));

    sort(v.begin(),v.end());
    int end = -1;
    int count=0;
    vector<int> list;
    for(i=0;i<n;i++){
        if(v[i].second>end){
            count++;
            list.push_back(i+1);
            end = v[i].first;
        }
    }

    cout<<"No. of non conflicting activities: "<<count<<endl;
    cout<<"List of selected activities: ";
    vector<int>::iterator it;
    for(it=list.begin();it!=list.end();it++)
            cout<<*it<<" ";
    return 0;
}
