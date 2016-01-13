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
int main(int argc, char** argv) {
        
    int i, j, n;
    int determinant;
    
    printf("\nEnter lines number: ");
    scanf("%d", &n);
    int a[n][n];

    //Filling the array with the values of the elements of the determinant.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nEnter element a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf ("\n");
    }
    
    if (n = 2) {
       determinant = ( a[0][0] * a[1][1] ) - ( a[0][1] * a [1][0] );
       printf("\nYou have entered a two line determinant and its value is: %d", determinant);
    }
    
    if (n > 3) {
       //Method of triangles or Sarus?
       printf("You have entered a determinant of third line and its value is: ");
    }
    
    else {
        //
    }
    
    return (EXIT_SUCCESS);
}

