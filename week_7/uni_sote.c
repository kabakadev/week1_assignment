    #include <stdio.h>  //fopen
    #include <stdlib.h>
    #include <string.h>

    struct Student{
        char name[40];
        char reg_no[25];
        float total_marks;

    };

    int main(){

        struct Student s;

        FILE *fptr; 
        fptr = fopen("results.dat", "rb");
        if (fptr == NULL) {
            printf("Could not open results.dat\n");
            return 1;
         }
        // fread reads one struct at a time until end of file
        while (fread(&s, sizeof(struct Student), 1, fptr) == 1) {
           printf("Name: %s  | Marks: %.2f\n", s.name, s.total_marks);
         }
        fclose(fptr);


        return 0;
    }