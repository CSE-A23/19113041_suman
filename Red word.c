#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i;
  char arr[100];
  clrscr();
  printf("\nEnter the character to check whether the word is ReeWord or not:");
  scanf("%s",arr);
  n=strlen(arr);
  for(i=0;i<n;i++)
  {
    if(n>=6&&n<=20)
    {
      if(arr[i]=='r')
      {
	if(arr[i]=='#'||arr[i]=='$'||arr[i]=='!'||arr[i]=='@')
	{
	  if(arr[i]!=' ')
	  {
	    printf("\nReeWord");
	  }
	}
      }
    }
  }
  printf("\nReeword");
  if(n<6||n>20)
	printf("Nay!");
 getch();
}
