/* functions.c */
//ОПИСАНИЕ ФУНКЦИИ состоит из ЗАГЛОВКА ФУНКЦИИ и ТЕЛА ФУНКЦИИ
#include <stdio.h>
char case_up(char c); // Объявление функции.
void print_n_chars(char c, int n);

int main()
{
   char test, cargo;
   scanf("%c", &test);
   cargo = case_up(test);
   printf("%c\n", cargo);
   printf("%c\n", case_up(test));
   
   print_n_chars('x', 4);
   printf("\n");
   
   print_n_chars(cargo, 4);
   printf("\n");

   return 0;
}

// Принимает в качестве параметра код символа, если код соответствует строчной букве,
// возвращает код соответствующей заглавной буквы. В противном случае возвращает параметр без изменения.
char case_up(char c) // Заголовок. тип возвращаемого значения-имя-параметры
{  // Тело
   if(c >= 'a' && c <= 'z')
      return c - ('a' - 'A');
   else
      return c;
}

void print_n_chars(char c, int n)
{
   int k;
   for(k = 0; k < n; k++)
      printf("%c", c);
}
   
