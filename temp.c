/* C program to convert temperature from degree celsius to fahrenheit and reverse  */

#include <stdio.h>

 int main()

 {

 int choice;

 float celsius, fahrenheit;  

 float C,F;    

printf(" Choice (1) :from Fahrenheit into Celsius \n");

printf(" Choice (2) :from Celsius into Fahrenheit \n");

printf (" Enter your choice \n");
scanf ("%d",&choice);

switch(choice)
   {
     case(1):
   printf("Enter the  temperature\n"); 

   scanf("%f", &F);  

   celsius =((F-32)*5/9);

printf(" %.2fcelsius\n",celsius);
break;

 case(2):
    printf("Enter the temperature\n"); 

    scanf("%f", &C); 
 
    fahrenheit = ((C * 9 / 5) + 32);
 
printf(" %.2ffahrenheit\n",fahrenheit);
    break;

default:

 printf( " invalid temperature");

}

 return 0;

 }