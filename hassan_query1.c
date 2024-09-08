#include<stdio.h> // c library headers

int main(){ //{} => scope operator
	int a, b, c, // 4 bytes each, total 16 bytes,
		x=0;	 // always initialize variables that perform arithmetic operations
	// 00, 08, 05, 09 => addresses may or may not be contiguous (depends on compiler/system-architecture)

	// additional topic (arrays has contiguous memory blocks):
	//a[3]; //x09100 x09104 x09108 [4 diff], total size = 4*3 = 12 bytes
	// a[0] = x09100, a[2] = x09108,   -> n-1
	
	printf("Enter Principal must between 100 to 1000000 : ");
	scanf("%d", & a);
	
	if (a >=100 && a<=1000000){ // operator precedence: () || >= <=, +ve response, translation of b/w statement
		printf(" Enter Rate of Interest between 5 percent to 10 percent : ");
    	scanf("%d", & b);
    	// !(a >=100) = a <100, !(a<=1000000) = a>1000000, !(a&&b) = a||b
		// !(a >=100 && a<=1000000) = a <100 || a>1000000 [-ve response]
    	
    	if (b>=5 && b<=10){ // nested if
			printf("  Enter Time period must between 1 to 10 years : ");
			scanf("%d", & c);
			// inclusivity & exclusivity shows use of = sign in statements
			// e.g. b/w (TARGETS inclusivity): b>=5 && b=<10
			
			if ( c>=1 && c<=10){ //dependence=> independant: nested above if, dependant: outer if
				x = (a * b * c)/100; // Simple Interest
        		printf("   Simple interest is %d", x);
			}
    		// else
        	// 	printf("Invalid "); // not a good place to put 'false response' for given problem
		}
	}// note: nesting 'if' statements in the above order can be deemed as 'systematic taylored reponse'

	if (!x) // flag statement, means: if x is 0, then false
		printf("Invalid "); // this is the right place to show 'false response' only when all conditions aren't met
	
	printf("\n"); // new line
	system("pause"); // pauses the console (necessary when directly running .exe file as it can stop console from closing)
}

// next topics: truthy/falsy values (for conditional statements), tenary operator usage in nested if statements


// gcc -o hassan_query1 hassan_query1.c
// ./hassan_query1
