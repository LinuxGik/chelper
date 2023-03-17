/* first_pointers.c */
// УКАЗАТЕЛЬ - ЭТО ПЕРЕМЕННАЯ В КОТОРОЙ ХРАНИТЬСЯ АДРЕС.
// УТВЕРЖДЕНИЕ ВИДА (А указвает на В) ОЗНАЧАЕТ (А содержит адрес В).
#include <stdio.h>
int main()
{
// ПЕРВОЕ
   int a;
   int *b;
   b = &a; // заносим адрес a в указатель b:
   *b = 27;
   printf("Теперь указатель *b это своего рода синоним для a = %d\n", a);
// ВТОРОЕ
   int x, y;
   int *p, *q, *r;
   x = 25;
   y = 36;
   p = &x;
   q = &y;
   r = p; // в р находится адрес х, теперь адрес x будет также находиться и в r
   printf("Сейчас у нас p и r указывают на x, a q указывает на y.\n");
   printf("x = %d\ny = %d\np = %p\nq = %p\nr = %p\n", x, y, p, q, r);    
   *r = *q;
   printf("x = %d\ny = %d\np = %p\nq = %p\nr = %p\n", x, y, p, q, r);    
   void *z;
   z = NULL;
   printf("%p\n", z);
   
   return 0;
}
   /* 
   int *p;
   double *q;
   char *s1, *s2, *s3;
   void *z; 
   */

