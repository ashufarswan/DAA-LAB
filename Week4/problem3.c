#include<stdio.h>
void quick_sort(int *a,int l,int u)
{
    if(l>=u)
        return;
    int pivot = a[l],i=l+1,j=u;
    while(i<j){
        while((pivot>=a[i])&&i<j){
            i++;
        }
        while(pivot<a[j]){
            j--;
        }
        if(i<j){
            comp++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[l]=a[j];
    a[j]=pivot;
    quick_sort(a,l,j-1);
    quick_sort(a,j+1,u);
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
        quick_sort(a,0,n-1);
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparison: %d",comp);
        printf("\nSwaps: %d\n\n\n",swap);
    }
    return 0;
}
