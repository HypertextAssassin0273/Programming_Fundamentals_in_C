// C program to illustrate how to use temporary string in C
#include <stdio.h>

int main(){
    int i = 20;
    printf("i is %s", (char[]){i/10 + '0', i%10 + '0', '\0'});// clever use of temporary string


    // breaking down the above statement:
    // char temporary_string[] = {i/10 + '0', i%10 + '0', '\0'}; // 20 -> '2', '0', '\0' = "20"

    // char temporary_string[] = (char[]){i/10 + '0', i%10 + '0', '\0'}; // same as above

    // printf("i is %s", temporary_string); // arrays can be passed as pointers (for string formatting)

}


// gcc -o temporary_string_trick temporary_string_trick.c
// ./temporary_string_trick
