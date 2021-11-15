#include<iostream>
#include<vector>
using namespace std;

int count(int index,int sum,int s[],int n,vector<vector<int>> &dp){
    if(sum==0) return 1;
    if(index>=n || sum<0) return 0;
    if(dp[index][sum]!=-1) return dp[index][sum];

    int left=count(index,sum-s[index],s,n,dp);
    int right=count(index+1,sum,s,n,dp);
    return dp[index][sum]=left+right;
}
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int sum ;
    cin>>sum;
    vector<vector<int>> dp(n,vector<int>(sum+1,-1));
    cout<<"Number of ways: "<<count(0,sum,s,n,dp);
    return 0;
}

