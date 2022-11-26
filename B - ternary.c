#include <stdio.h>

//Problem 1
int findMaxAmong3Numbers() {
    int num1, num2, num3;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Thired Number: ");
    scanf("%d", &num3);
    num1 > num2 &&num1 > num3 ? printf("Largest Is: %d", num1) : num2 > num1 &&num2 > num3 ? printf("Largest Is: %d", num2): printf("Largest Is: %d", num3);
    return 0;
}

//Problem 2
int evenOdd(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    num%2 == 0 ? printf("%d is Even", num) : printf("%d is Odd", num);
    return 0;
}

//Problem 3
int isLearYear(){
    int year;
    printf("Enter Number: ");
    scanf("%d", &year);
    year%4 == 0 ? printf("%d is a Leap Year", year): printf("%d isn't a Leap Year", year);
    return 0;
}

//Problem 4
char isAlpha(){
    char letter;
    printf("Enter Letter: ");
    scanf("%c", &letter);
    letter >= 'a' && letter <= 'z' ? printf("%c is an alphabate", letter) : printf("%c isn't an alphabate", letter);
    return 0;
}

int main(){
    /*
        Uncomment each function for each test
    */
    // findMaxAmong3Numbers();
    // evenOdd();
    // isLearYear();
    // isAlpha();
    return 0;
}