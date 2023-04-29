#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASS_LEN 6

int main() {
    char pass[PASS_LEN + 1] = "aeiceg";
    char matrix[3][3];
    char diag[PASS_LEN + 1]; 
    int i, j, count = 0;
    
    printf("Enter the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &matrix[i][j]);
            /*if (i == j || i + j == 2) { 
                diagonal[count++] = matrix[i][j]; 
            }*/
        }
    }
    diag[0]=matrix[0][0];
    diag[1]=matrix[1][1];
    diag[2]=matrix[2][2];
    diag[3]=matrix[0][2];
    diag[4]=matrix[1][1];
    diag[5]=matrix[2][0];
    
    /*for(int i=0;i<6;i++) {
        printf(" %s", diagonal);
    }*/
    printf("\n %s\n", diag);
   if (strcmp(diag, pass) == 0) {
        printf("Password accepted. Digital locker opened.\n");
    } else {
        printf("Invalid password. Try again.\n");
    }
    return 0;
}
