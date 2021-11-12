#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    i=0;
    sort(a,a+n);
    int maxcount=0;
    while(i<n){
        int j=i;
        int count=1;
        while(a[j]==a[j+1]){
            count++;
            j++;
        }
        if(count>maxcount)
            maxcount=count;
        i=j+1;
    }

    if(maxcount>n/2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    if(n%2!=0)
        cout<<a[(n/2)];
    else
        cout<<(a[(n-1)/2]+a[n/2])/2.0;
    return 0;
}
