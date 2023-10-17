#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int i,j,len,depth,count,code[100][1000];
 char str[1000];
 printf("Enter the plain text:");
 gets(str);
 len=strlen(str);
 printf("Enter depth:");
 scanf("%d",&depth);
 for(i=0;i<depth;i++)
 {
  for(j=0;j<len;j++)
  {
   code[i][j]=0;
  }
 }
 count=0;
 j=0;
 while(j<len)
 {
  if(count%2==0)
  {
   for(i=0;i<depth;i++)
   {
    code[i][j]=(int)str[j]; 
    j++;
   } 
  }
  else
  {
   for(i=depth-2;i>0;i--)
   {
    code[i][j]=(int)str[j];
    j++;
   }   
  } 
  count++;
 }
 for(i=0;i<depth;i++)
 {
  for(j=0;j<len;j++)
  {
   if(code[i][j]!=0)
    printf("%c",code[i][j]);
  }
 }
 printf("\n");
}
