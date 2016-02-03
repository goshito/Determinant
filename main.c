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
#include "funcs.h"

int main(int argc, char** argv) {
        
    int i, j, n;
    int determinant;
    char c;
    
    printf("\nEnter lines number: ");
    n = read_int();
    
    int element[n][n];

    //Filling the array with the values of the elements of the determinant.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nEnter element a[%d][%d] = ", i+1, j+1);
            element[i][j] = read_int();
            //scanf("%d", &element[i][j]);
            //flush_input();
        }
    }
    
    printf("\nHere is the determinant you entered:\n\n");
    diplay_determinant();
    /*
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("| %d |", element[i][j]);
        }
        printf ("\n");
    }
    */
    if (n == 2) {
       determinant = ( element[0][0] * element[1][1] ) - ( element[0][1] * element[1][0] );
       printf("\nYou have entered a two line square matrix and its determinant is: %d", determinant); //Show how it's done!!!
    }
    
    if (n == 3) {
       //Flush buffer because scanf leaves a \n in the buffer
       //flush_input();
       //fflush(stdin); not working
       //read_int();
       
       //Ask which methid for calculation to use        
       printf("\nPlease choose method to calculate determinant!\nEnter (t) for triangles or (s) for Sarus: ");       
       c = getchar();
       if (c == 's') {
          determinant = (element[0][0] * element [1][1] * element[2][2]) + (element[0][1] * element[1][2] * element[2][0]) + (element[0][2] * element[1][0] * element[2][1]) - (element[0][2] * element[1][1] * element[2][0]) - (element[0][0] * element[1][2] * element[2][1]) - (element[0][1] * element[1][0] * element[2][2]); 
          printf("\nSarus method calculation:\n%d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d x %d = %d", element[0][0], element [1][1], element[2][2], element[0][1], element[1][2], element[2][0], element[0][2], element[1][0], element[2][1], element[0][2], element[1][1], element[2][0], element[0][0], element[1][2], element[2][1], element[0][1], element[1][0], element[2][2], determinant);
       } else if (c == 't') {
           printf("You have chosen triangles method");
       }
    }
    
    else {
        //Calculate a determinant with random lines number (process determinant by row or column)
        //Adyungirano kolichestvo
        //
    }
    
    return (EXIT_SUCCESS);
}

