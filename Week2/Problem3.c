#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],i,j,count=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int key;
        scanf("%d",&key);
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(fabs(a[j]-a[i])==key){
                        count++;
                }
            }
        }
        if(count==0)
            printf("No Pair Found.\n");
        else
            printf("%d\n",count);
    }
    return 0;
}
