#include <stdio.h>

//Problem 1
int isPositiveNegativeZero(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d Is Positive", num);
    }else if(num < 0){
        printf("%d Is Negative", num);
    }else{
       printf("%d Is Zero", num);
    }
    return 0;
}

//Problem 2
int dividedBy1And11(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    if(num%5 == 0 && num%11 == 0 ){
        printf("%d is divisable by 5 and 11", num);
    }else{
        printf("%d is not divisable by 5 and 11", num);
    }
    return 0;
}

//Problem 3
int countMoney(){
    int amount;
    int note1000 = 0;
    int note500 = 0;
    int note100 = 0;
    int note50 = 0;
    int note20 = 0;
    int note10 = 0;
    int note5 = 0;
    int note2 = 0;
    int note1 = 0;
    printf("Enter amount: ");
    scanf("%d", &amount);

    if(amount >= 1000){
        note1000 = amount / 1000;
        amount = amount - (note1000 * 1000);
    }
    if(amount >= 500)
    {
        note500 = amount/500;
        amount = amount -(note500 * 500);
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount = amount -(note100 * 100);
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount = amount -(note50 * 50);
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount = amount -(note20 * 20);
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount = amount -(note10 * 10);
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount = amount -(note5 * 5);
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount = amount -(note2 * 2);
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);
    return 0;
}

//Problem 4
char isAlpha(){
    char letter;
    printf("Enter Letter: ");
    scanf("%c", &letter);
    if(letter >= "a" && letter <= 'z'){
        printf("%c is an alphabate", letter);
    }else{
        printf("%c isn't an alphabate", letter);
    }
    return 0;
}

//Problem 5
char isVowel(){
    char letter;
    printf("Enter Letter: ");
    scanf("%c", &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        printf("%c is Vowel", letter);
    }
    else{
        printf("%c is consonant", letter);
    }
    return 0;
}

//Problem 6
int isAplhaNumberSpcialChar(){
    char letter;
    printf("Enter Letter: ");
    scanf("%c", &letter);
    if(letter >= "a" && letter <= 'z'){
        printf("'%c' is alphabet.", letter);
    }else if(letter <= 0 || letter >= 0){
        printf("'%c' is digit.", letter);
    }else{
        printf("'%c' is special character.", letter);
    }
    return 0;
}

//Problem 7
char isUpperLower(){
    char letter;
    printf("Enter Letter: ");
    scanf("%c", &letter);
    if(letter >= 'A'|| letter <= 'Z'){
        printf("%c is Uppercase", letter);
    }else{
        printf("%c is Lowercase", letter);
    }
    return 0;
}

//Problem 8
char weekDay(){
    int week;
    printf("Enter Week Number: ");
    scanf("%d", &week);
    if(week == 1){
        printf("It's Saturday.");
    }
    else if(week == 2){
        printf("It's Sunday.");
    }
    else if(week == 3){
        printf("It's Monday.");
    }
    else if(week == 4){
        printf("It's Tuesday.");
    }
    else if(week == 5){
        printf("It's Wednesday.");
    }
    else if(week == 6){
        printf("It's Thursday.");
    }
    else if(week == 7){
        printf("It's Friday.");
    }else{
        printf("Please input a valid week number");
    }
    return 0;
}

//Problem 9
int getNumOfDays(){
    int month;
    printf("Enter Month Number: ");
    scanf("%d", &month);
    if(month == 1){
        printf("It's January, it has 31 days");
    }
    else if(month == 2){
        printf("It's February, it has 28 days");
    }
    else if(month == 3){
        printf("It's March, it has 31 days");
    }
    else if(month == 4){
        printf("It's April, it has 30 days");
    }
    else if(month == 5){
        printf("It's May, it has 31 days");
    }
    else if(month == 6){
        printf("It's June, it has 30 days");
    }
    else if(month == 7){
        printf("It's July, it has 31 days");
    }
    else if(month == 8){
        printf("It's Augest, it has 31 days");
    }
    else if(month == 9){
        printf("It's September, it has 30 days");
    }
    else if(month == 10){
        printf("It's October, it has 31 days");
    }
    else if(month == 11){
        printf("It's November, it has 30 days");
    }
    else if(month == 12){
        printf("It's December, it has 31 days");
    }else{
        printf("Please Input a valid month number");
    }
    return 0;
}

//Problem 10
int isTriangle(){
    int angle1, angle2, angle3, total;
    printf("Enter first angle: ");
    scanf("%d", &angle1);
    printf("Enter second angle: ");
    scanf("%d", &angle2);
    printf("Enter third angle: ");
    scanf("%d", &angle3);

    total = angle1 + angle2 + angle3;

    if(total == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0){
        printf("Its a triangle");
    }
    else{
        printf("Its not a triangle");
    }
    return 0;
}

