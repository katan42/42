#include <stdio.h>
#include <unistd.h>

void ft_add (int *ptr, int i)
{
      *ptr = *ptr + i;
}

int main(void)
{
   int *ptr;
   int i;
   int a; //a is the int value that ptr points to
   
   i = 2;
   a = 5;
   ptr = &a;
   printf("i= %d\n", i);
   printf("value that ptr points to: %d\n", *ptr);
   ft_add(ptr,i);
   printf("value that ptr points to after ft_add: %d", *ptr);
}
