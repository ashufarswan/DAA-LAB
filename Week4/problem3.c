#include<stdio.h>
int ksmallest(int *a,int l,int r,int k){
    if(l==r)
        return a[l];
    int pos = partition(a,l,r);
    int c = pos-l+1;
    if(c==k)
        return a[pos];
    else if(c>k)
         return ksmallest(a,l,pos-1,k);
    else
         return ksmallest(a,pos+1,r,k-i);
}
int partition(int *a,int l,int r){
    int p = a[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(a[j]<p){
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[r] =a[i+1];
    a[i+1] = p;
    return (i+1);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        comp=0,swap=0;
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int k;
        scanf("%d",&k);
        ksmallest(a,0,n-1,k);
    }
    return 0;
}
