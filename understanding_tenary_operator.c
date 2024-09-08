#include <stdio.h>

//"1" = '1' = 1 // all true ?? = yes
// "0" = '0' = 0 // all false ?? = no
// true = 1, false = 0
// truthy values: 1, "1", '1', "0", '0', " ", ' ', "abc", 'abc', -1, 1.1, -1.1
// falsy values: 0, NULL, '\0', "", '0'

int main(){
  int a, b, c;
  printf("Enter Principal must between 100 to 1000000 : ");
  scanf("%d", &a);
  (a >= 100 && a <= 1000000) ? (printf(" Enter Rate of Interest between 5 percent to 10 percent : "), scanf("%d", &b)) : printf("Invalid ");
  (b >= 5 && b <= 10) ? (printf("Enter Time period must between 1 to 10 years : ")), scanf("%d", &c) : printf("Invalid ");
  //( c>=1 && c<=10) ? printf(" Simple interest is %d", (a * b * c)/100):printf("Invalid "); 
  //note: above all are either inefficient or bad practices

  // printf(c>=1 && c<=10 ? "Simple ": "Invalid"); //int c = a > b ? a : b; (simplified logic)
  printf(c >= 1 && c <= 10 ? "Simple interest is %d" : "Invalid", (a * b * c) / 100); // refactored & efficient
}

// next topics: scopes, nested if (with tenary operator), student types

// task: write equivalent code using tenary operator for below if-else logical structure:
/* 
  if{
		if{
			if{
			}
		}
	}
	else{
	}
*/
// tip: first understand simple transformation of each conditional statement, then combine the whole code

void task_soln(){// function
	// your code here...
}


// 14 js
//  gcc -o tenary_operator tenary_operator.c
//  ./tenary_operator
