#include<stdio.h>
#include<stdlib.h>

//still need to sort separating the odds and evens 

// create function to sort the array
void sorted(int* a, int d) {
    int b;
    for(b = 1; b < d; b++) { //for b is less than size of array 
        int insert = a[b];
        int place = b - 1; 

            while (place >= 0) {
               if(a[place] > insert) {
                   (a[place +1] = a[place]);
                   place--;
               } else {
                   break;
            }
        }
            a[place + 1] = insert;
    }
}

// void swap(int *a, int *b);

// //functions to take even values to front and odd at end using quicksort
// void separate(int array[], int size) {
//     int j = -1;

//     for (int i = 0; i < size; i++) { //implement quicksort

//         if(array[i] % 2 == 0) {
//             j++;
            
//             swap(array[i], array[j]); //swap array of value i and j
//         }
//     }
// } 

// void swap(int *a, int *b) { //function to swap two values

//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main(int argc, char** argv) {
    int size = 0;
    int elements = 0;
    int i = 0;

    FILE* fp = fopen(argv[1], "r"); //take the first input as the file name to open it

    if (fp == NULL) {

        return 0;
    }

    fscanf(fp, "%d\n", &size); //figure out the size of the array from text file
    //size is the first element of the text file
     printf("Size of array: %d\n", size);
    int array[size];

    while(!feof(fp) && elements < size) { //feof is the end of the file
        //figure out the elements of the array
        fscanf(fp, "%d", &array[elements]); 
        printf("%d \n", array[elements]); //print elements onto console
        elements++; //iterate to the next element of the file
    }
    
    sorted(array, size); //call the sorted function on the array 

    // separate(array, size); //call the even/odd separate function

    for(i = 0; i<size; i++) { //iterate through the array using a for loop

        printf("%d\t", array[i]); //print with a tab in between
    }
    
    return 0;
}