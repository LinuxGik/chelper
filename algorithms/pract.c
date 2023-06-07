#include <stdio.h>
int main()
{
   enum { N = 10000 };
   int i, p, q, id[N];
   
   for(i = 0; i < N; i++)
      id[i] = i;
   while(scanf("%d %d", &p, &q))
   {
      int t = id[p];
      if(t == id[q])
         continue;
   for(i = 0; i < N; i++)
      if(id[i] == t)
         id[i] = id[q];
   printf("\"\" %d \"\" %d\n", p, q);
   }

   return 0;
}
