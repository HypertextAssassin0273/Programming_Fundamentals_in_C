#include <stdio.h>

//"1" = '1' = 1 // all true ?? = yes
// "0" = '0' = 0 // all false ?? = no
// true = 1, false = 0
// truthy values: 1, "1", '1', "0", '0', " ", ' ', "abc", 'abc', -1, 1.1, -1.1
// falsy values: 0, NULL, '\0', "", '0'

int main()
{
  int a, b, c;
  printf("Enter Principal must between 100 to 1000000 : ");
  scanf("%d", &a);
  (a >= 100 && a <= 1000000) ? ((printf(" Enter Rate of Interest between 5 percent to 10 percent : ")), (scanf("%d", &b))) : (printf("Invalid "));
  (b >= 5 && b <= 10) ? ((printf("Enter Time period must between 1 to 10 years : ")), (scanf("%d", &c))) : (printf("Invalid "));// bad practice

  //( c>=1 && c<=10) ? (printf(" Simple interest is %d", (a * b * c)/100)):(printf("Invalid "));
  // printf(c>=1 && c<=10 ? "Simple ": "Invalid"); //int c = a > b ? a : b;
  printf(c >= 1 && c <= 10 ? "Simple interest is %d" : "Invalid", (a * b * c) / 100);
}


// next topics: scopes, nested if (with tenary operator), student types,
// future topics: data-types & their memory allocation/sizes, array basics


// 14 js
//  gcc -o tenary_test tenary_test.cpp
