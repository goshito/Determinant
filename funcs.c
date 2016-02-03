/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "funcs.h"

void flush_input() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int read_int() {
    int result;
    scanf("%d", &result);
    flush_input();
    return result;
}

void display_determinant() {
    extern int i;
    extern int j;
    extern int n;
    extern int element[n][n];
    printf("\nThe matrix that you entered looks like this:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("| %d |", element[i][j]);
        }
        printf ("\n");
    }
}

