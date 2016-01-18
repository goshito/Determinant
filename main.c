/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on January 11, 2016, 12:35 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void flush_input() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {
        
    int i, j, n;
    int determinant;
    char c;
    
    printf("\nEnter lines number: ");
    scanf("%d", &n);
    int element[n][n];

    //Filling the array with the values of the elements of the determinant.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nEnter element a[%d][%d]=", i, j);
            scanf("%d", &element[i][j]);
        }
    }
    
    printf("\nHere is your square matrix:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("| %d |", element[i][j]);
        }
        printf ("\n");
    }
    
    if (n == 2) {
       determinant = ( element[0][0] * element[1][1] ) - ( element[0][1] * element[1][0] );
       printf("\nYou have entered a two line square matrix and its determinant is: %d", determinant);
    }
    
    if (n == 3) {
        flush_input();
        //Method of triangles or Sarus?        
        printf("Please choose method to calculate determinant!\nEnter (t) for triangles or (s) for Sarus: ");       
       c = getchar(); //Zashto ne dava da se vuvedete simvol FLUSH INPUT??? 
       printf("\n%d\n", c);
       if (c == 't') {
          determinant = (element[0][0] * element [1][1] * element[2][2]) + (element[0][1] * element[1][2] * element[2][0]) + (element[0][2] * element[1][0] * element[2][1]) - (element[0][2] * element[1][1] * element[2][0]) - (element[0][0] * element[1][2] * element[2][1]) - (element[0][1] * element[1][0] * element[2][2]); 
          printf("Presmiatane po metoda na Sarus:\n%d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d = %d", element[0][0], element [1][1], element[2][2], element[0][1], element[1][2], element[2][0], element[0][2], element[1][0], element[2][1], element[0][2], element[1][1], element[2][0], element[0][0], element[1][2], element[2][1], element[0][1], element[1][0], element[2][2], determinant);
       }
    }
    
    else {
        //Calculate a determinant with random lines number(How the fuck??)
        //Adyungirano kolichestvo
    }
    
    return (EXIT_SUCCESS);
}

