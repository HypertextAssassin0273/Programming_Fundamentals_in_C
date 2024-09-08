// C program to illustrate nested-if statement
#include <stdio.h>

void simple_if_else_ladder(){
    int i = 20;
    if (i == 10)
        printf("i is 10");
    else if (i == 15)
        printf("i is 15");
    else if (i == 20)
        printf("i is 20");
    else
        printf("i is not present");
}

void with_tenary(){
    int i = 20;
    //(i == 10) ? (printf("i is 10")) : (i == 15) ? (printf("i is 15")) : (i == 20) ? (printf("i is 20")) : (printf("i is not present"));// not efficient

    //printf(i == 10 ? "i is 10" : i == 15 ? "i is 15" : i == 20 ? "i is 20" : "i is not present");// still not efficient

    printf("'i is %s' (string)", i == 10 || i == 15 || i == 20 ? (char[]){i/10 + '0', i%10 + '0', '\0'} : "not present");// efficient (refactored)
}

int main(){
    // simple_if_else_ladder();
    with_tenary();
}

// next topics: scopes, student types
// future topics: data-types & their memory allocation/sizes, array basics


// gcc -o if-else-ladder-with-tenary if-else-ladder-with-tenary.c
// ./if-else-ladder-with-tenary