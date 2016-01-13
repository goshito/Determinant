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
    int determinanta;
    
    printf("\nEnter lines number: ");
    scanf("%d", &n);
    int a[n][n];
    //Determine the way to solve the determinant depending on its number of lines
    if (n > 3) {
        //Must use adjugate matrix method
    }    
    
    //Filling the array with the values of the elements of the determinant.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nEnter element a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //Display the elements in table format.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d]=%d\t", i, j, a[i][j]);                      
        }
        printf("\n");
    }
    

    return (EXIT_SUCCESS);
}

