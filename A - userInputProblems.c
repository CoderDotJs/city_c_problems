#include <stdio.h>

//Practice 1
float addition() {
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Addition is: %f", num1 + num2);
    return 0;
}

//Practice 2
float reactPerimeterAndArea() {
    float height, width;
    printf("Enter Height: ");
    scanf("%f", &height);
    printf("Enter Width number: ");
    scanf("%f", &width);
    printf("Perimeter is: %f\n", 3 * (width + height));
    printf("Addition is: %f", width * height);
    return 0;
}

//Practice 3
float cirleFunc() {
    float radius;
    float PI = 3.142857;
    printf("Enter Cirlec Radius: ");
    scanf("%f", &radius);
    printf("Diameter is: %f\n", 2 * radius);
    printf("Circumicrence is: %f\n", 2 * PI * radius);
    printf("Addition is: %f", PI * radius * radius);
    return 0;
}

//Problem 4
float triangleArea() {
    float base, height;
    printf("Enter Base: ");
    scanf("%f", &base);
    printf("Enter Height: ");
    scanf("%f", &height);
    printf("Area is: %f\n", (base* height)/2);
    return 0;
}

//Problem 5
float lengthConvert() {
    float cen;
    printf("Enter Centimeter: ");
    scanf("%f", &cen);
    float meter = cen /100;
    printf("%f Centemeter is %f meter\n", cen, meter);
    printf("%f Meter is %f Kilometer\n", meter, meter/ 1000);
    return 0;
}

// Problem 6
float celciusToFahrenheit(){
    float celcius;
    printf("Enter Celcius: ");
    scanf("%f", &celcius);
    float fahrenheit = (celcius * 9/5) + 32;
    printf("%f Celcius is %f Farenheit\n", celcius, fahrenheit);
    return 0;
}

//Problem 7
float fahrenheitToCelcius(){
    float fahrenheit;
    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celcius = (fahrenheit - 32.0) * 5.0/9.0;
    printf("%f Fahrenheit is %f Celcius\n", fahrenheit, celcius);
    return 0;
}

// Problem 8
int daysToYearWeekDays(){
    int days, years, weeks;
    printf("Enter days: ");
    scanf("%d", &days);
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d", days);
    return 0;
}

// Problem 9
int toPower(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Power Is: %d", num * num);
    return 0;
}

//Problem 10
float toSqrt(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Power Is: %f", sqrt(num));
    return 0;
}

//Problem 11
int findThirdAngle(){
    int angle1, angle2;
    printf("Enter first angle: ");
    scanf("%d", &angle1);
    printf("Enter second angle: ");
    scanf("%d", &angle2);
    printf("Third andle is: %d", 180 - (angle1 + angle2));
    return 0;
}

//Problem 12
int equilateralArea(){
    int angle;
    printf("Enter the Angle: ");
    scanf("%d", &angle);
    float power = (sqrt(3) / 4) * angle * angle;
    printf("Power Is: %f", power);
    return 0;
}

//Problem 13
float findTotalAvePercent(){
    float math, english, bangla, science, computer;
    printf("Enter Math Number: ");
    scanf("%f", &math);
    printf("Enter English Number: ");
    scanf("%f", &english);
    printf("Enter Bangla Number: ");
    scanf("%f", &bangla);
    printf("Enter Science Number: ");
    scanf("%f", &science);
    printf("Enter Computer Number: ");
    scanf("%f", &computer);
    float total = math + english + bangla + science + computer;
    printf("Total Number Is: %f\n", total);
    float ave = total / 5;
    printf("Average Is: %f\n", ave);
    float percent = (500/total) * 100;
    printf("Percentage Is: %f\n", percent);
    return 0;
}

// Problem 14
float findPTR (){
    float P, T, R;
    printf("Enter Principal: ");
    scanf("%f", &P);
    printf("Enter Time: ");
    scanf("%f", &T);
    printf("Enter Rate: ");
    scanf("%f", &R);
    float simple = (P * T * R) / 100;
    printf("Simple Interest is: %f\n", simple);
    float com = P * ((1+ (R/100)) * T - 1);
    printf("Compound Interest is: %f", com);
    return 0;
}

int main(){
    /*
        Uncomment each function for each test
    */
    // addition();
    // reactPerimeterAndArea();
    // cirleFunc();
    // triangleArea();
    // lengthConvert();
    // celciusToFahrenheit();
    // fahrenheitToCelcius();
    // daysToYearWeekDays();
    // toPower();
    // toSqrt();
    // findThirdAngle();
    // equilateralArea();
    // findTotalAvePercent();
    // findPTR();
    return 0;
}