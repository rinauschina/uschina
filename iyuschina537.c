#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;
   char c;
   int len;//длина строки
   int halflen, i, j, k; 
   printf ("Введите количество символов в строке: \n");
   scanf ("%d", &len);
   printf ( "Выделяем память для массива размером %d\n ", len);
   str = (char*)malloc(sizeof(int)*len); //выделили место под массив
   //Ввод значений с клавиатуры
   printf ("Введите строку с клавиатуры:\n");
   for (i = 0; i < len; i++)
   {
     printf ("Вводим %d элемент строки: ", i); 
     scanf ("%s", &str[i]); 
   }
   
   if (len%2 == 0)
   {
     halflen = len / 2;
   }
   else
    {
     halflen = (len + 1)/2;
    }
   for (j = 0; j < halflen - 1; j++)
   { 
    c = str[0];
    for (i = 0; i < len -1; i++)
      { 
        str[i] = str[i+1];
      }
     str [len - 1] = c;
   }
    
    printf ("Новая строка: \n");
     for (k = 0; k < len; k++)
     {  
      printf ("%s", &str[k]);
    }
    printf("\n");
    
    free (str); 

  return 0;     
}