#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],i,count=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int key;
        scanf("%d",&key);
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(a[mid]==key){
                i=mid;
                while(a[i++]==key)
                    count++;
                i=mid-1;
                while(a[i--]==key)
                    count++;

                printf("%d - %d\n",key,count);
                break;
            }
            else if(key<a[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        if(count==0)
            printf("Key not present.\n");
    }
    return 0;
}
