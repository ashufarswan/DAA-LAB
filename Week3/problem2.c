#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,shift=0,comp=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++){
            int pos=i;
            for(j=i+1;j<n;j++){
                comp++;
                if(a[j]<a[pos]){
                    pos=j;
                }
            }
            shift++;
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",comp);
        printf("\nShift: %d\n\n",shift);
    }
    return 0;
}
