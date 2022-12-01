#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int c=0,i; //c=count
    printf("enter a string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='u'||str[i]=='o')
      {
        c++;
      }
    }
    printf("The no. vowels is %d\n",c);
    }
