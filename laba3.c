#include <stdio.h>
#include <string.h>
int main(void)
{
printf("you can only enter numbers from 1 to 10 and a string of up to 9 elements\n");
char String[10];
printf("enter string\n");
gets(String);
if(strlen(String)>=10)
printf("wrong data");
else
 {
char Cipher[strlen(String)];
int key;
printf("enter key:");
scanf("%d",&key);
if(key>10 || key<=0)
printf("wrong data");
else
  {
int position=0,len_String=strlen(String);//the initial cursor position and the initial string length
for (int i=0; i<=len_String;i++)
   {
   position=position+key-1;// cursor position after each iteration
   while (position>=strlen(String))
    {
    position=position-strlen(String);//returns the cursor to the beginning so that it does not go beyond the line
    if (strlen(String)==0)
    break;
    }
    Cipher[i]=String[position];
    for (int j=position; j<strlen(String);j++)
    String[j]=String[j+1];
   }
printf("C= %s",Cipher);
  }
 }
}
