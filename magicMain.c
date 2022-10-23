#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
// function that can test whether an array is a magic square or not:
/*
{00,01,02}
{10,11,12}
{20,21,22}
*/
void printArray(int arr[3][3]);
int check_square(int arr[3][3]){
    // if one of the checks is true then it is not a lo shu magic square
    // check for horizontal lines
    if (arr[0][0] + arr[0][1] + arr[0][2] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    else if (arr[1][0] + arr[1][1] + arr[1][2] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    else if (arr[2][0] + arr[2][1] + arr[2][2] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    // check for vertical lines
    else if (arr[0][0] + arr[1][0] + arr[2][0] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    else if (arr[0][1] + arr[1][1] + arr[2][1] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    else if (arr[0][2] + arr[1][2] + arr[2][2] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    // check for diagonal lines
    else if (arr[0][0] + arr[1][1] + arr[2][2] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    else if (arr[0][2] + arr[1][1] + arr[2][0] != 15)
    {
        printf("the square is not a Lo Shu Magic Square");
        return 0;
    }
    // if all the checks are false then it is a lo shu magic square
    else {
        printf("the square is a lo shu magic square");
        return 1;
    }
}
int fill_array(int arr[3][3]){
    //this will creat a 1d array that is random
    int array_one[9];
    int i;
    for (i = 0; i < 9; ++i)
        array_one[i] = i+1;
    for (i = 0; i < 9; ++i) {
        int *a = &array_one[ i ];
        int *b = &array_one[ (rand() % 8)+1 ];
    
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    //this will assign the 1d array into a 2d array
    //arr[0][0] = array_one[0];
    int counter = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             arr[i][j] = array_one[counter];
             counter++;
        } 
    }
    
}
void printArray(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }
}

int main(){
    // init the array;
    int array[3][3];
    int status = 0;
    int counter = 0;
    do
    {
        // increment counter
        counter++;
        // generate an array
        fill_array(array);
        printArray(array);
        // check if its a lo shu magic square
        if (check_square(array) == 1)
        {
            status = 1;
            printf("a magic square has been found\n");
            printf("number of attempts: %d\n",counter);
        }
    } while (status != 1);

    return 0;
}