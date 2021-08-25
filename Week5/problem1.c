#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,flag=0;
        scanf("%d",&n);
        char a[n];
        for(i=0;i<n;i++){
            scanf(" %c",&a[i]);
        }
        int count[26]={0};
        for(i=0;i<n;i++){
            count[a[i]-97]++;
        }
        int max_indx=0;
        for(i=0;i<26;i++){
            if(count[i]>1){
                if(count[i]>count[max_indx])
                    max_indx = i;
                flag = 1;
            }
        }
        if(flag==0)
            printf("NO DUPLICATE ELEMENT FOUND.\n");
        else
            printf("%c-%d\n",max_indx+97,count[max_indx]);
    }
    return 0;
}
