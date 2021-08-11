#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,shift,comp,flag=0;
        shift=comp=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++){
            int key=a[i];
            int j=i-1;
            while(j>=0&&key<a[j]){
                comp++;
                shift++;
                flag = 1;
                a[j+1]=a[j];
                j--;
            }
            if(j!=-1)
                comp++;
            a[j+1]=key;
            if(flag==1){
                shift++;
                flag = 0;
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",comp);
        printf("\nShift: %d\n\n",shift);
    }
    return 0;
}
