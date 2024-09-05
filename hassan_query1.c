#include<stdio.h> // c library headers

int main(){ //{} => scope operator
	int a,c,b,x; // 4 bytes
	//  1 3 5 11// adrresses may or may not be consecutive/contiguous
	
	printf("Enter Principal must between 100 to 1000000 : ");
	scanf("%d", & a); 
	
	// additional topic:
	//a[3]; //x09100 x09104 x09108 [4 diff], total size = 4*3 = 12 bytes
	// a[0] = x09100, a[2] = x09108,   -> n-1
	
	if (a >=100 && a<=1000000){ // operator precedence: () || >= <=, +ve response, translation of b/w statement
		printf(" Enter Rate of Interest between 5 percent to 10 percent : ");
    	scanf("%d", & b);
    	// !(a >=100) = a <100, !(a<=1000000) = a>1000000, !(a&&b) = a||b
		// !(a >=100 && a<=1000000) = a <100 || a>1000000 [-ve response]
    	
    	if (b>=5 && b<=10){ // nested if
			printf("Enter Time period must between 1 to 10 years : ");
			scanf("%d", & c);
			// inclusivity & exclusivity shows use of = sign in statements
			// e.g. b/w (TARGETS inclusivity): b>=5 && b=<10
			
			if ( c>=1 && c<=10){ //dependence=> independant: nested above if, dependant: outer if
				x = (a * b * c)/100; // Simple Interest
        		printf(" Simple interest is %d", x);
			}
    		else
        		printf("Invalid ");
		}
	}
	// tip: if u want a talyored reponse, then use nested if statements
}

// remaining: tenary operator
// task: re-construct the above problem with the help of tenary operator

// hint: learn atomic or individual transformation of each if-else statement, then combine the whole logic/code
//if{
//	if{
//		if{}
//		else{}
//		}
//	}
//}

void soln(){// function
	
}


// next topic: scopes
// student types
// 

