#include <stdio.h>
/**
 *main - main function
 *
 * variable = Allocated memory space to store a value
 *            We refers to variable's name to access the stored value.
 *            That variable now behaves as if it was the value it contains.
 *            We have to declare what type of data we are storing.
 *Return: Always 0 (asuccess)
 */
 int main()
 {
   int age = 21;
   char grade = 'C';
   float gpa = 3.08;
   char name[] = "Ken";

   printf("My name is %s\n", name);
   printf("and I am %d years old\n", age );
   printf("I have  a mean of %c\n", grade);
   return (0);
   }
