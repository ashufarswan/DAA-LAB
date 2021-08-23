#include<stdio.h>
void quick_sort(int *a,int l,int r,int k){
    if(l<r){
        int p = partition(a,l,r);
        if(p+1==k)
            printf("%d\n",a[p]);

        quick_sort(a,l,p-1,k);
        quick_sort(a,p+1,r,k);
    }
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
        if(k>n-1)
        {
            printf("NOT PRESENT");
            exit(0);
        }
        quick_sort(a,0,n-1,k);
    }
    return 0;
}
