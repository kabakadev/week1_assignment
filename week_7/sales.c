#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    float amount, total_sales = 0.0;
    int count = 0;

    fptr = fopen("sales.txt", "r");

    
    if (fptr == NULL) {
        printf("Error: Could not open file 'sales.txt'.\n");
        printf("Make sure the file exists in the current directory.\n");
        exit(1);
    }


    while (fscanf(fptr, "%f", &amount) == 1) {
        total_sales += amount;
        count++;
    }


    if (count > 0) {
        printf("Total transactions processed: %d\n", count);
        printf("Total sales for the day: $%.2f\n", total_sales);
    } else {
        printf("No transactions found in the file.\n");
    }

    
    fclose(fptr);

    return 0;
}   