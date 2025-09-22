/*C LANGUAGE 

1.Reverse a Number
2. Armstrong Number
3. Strong number
4. Palindrome
5. Prime or not
6. Sum of Digits Until Single Digit
7. Number in Words
8. pattern printing
9. HCF and LCM
10. Fibonacci Series of N numbers
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void armstrongnumber(int number);
int numberofdigits(int number);
void strongnumber(int number);
int factoriall(int number);
void checkpalindrom(int number);
int nreversedigits(int a);
void isprime(int number);
int evenorodd(int number);
int sumofdigits(int number);
void sumofdigitsuntilsingle(int number);
void numberinwords(int number);
void patterngenerator(int rows);
void generatespace(int number);
void nfibonacciseries(int number);
void highestcommonfactor(int number1, int number2);
void lowestcommonfactor(int number1, int number2);

int main(){
    int n1,n2,n,number;
    printf("1.Reverse a Number \n");
    printf("2. Armstrong Number \n");
    printf("3. Strong number\n");
    printf("4. Palindrome\n");
    printf("5. Prime or not\n");
    printf("6. Sum of Digits Until Single Digit\n");
    printf("7. Number in Words\n");
    printf("8. pattern printing\n");
    printf("9. HCF and LCM\n");
    printf("10. Fibonacci Series of N numbers\n");
    printf("enter a fucking number ");
    scanf("%d",&number);
    switch(number){
        case 1:
        printf("enter number to be reversed ");
        scanf("%d",&n);
        printf("%d",nreversedigits(n));
        break;
        case 2:
        printf("enter number to check if it is a armstrong number ");
        scanf("%d",&n);
        armstrongnumber(n);
        break;
        case 3:
        printf("enter number to check if it is a strong number ");
        scanf("%d",&n);
        strongnumber(n);
        break;
        case 4:
        printf("enter number to check if it is a palindrome number ");
        scanf("%d",&n);
        checkpalindrom(n);
        break;
        case 5:
        printf("enter number to check if it is a prime number ");
        scanf("%d",&n);
        isprime(n);
        break;
        case 6:
        printf("enter number to sum until single ");
        scanf("%d",&n);
        sumofdigitsuntilsingle(n);
        break;
        case 7:
        printf("enter number to print number in words ");
        scanf("%d",&n);
        numberinwords(n);
        break;
        case 8:
        printf("enter number to print number pattern ");
        scanf("%d",&n);
        patterngenerator(n);
        break;
        case 9:
        printf("enter 2 number for hcf and lcm ");
        scanf("%d",&n1);
        scanf("%d",&n2);
        highestcommonfactor(n1,n2);
        printf("\n");
        lowestcommonfactor(n1,n2);
        break;
        case 10:
        printf("enter number to print fibonacci series ");
        scanf("%d",&n);
        nfibonacciseries(n);
        break;
        default:
        printf("number is invalid ");
        break;
        
    }
    return 0;
}

void armstrongnumber(int number){
    int total = 0;
    int temp2 = number;
    int a = numberofdigits(number);
    for( int i = 0; i <= a; i ++){
        int number1 = temp2 % 10;
        total = total + pow(number1,3);
        temp2  = temp2 / 10;
    }
    if(number == total)
        printf("it is an armstrongnumber");
    else 
        printf("it is not an armstrongnumber");
    
}

int numberofdigits(int number){
    int i = 0;
    
    while(number / 10 > 0){
        i++;
        number = number / 10;
    }
    
    return i+1;
}

void strongnumber(int number){
    int total = 0;
    int temp = number; 
    int a = numberofdigits(number);
    for( int i = 0; i <= a; i ++){
        int number1 = temp % 10;
        total = total + factoriall(number1);
        temp  = temp / 10;
    }
    if(number == total)
        printf("it is an strong number");
    else 
        printf("it is not an strong number");
}

int factoriall(int number){
    int fact = 1;
    for(int i = 1 ; i <= number; i++){
        fact = fact * i;
    }
    return fact;
}

void checkpalindrom(int number){
    int final = 0;
    if(numberofdigits(number) != 3)
        printf("palindrome not possible");
    else{
        final = nreversedigits(number);
        if(final == number)
            printf("it is a palindrome");
        else
            printf("it is not a palindrome");
    }
}



int nreversedigits(int a){
    int n = numberofdigits(a);
    int temp = a, total = 0, b;
    b = a;
    for(int i = n; i > 0 ; i--){
        if(i == 1){
            total = total + temp;
        }
        else{
            b = (b % 10);
            temp = temp / 10;
            total = (b*pow(10,i-1)) + total ;
            b = temp;
        }
    }
    return total;
}

int evenorodd(int number){
    if(number % 2 == 0)
        return 0;
    else 
        return 1;
}



void isprime(int n) {
    if (n <= 1) { printf("it is not a prime number\n"); return; }
    if (n % 2 == 0) { 
        if (n == 2) printf("it is a prime number\n");
        else         printf("it is not a prime number\n");
        return;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) { 
            printf("it is not a prime number\n");
            return;
        }
    }
    printf("it is a prime number\n");
}

int sumofdigits(int number){
    int temp;
    int total = 0;
    temp = number;
    for(int i = 0; i < numberofdigits(number); i++){
        if(temp < 10){
            total = total + temp;
        }
        else{
            total += (temp % 10);
            temp = temp / 10;
        }
    }
    return total;
}

void sumofdigitsuntilsingle(int number){
    int temp = number;
    int total = 0;
    for(int i = 0; i < numberofdigits(number); i++){    
        if( number > 10){
            total = sumofdigits(temp);
            temp = total;
        }
        else
            break;
    }
    printf("the grand sum of the digits is %d", total);
}

void numberinwords(int number){
    int a = 0;
    int temp = nreversedigits(number);
    for(int i = 0; i < numberofdigits(number); i++){
        if(number > 0){
            a = temp % 10;
            switch(a){
                case 1:printf("one ");break;
                case 2:printf("two "); break;
                case 3:printf("three ");break;
                case 4:printf("four ");break;
                case 5:printf("five ");break;
                case 6:printf("six ");break;
                case 7:printf("seven ");break;
                case 8:printf("eight ");break;
                case 9:printf("nine ");break;
            }
            temp = temp / 10;
        }
    }
}


void generatespace(int number){
    for (int i = 0; i < number; i++) 
        printf(" ");
}

void patterngenerator(int rows){
    int j = 0;
    int p = 0;
    for(int i = 1; i <= rows; i++){
        if(i==1){
            generatespace(rows - 1);
            printf("%d \n", i);
            p++;
            continue;
        }
        else{
            generatespace(rows - i);
            for( j = 1; j<=i ; j++)   
                printf("%d", j);
            for( int k = p; k>0; k--)
                printf("%d",k);
            printf("\n");
        }
        p++;
    }
}

void nfibonacciseries(int number){
    int a = 0;
    int b = 1;
    int temp;
    printf("%d ",a);
    printf("%d ",b);
    for(int i = 3; i <= number; i++){
        temp = a + b;
        printf("%d ",temp);
        a = b;
        b = temp;
    }
}

void highestcommonfactor(int number1,int number2){
    int great = 0,less = 0,temp = 0;
    if(number1 > number2){
        great = number1;
        less = number2;
    }
    else{
        great = number2;
        less = number1; 
    }
    while(great % less != 0){
        temp = great % less;
        great = less;
        less = temp;
        
    }
    printf("the highest common factor is %d",temp);
}

void lowestcommonfactor(int number1, int number2){
    int great = 0,less = 0,temp = 0, lcm = 0;
    if(number1 > number2){
        great = number1;
        less = number2;
    }
    else{
        great = number2;
        less = number1; 
    }
    for(int i = 1; i <= great ; i++){
        temp = great * i;
        if(temp % less == 0) {
            lcm = temp;
            break;
        }
    }
    printf("the LCM is %d ", lcm);
}


