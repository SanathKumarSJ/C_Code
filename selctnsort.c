#include <stdio.h>

int main() {
    int a[100],n,i,j,temp=0;

    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
      {
        if(a[j]>a[j+1])
        {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
        }
      }
    }
      printf("After sorting\n");
      for(j=0;j<n;j++)
      {
          printf("%d\t",a[j]);
      }
    }
