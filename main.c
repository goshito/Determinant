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
    
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nVuvedi element a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    return (EXIT_SUCCESS);
}

