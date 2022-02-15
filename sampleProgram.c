#include<stdio.h>
#include <math.h>

int main()
{
printf("\nA sample C program\n\n");
printf("Hello World!\n");
printf("   /|\n");
printf("  / |\n");
printf(" /  |\n");
printf("/___|\n");

/*variables and data types*/

char name[] = "Jack";
int age = 29;
printf("Hello my name is %s\n", name);
printf("I am %d years old\n", age);

age = 28;
printf("Hello my name is Serin \n");
printf("I am %d years old\n", age);


int year = 2022; /* integer - whole number */
double score = 2.36; /* decimal number */
char letter = 'w'; /* single character - string */
char letters[] = "word"; /* string of strings - multiple characters */

/* %s - string*/
/* %d - integer*/
/* %f - decimal*/

printf("\"Jack\"\n\"Serin\"\n\"James\"\n");
printf("%d \n", 35);
printf("I want %d %s and %f bananas \n", 2, "ice-creams", 1.5);

/*Numbers*/

printf("%d\n", 5 + 6);
printf("%d\n", 11 * 8);
printf("%f\n", 35 / 2.0);
printf("%f\n", floor(1.3));
printf("%f\n", ceil(1.3));
printf("%f\n", sqrt(36));

/*Const*/

const int HOUSENUM = 1; /*const variable*/

printf("%d\n", HOUSENUM);

/*Input*/

char fullname[50];
printf("What's your name? ");
fgets(fullname, 50, stdin);
printf("Hello %s\n", fullname);

int favNum;
printf("What's your favourite number?\n");
scanf("%d", &favNum);
printf("Your favourite number is %d\n", favNum);

char surname[30];
printf("What's your surname? ");
scanf("%s", surname);
printf("Your surname is %s\n", surname);


/*Building a calculator*/

int num1;
int num2;

printf("Enter a number: ");
scanf("%d", &num1);

printf("Enter another number: ");
scanf("%d", &num2);

printf("Answer: %d\n", num1 + num2);

/*Word game*/


char colour[10];
char pluralNoun[20];
char celebrityF[20];
char celebrityS[20];

printf("Eneter a color: ");
scanf("%s", colour);

printf("Eneter a plural noun: ");
scanf("%s", pluralNoun);

printf("Eneter a celebrity(first and last name): ");
scanf("%s%s", celebrityF, celebrityS);


printf("Roses are %s.\n", colour);
printf("%s are blue.\n", pluralNoun);
printf("I love %s %s.\n", celebrityF, celebrityS);

/* Arrays */

int oddNumbers[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
printf("%d\n", oddNumbers[1]);

int evenNumbers[10];
evenNumbers[0] = 2;
evenNumbers[1] = 4;
evenNumbers[2] = 6;
evenNumbers[3] = 8;
evenNumbers[4] = 10;
printf("%d\n", evenNumbers[3]);

return 0;
}


