// Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.

#include <stdio.h>
#define n 5

void main(){
    int i, a[5];
    printf("Enter 5 integers :");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        if((a[i] == 1) && (a[i+1] == 2) && (a[i+2] == 3)){
            printf("sequence of numbers 1, 2, 3 appears");
        }
    }
}