#include <stdio.h>
int main()
{
   int x;
   int *p;
   x = 0;
/* заносим адрес x в указатель p */
   p = &x;
/* теперь *p это своего рода синоним для x */
   *p = 27;
   printf("x = %d\n", x);
   
   int y;
   int *q, *r;
   x = 25;
   y = 36;
   q = &y;
/* переменной r присваиваем значение переменной p */
   r = p;
   *q = *p /* *

   return 0;
}
