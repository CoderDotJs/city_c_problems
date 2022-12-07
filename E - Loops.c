#include <stdio.h>

//Problem 1
int reverseNatural(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num >= 1){
        printf("%d\n", num);
        num--;
    }
    return 0;
}
//Problem 2
char alphabets(){
    char ch = 'a';
    while(ch <= 'z'){
        printf("%c\n", ch);
        ch++;
    }
}
//Problem 3
int sumOfEven(){
    int num, total = 0, i;
    printf("Enter number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if(i%2==0){
            total = total + i;
        }
    }
    printf("Total of even numbers is: %d", total);
    return 0;
}
//Problem 4
int sumOfOdd(){
    int num, total = 0, i;
    printf("Enter number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if(i%2!=0){
            total = total + i;
        }
    }
    printf("Total of even numbers is: %d", total);
    return 0;
}

//Problem 5
int primeNumber(){
    int num, isPrime = 1, i, j;
    printf("Enter number: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++){
        isPrime = 1;
        for (j = 2; j <= i / 2; j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }
}

//Problem 6
int tableOfNumber(){
    int num, i = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i; i <= 10; i++){
        printf("%d * %d = %d\n", num, i, num * i);
    }
}

//Problem 7
int sumOfNatural(){
    int num, total = 0, i;
    printf("Enter number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        total = total + i;
    }
    printf("%d", total);
}

//Problem 8
int firstAnLastDigit(){
    int num, first, last;
    printf("Enter number: ");
    scanf("%d", &num);
    last = num % 10;
    first = num;
    while(first >= 10){
        first = first / 10;
    }
    printf("%d,%d", first, last);
}

//Problem 9
int countDigits(){
    int num, count =0, i;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num != 0){
        num = num / 10;
        ++count;
    }
    printf("%d", count);
}

//Problem 10
int sumOfDigits(){
    int num, total = 0, rem;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num>0){
        rem=num%10;
        total=total+rem;
        num=num/10;
    }
    printf("Sum is: %d",total);
    return 0;
}

//Problem 11
int productOfDigits(){
    int num, rem, product;
    printf("Enter number: ");
    scanf("%d", &num);
    for(product = 1; num > 0; num = num / 10){
  		rem = num % 10;
		product = product * rem;
	}
	printf("Product: %d", product);
    return 0;
}

//Problem 12
int swapFirstLast(){

}

//Problem 13
int firstAnLastDigitSum(){
    int num, first, last;
    printf("Enter number: ");
    scanf("%d", &num);
    last = num % 10;
    first = num;
    while(first >= 10){
        first = first / 10;
    }
    printf("%d", first + last);
}

//Problem 14
int reversNuber(){
    int num, reverse = 0, rem;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num = num / 10;
    }
    printf("Reversed number: %d", reverse);
    return 0;
}

//Problem 15
int palindrome(){
    int num, temp_num, reverse = 0, rem;
    printf("Enter number: ");
    scanf("%d", &num);
    temp_num = num;
    while (temp_num != 0) {
      rem = temp_num % 10;
      reverse = reverse * 10 + rem;
      temp_num = temp_num / 10;
    }
    if(num == reverse){
      printf("%d is palindrome", num);
    }else{
      printf("%d is not a palindrome", num);
    }
    return 0;
}

int main(){
    // reverseNatural();
    // alphabets();
    // sumOfEven();
    // sumOfOdd();
    // primeNumber();
    // tableOfNumber();
    // sumOfNatural();
    // firstAnLastDigit();
    // countDigits();
    // sumOfDigits();
    // productOfDigits();
    // swapFirstLast();
    // firstAnLastDigitSum();
    // reversNuber();
    // palindrome();
    return 0;
}