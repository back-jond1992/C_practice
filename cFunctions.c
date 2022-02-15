#include<stdio.h>
#include <math.h>
#include <string.h>

/* functions */

void sayHello(char name[]) {

    printf("Hello %s!\n", name);

}

/* return statements */

double cube(double num) {

    double result = num * num * num;

    return result;

}

/* if statements */

int biggestNum(int num1, int num2) {

    int result;

    if(num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;

}

/* calculator 2.0 */

int calc() {

    double num1;
    double num2;
    char operator;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &operator);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("%f\n", num1 + num2);
    } else if (operator == '-') {
        printf("%f\n", num1 - num2);
    }  else if (operator == '*') {
        printf("%f\n", num1 * num2);
    }  else if (operator == '/') {
        printf("%f\n", num1 / num2);
    } else {
        printf("Operator must be +, -, * or /.");
    }

    return 0;
}

/* switch statements */

int gradeChecker() {

    char grade;

    printf("What grade did you get?  ");
    scanf(" %c", &grade);

    switch(grade) {
        case 'A':
            printf("Awesome!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Not bad!\n");
            break;
        case 'D':
            printf("Not good enough!\n");
            break;
        case 'F':
            printf("Fail!\n");
            break;
        default:
            printf("Invalid grade!\n");
    }

}

/* structs */

struct Car {

    char make[20];
    char model[20];
    int year;
    double engine;

};

/* while loops */

int whileLoop() {

    int index = 1;

    while(index <= 10) {
        printf("%d\n", index);
        index++;
    }

    return 0;
}

int guessGame() {

    int secretNum = 23;
    int guesses = 0;
    int guess;

    while(guess != secretNum && guesses <= 5) {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess);
        guesses++;
    }
    
    if(guess == secretNum) {
        printf("Winner!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}

/* for loops */

int forLooper() {

    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}

/* 2d arrays */

int twoArrays() {

    int nums[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("%d\n", nums[1][2]);

    int i, j;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* memory address && pointers */

int memoryAddress() {

    int coffeeStrength = 7;
    int * pCoffeeStrength = &coffeeStrength;
    char coffeeName[] = "columbian";
    char * pCoffeeName = coffeeName;

    printf("coffee strength: %p.\ncoffee name: %p.\n", &coffeeStrength, &coffeeName);
    printf("coffee strength pointer: %p.\ncoffee name pointer: %p.\n", pCoffeeStrength, pCoffeeName);
    printf("de-reference coffee strength %d.\n", *pCoffeeStrength);
}

int main () {

    sayHello("Jack");
    sayHello("Serin");
    sayHello("James");

    printf("Cube func answer: %f\n", cube(3.0));

    printf("The biggest number is: %d\n", biggestNum(2, 5));
    
    // calc();

    // gradeChecker();

    struct Car car1;
    strcpy(car1.make, "vauxhall");
    strcpy(car1.model, "corsa");
    car1.year = 2009;
    car1.engine = 1.6;

    printf("%s %s %d %f \n", car1.make, car1.model, car1.year, car1.engine);

    whileLoop();

    guessGame();

    forLooper();

    twoArrays();

    memoryAddress();

    return 0;

}