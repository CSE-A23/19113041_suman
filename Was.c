#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,m,i;
  char arr[100];
  printf("Enter the character:");
  scanf("%s",arr);
  n=strlen(arr);
  if(n%2!=0)
  {
    m=n-1;
    arr[m]='O';
    arr[m-1]='O';
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]=='a')
    arr[i]='u';
    if(arr[i]=='i')
    arr[i]='e';
  }
   printf("After changing %s",arr);
   getch();
}
