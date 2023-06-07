#include <stdio.h>
int main()
{
   int i;
   
   int m[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 21, 23 }; 
   int e[] = { 2, 3, 5, 7, 11, 13, 17, 19, 21, 23 }; 

   printf("Узнаем размер массива: %ld\n", sizeof(e)/sizeof(e[0]));

   for(i = 0; i < sizeof(m)/sizeof(*m); i++)
      printf("[%d] = %d\n", i, m[i]);

   return 0;
}
  
