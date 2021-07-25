#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],i,j,k,flag=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                for(k=j+1;k<n;k++){
                        if(a[i]+a[j]==a[k]){
                            printf("%d,%d,%d\n",i+1,j+1,k+1);
                            flag=1;
                            goto label;
                        }
                }
            }
        }
        label:
        if(flag==0){
            printf("No sequence found.\n");
        }
    }
    return 0;
}
