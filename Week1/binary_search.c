#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,key,count=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&key);
        int mid,beg,end;
        beg = 0;
        end = n-1;
        while(beg<=end){
            mid = (beg+end)/2;
            count++;
            if(a[mid]>key){
                end = mid-1;
            }
            else if(a[mid]<key){
                beg = mid+1;
            }
            else{
                printf("PRESENT %d\n\n\n",count);
                break;
            }
        }
        if(beg>end)
            printf("NOT PRESENT %d\n\n\n",count);
    }
    return 0;
}
