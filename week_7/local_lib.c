    #include <stdio.h>  //fopen
    #include <stdlib.h>
    #include <string.h>

    int main(){
        char book_title[100];

        FILE *fptr; 
        fptr = fopen("/home/iankabaka/Desktop/cfiles/library.txt", "a");

        if(fptr == NULL){
            printf("error creating the file");
            exit(1);
        }
        printf("Enter a book title to store the book: ");
        fgets(book_title,sizeof(book_title), stdin);

        fprintf(fptr, "%s\n", book_title);
        printf("The book %s has been successfully added.\n", book_title);
        fclose(fptr);



        return 0;
    }