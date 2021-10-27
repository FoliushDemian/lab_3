#include <stdio.h>
#include <string.h>
void main(void)
{
printf("you can only enter numbers from 1 to 10 and a string of up to 9 elements\n");
char S[10];
printf("enter string\n");
gets(S);
if(strlen(S)>=10)
printf("wrong data");
else
 {
char C[strlen(S)];
int k;
printf("Enter key:");
scanf("%d",&k);
if(k>10 || k<=0)
printf("wrong data");
else
  {
int p=0,len_S=strlen(S);//the initial cursor position and the initial string length
for (int i=0; i<=len_S;i++)
   {
   p=p+k-1;// cursor position after each iteration
   while (p>=strlen(S))
    {
    p=p-strlen(S);//returns the cursor to the beginning so that it does not go beyond the line
    if (strlen(S)==0)
    break;
    }
    C[i]=S[p];
    for (int j=p; j<strlen(S);j++)
    S[j]=S[j+1];
   }
printf("C= %s",C);
  }
 }
}
