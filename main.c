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
    
    printf("\nVuvedi red na determinantata: ");
    scanf("%d", &n);
    int a[n][n];
    
    //Filling the array with the values of the elements of the determinant.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nVuvedi element a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //Display the elements in table format.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element a[%d][%d]=%d\t", i, j, a[i][j]);                      
        }
        printf("\n");
    }
    

    return (EXIT_SUCCESS);
}

