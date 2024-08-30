#include<stdio.h>
#include<conio.h>

void print(int []); 
void main()
{
   int a[6];
   
    

   for(int i=0 ; i<4 ; i++)
{
  printf("Enter A Number :");
  scanf("%d",&a[i]);
}

  print(a);
getch();
}

    
void print(int b)
{
  int i;
  for(i=0 ; i<4 ; i++)
{
  printf("\n %d",b[i]);
}

}