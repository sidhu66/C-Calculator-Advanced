#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void WelcomeMessage();
void Options();
void BinaryOperations();
void UnaryOperations();
void ExitMessage();
void AdvancedOperations();
void variableMemory();
void binaryOperationAdvanced();
void unaryOperationsAdvanced();
float a = 0, b = 0, c = 0, d = 0, e = 0; // Variable declaration
int main(){
  char opt;
  WelcomeMessage();
  do{
    Options();
    scanf(" %c",&opt);
    switch(opt){
      case 'B':
        BinaryOperations();
        break;
      case 'U':
        UnaryOperations();
        break;
      case 'A':
        AdvancedOperations();
        break;
      case 'V':
        variableMemory();
        break;
      case 'E':
        ExitMessage();
        break;
      default:
        printf("Invalid option\n");
        break;
      }
    if(opt == 'E'){ break;}
  }while(opt != 'E');
}
void WelcomeMessage(){
  printf(" Welcome to my Command-Line Calculator (CLC) \n");
  printf(" Developer: Karanveer Singh Sidhu \n");
  printf(" Version: Assignment 1 \n");
  printf(" Date: 2023-10-08 \n");
  printf(" ----------------------------------------------- \n");
} // Welcome Message
void Options(){
  printf(" Select one of the following options : \n");
  printf(" B) - Binary Mathematical Operations, such as addition and subtraction. \n");
  printf(
      " U) - Unary Mathematical Operations, such as square root and log. \n");
  printf(
      " A) - Advanced Mathematical Operations, using variables and arrays. \n");
  printf(" V) – Define variables and assign them values. \n");
  printf(" E) - Exit \n ");
} // Select from these options
void BinaryOperations(){
  float num1, num2, resultB;
  char ap;

  printf("Please enter the first number: ");
  scanf("%f", &num1);
  printf("Please enter the operation ( + , - , * , /, %%, P, X, I ):");
  scanf(" %c", &ap);
  printf("Please enter the second number: ");
  scanf("%f", &num2);
  switch (ap) {
  case '+':
    resultB = num1 + num2;
    printf("check Result %.2f + %.2f = %f \n", num1, num2, resultB);
    break;
  case '-':
    resultB = num1 - num2;
    printf("check Result %.2f - %.2f = %f \n", num1, num2, resultB);
    break;
  case '*':
    resultB = num1 * num2;
    printf("check Result %.2f * %.2f = %f \n", num1, num2, resultB);
    break;
  case '/':
    resultB = num1 / num2;
    printf("check Result %.2f / %.2f = %f \n", num1, num2, resultB);
    break;
  case '%':
    resultB = fmod(num1, num2);
    printf("check Result %.2f %% %.2f = %f \n", num1, num2, resultB);
    break;
  case 'P':
    resultB = pow(num1, num2);
    printf("check Result %.2f ^ %.2f = %f \n", num1, num2, resultB);
    break;
  case 'X':
    resultB = fmax(num1, num2);
    printf("result = %f\n", resultB);
    break;
  case 'I':
    resultB = fmin(num1, num2);
    printf("result = %f\n", resultB);
    break;
  default:
    printf("Invalid operator\n");
    break;
  }
} // Function to perform basic binary operations
void UnaryOperations(){
  char ap1;
  double num5;
  float resultU;
  printf(" U) - Unary Mathematical Operations, such as square root and "
         "log. \n");
  printf("Please enter the number:");
  scanf("%lf", &num5);
  printf("Please enter the operation (S-Square Root, L-Logarithm Base e, "
         "E-Exponentiation, C-ceiling(x), F-floor(x)): ");
  scanf(" %c", &ap1);
  switch (ap1) {
  case 'S':
    resultU = sqrt(num5);
    break;
  case 'L':
    resultU = log(num5);
    break;
  case 'E':
    resultU = exp(num5);
    break;
  case 'C':
    resultU = ceil(num5);
    break;
  case 'F':
    resultU = floor(num5);
    break;
  default:
    printf("Invalid operator\n");
    break;
  }
  printf("The result is %f \n", resultU);
} // Function to perform basic unary operations
void ExitMessage(){
  printf("Thanks for using Calculator. Goodbye!");
} // Exit Message
void variableMemory(){
  printf(" V) – Define variables and assign them values. \n");
  char ap3;
  printf("Select Variable from a,b,c,d,e to save value in : ");
  scanf(" %c", &ap3);
  switch (ap3) {
  case 'a':
    printf("Enter value for a: ");
    scanf(" %f", &a);
    break;
  case 'b':
    printf("Enter value for b: ");
    scanf(" %f", &b);
    break;
  case 'c':
    printf("Enter value for c: ");
    scanf(" %f", &c);
    break;
  case 'd':
    printf("Enter value for d: ");
    scanf(" %f", &d);
    break;
  case 'e':
    printf("Enter value for e: ");
    scanf(" %f", &e);
    break;
  default:
    printf("Invalid Variable\n");
    break;
  }
} // Function to manage variable memory
void AdvancedOperations(){
  char optA;
  printf("%f, %f, %f, %f, %f \n", a, b, c, d, e);
  printf(
      " A) - Advanced Mathematical Operations, using variables and arrays. \n");
  printf("B - Binary Operations with Variables\n");
  printf("U - Unary Operations with Variables\n");
  printf("E - Exit to Main Menu\n");

  scanf(" %c", &optA);
  switch (optA) {
  case 'B':
    binaryOperationAdvanced();
    break;
  case 'U':
    unaryOperationsAdvanced();
    break;
  case 'E':
    printf("Back To Main Menu");
    break;
  default:
    printf("Invalid operator\n");
    break;
  }
} // Function to perform advanced binary operations with variables
void binaryOperationAdvanced(){
  char opt1, ap4, ap5, input1[10], input2[10]; // Assuming maximum variable length is 10
  float num3, num4;
  float resultA;

  printf("Please enter the first number or a variable name ('a' to 'e'): ");
  // int ap4 = getchar();
  scanf(" %9s", input1);
  printf("Please enter the operation ( + , - , * , / , %%, P, X, I): ");
  scanf(" %c", &opt1);
  printf("Please enter second number or a variable name ('a' to 'e'): ");
  // int ap5 = getchar();
  scanf(" %9s", input2);

  if (strlen(input1) == 1 && isalpha(input1[0])) {
    ap4 = input1[0];
    printf("You entered the letter: %c\n", ap4);
  }
  if (ap4 >= 'a' && ap4 <= 'e') {
    // If the input is a variable (a, b, c, d)
    switch (ap4) {
    case 'a':
      num3 = a;
      break;
    case 'b':
      num3 = b;
      break;
    case 'c':
      num3 = c;
      break;
    case 'd':
      num3 = d;
      break;
    case 'e':
      num3 = d;
      break;
    } }
  else {
    char *endptr;
    num3 = strtof(input1, &endptr);
    // Check if conversion was successful
    if (endptr != input1) {
      printf("You entered the float: %f\n", num3);
    } else {
      printf("Invalid input.\n");
    }
  }

    if (strlen(input2) == 1 && isalpha(input2[0])) {
      ap5 = input2[0];
      printf("You entered the letter: %c\n", ap5);
    }
  if (ap5 >= 'a' && ap5 <= 'e') {
    // If the input is a variable (a, b, c, d, e)
    switch (ap5) {
    case 'a':
      num4 = a;
      break;
    case 'b':
      num4 = b;
      break;
    case 'c':
      num4 = c;
      break;
    case 'd':
      num4 = d;
      break;
    case 'e':
      num4 = e;
      break;
    }}
    else {
    char *endptr;
     num4 = strtof(input2, &endptr);
    // Check if conversion was successful
    if (endptr != input2) {
      printf("You entered the float: %f\n", num4);
    } else {
      printf("Invalid input.\n");
    }}
    switch (opt1) {
    case '+':
      resultA = num3 + num4;
      printf("check Result %f + %f = %f \n", num3, num4, resultA);
      break;
    case '-':
      resultA = num3 - num4;
      printf("check Result %f - %f = %f \n", num3, num4, resultA);
      break;
    case '*':
      resultA = num3 * num4;
      printf("check Result %f * %f = %f \n", num3, num4, resultA);
      break;
    case '/':
      resultA = num3 / num4;
      printf("check Result %f / %f = %f \n", num3, num4, resultA);
      break;
    case '%':
      resultA = fmod(num3, num4);
      printf("check Result %f %% %f = %f \n", num3, num4, resultA);
      break;
    case 'P':
      resultA = pow(num3, num4);
      printf("check Result  %f \n",  resultA);
      break;
    case 'X':
      resultA = fmax(num3, num4);
      printf("result = %f\n", resultA);
      break;
    case 'I':
      resultA = fmin(num3, num4);
      printf("result = %f\n", resultA);
      break;
    default:
      printf("Invalid operator\n");
      break;
    }
} // Function to perform advanced unary operations with variables
void unaryOperationsAdvanced(){
  char ap1;

  char input[10], ap5;
  float num5;
  float resultU;

  printf(" U) - Unary Mathematical Operations, such as square root and "
         "log. \n");
  printf("Please enter the first number or a variable name ('a' to 'e'): ");
  // int ap4 = getchar();
  scanf(" %9s", input);

  printf("Please enter the operation (S-Square Root, L-Logarithm Base e, "
         "E-Exponentiation, C-ceiling(x), F-floor(x)): ");
  scanf(" %c", &ap1);

  if (strlen(input) == 1 && isalpha(input[0])) {
    ap5 = input[0];
    printf("You entered the letter: %c\n", ap5);
  }
  if (ap5 >= 'a' && ap5 <= 'e') {
    // If the input is a variable (a, b, c, d)
    switch (ap5) {
    case 'a':
      num5 = a;
      break;
    case 'b':
      num5 = b;
      break;
    case 'c':
      num5 = c;
      break;
    case 'd':
      num5 = d;
      break;
    case 'e':
      num5 = e;
      break;
    }
  } else {
    char *endptr;
    num5 = strtof(input, &endptr);
    // Check if conversion was successful
    if (endptr != input) {
      printf("You entered the float: %f\n", num5);
    } else {
      printf("Invalid input.\n");
    }
  }

  switch (ap1) {
  case 's':
  case 'S':
    resultU = sqrt(num5);
    break;
  case 'l':
  case 'L':
    resultU = log(num5);
    break;
  case 'e':
  case 'E':
    resultU = exp(num5);
    break;
  case 'c':
  case 'C':
    resultU = ceil(num5);
    break;
  case 'f':
  case 'F':
    resultU = floor(num5);
    break;
  default:
    printf("Invalid operator\n");
    break;
  }
  printf("The result is %f \n", resultU);
} // Function to perform advanced unary operations with variables



