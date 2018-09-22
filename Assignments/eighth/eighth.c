#include<stdio.h>
#include<stdlib.h>

//create a structure that holds the left child and the right child
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}; //need a semi colon at end 

int main(int argc, char** argv) {
    FILE* fp = fopen(argv[1], "r");  //create a file named file pointer then get it from the first input in terminal argv1 and "r" is read mode
    //REMEMBER argv0 is equal to the name of the thing (eith.c) argv 1 is the first input you type in
    int num; //create number to save the read file
    char character;
    
    while((fscanf(fp, "%c\t%d", &character,    &num)) > 0) {
        //reading from filepointer followed by what ur reading (a number), followed by where your saving number
    //forward slash t represents tab )
    printf("%c  %d\n", character,  num);
    }
    return 0;
}

//taking in input from file: fgets() with sscanf() OR fscanf()