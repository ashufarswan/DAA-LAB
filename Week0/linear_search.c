#include<stdio.h>
int main()
{
    int t;
    printf("INPUT TEST CASE: ");
    scanf("%d",&t);
    while(t--){
        int n,key,i;
        printf("\n\nINPUT ARRAY SIZE: ");
        scanf("%d",&n);
        unsigned int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("\n\nINPUT  KEY ELEMENT: ");
        scanf("%d",&key);
        for(i=0;i<n;i++){
            if(a[i]==key){
                printf("\n\nKEY FOUND!!!");
                printf("\nTOTAL COMPARISION: %d",i+1);
                break;
            }
        }
        if(i==n){
            printf("\n\nKEY NOT FOUND!!!");
        }
    }
    return 0;
}
