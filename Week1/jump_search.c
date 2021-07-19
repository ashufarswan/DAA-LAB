#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,k,key,count=0,flag=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&key);
        i=0;
        while(1){
            count++;
            if(a[i]==key)
            {
                printf("Present %d\n\n",count);
                flag =1;
                break;
            }
            if(i==n-1)
                break;
            k=i*2;
            k=k>n-1?n-1:k;
            if(key<a[k]){
                for(int j=i+1;j<k;j++){
                    count++;
                    if(a[j]==key){
                        printf("PRESENT %d\n\n",count);
                        flag=1;
                        break;
                    }
                }
                break;
            }
            if(i==0)
                i=2;
            else
                i=i*2;
            i=i>n-1?n-1:i;
        }
        if(flag==0)
            printf("NOT PRESENT %d\n\n",count);
    }
    return 0;
}
