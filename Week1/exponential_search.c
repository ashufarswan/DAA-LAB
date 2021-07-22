#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,key,count=1,flag=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&key);
        if(a[0]==key){
            printf("Present %d\n",count);
            continue;
        }
        i=1;
        while(i<n&&a[i]<=key){
            count++;
            i=i*2;
        }
        int k = i<n-1?i:n-1;
        for(int j=i/2;j<=k;j++){
            count++;
            if(a[j]==key){
                printf("PRESENT %d\n",count);
                flag = 1;
                break;
            }
        }
        if(flag==0)
            printf("NOT PRESENT %d\n",count);
    }
    return 0;
}