//Problem 11
int isSidesTriangle(){
    int side1, side2, side3;
    printf("Enter first side: ");
    scanf("%d", &side1);
    printf("Enter second side: ");
    scanf("%d", &side2);
    printf("Enter third side: ");
    scanf("%d", &side3);

    if(side1 + side2 > side3 && side2+side3 > side1 && side3 + side1 > side2){
        printf("Its a triangle");
    }else{
        printf("Its not a triangle");
    }
    return 0;
}

//Problem 12
int whatTriangle(){
    int side1, side2, side3;
    printf("Enter first side: ");
    scanf("%d", &side1);
    printf("Enter second side: ");
    scanf("%d", &side2);
    printf("Enter third side: ");
    scanf("%d", &side3);

    if(side1==side2 && side1==side3) {
        printf("Its an Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3) {
        printf("Its an Isosceles triangle.");
    }else {
        printf("Scalene triangle.");
    }
    return 0;
}

//Problem 13
int rootOfQuadratic(){
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a: ");
    scanf("%f", &a);
    printf("Enter coefficients b: ");
    scanf("%f", &b);
    printf("Enter coefficients c: ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %f and root2 = %f", root1, root2);
    }else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %f;", root1);
    }else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %f+%fi and root2 = %f-%fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}

//Problem 14
int costLoss(){
    int cost,sell;
    printf("Enter Cost amount: ");
    scanf("%d", &cost);
    printf("Enter Sell amount: ");
    scanf("%d", &sell);
    if(cost > sell){
        printf("Loss: %d", cost - sell);
    }else{
        printf("Profit: %d", sell - cost);
    }
    return 0;
}

//Problem 15
int grading(){
    int physics, chemistry, biology, math, computer, parcent;
    printf("Enter Physics Mark: ");
    scanf("%d", &physics);
    printf("Enter Chemistry Mark: ");
    scanf("%d", &chemistry);
    printf("Enter Biology Mark: ");
    scanf("%d", &biology);
    printf("Enter Math Mark: ");
    scanf("%d", &math);
    printf("Enter Computer Mark: ");
    scanf("%d", &computer);
    parcent = ((physics + chemistry + biology + math + computer) / 500) * 100;
    if(parcent >= 90){
        printf("Grade: A");
    }
    else if(parcent >= 80){
        printf("Grade: B");
    }
    else if(parcent >= 70){
        printf("Grade: C");
    }
    else if(parcent >= 60){
        printf("Grade: D");
    }
    else if(parcent >= 40){
        printf("Grade: E");
    }else{
        printf("Grade: F");
    }
    return 0;
}

//Problem 16
float grossSalary(){
    float basic, gross, da, hra;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if(basic >= 10000 && basic < 20000){
        da  = basic * 0.8;
        hra = basic *0.2;
    }else if(basic >= 20000 && basic < 30000){
        da  = basic * 0.9;
        hra = basic * 0.25;
    }else{
        da  = basic * 0.95;
        hra = basic * 0.3;
    }
    gross = basic + hra + da;
    printf("Gross Salary = %f", gross);
    return 0;
}

//Problem 17
float electricBill(){
    float unit;
    float total, charge;
    printf("Enter total unit: ");
    scanf("%f", &unit);

    if(unit <= 50 ){
        total = unit * 0.50;
    }
    if(unit <= 150 && unit > 50){
        total = (50 * 0.50) + ((unit-50) * 0.75);
    }
    if(unit <= 250 && unit > 150){
        total = ((50 * 0.50)+ (100 * 0.75)) + ((unit-150) * 1.20);
    }
    if(unit > 250){
        total = ((50 * 0.50)+ (100 * 0.75) + (100 * 1.20)) + ((unit-250) * 1.50);
    }
    charge = total * 0.20;
    printf("Electricity Bill: %f", total + charge);
    return 0;
}


int main(){
    /*
        Uncomment each function for each test
    */
    // isPositiveNegativeZero();
    // dividedBy1And11();
    // countMoney();
    // isAlpha();
    // isVowel();
    // isAplhaNumberSpcialChar();
    // isUpperLower();
    // weekDay();
    // getNumOfDays();
    // isTriangle();
    // isSidesTriangle();
    // whatTriangle();
    // rootOfQuadratic();
    // costLoss();
    // grading();
    // grossSalary();
    //electricBill();
    return 0;
}