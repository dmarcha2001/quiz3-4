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
    srand(time(0));
    int random_number;
    int unique = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            while(unique != 1){
                random_number = (rand() % 8) + 1;
                unique = 1;
                for (int x = 0; x < 3; x++)
                {
                    for (int y = 0; y < 3; y++)
                    {
                        if (arr[x][y] == random_number)
                        {
                            unique = 0;
                            arr[i][j] = random_number;
                        }
                        printf("y is %d\n",y);
                    }
                    printf("x is %d\n",x);
                }
            }
            printf("j is %d\n",j);
        }
        printf("i is %d\n",i);
    }
    
}
void printArray(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        } 
    }
}

int main(){
    // to creat random numbers
    srand(time(0));
    int status = 1;
    int random_number;
    // init the two dimensional array
    int square[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    fill_array(square);
    
    printArray(square);
    // generate a random number
    // check if the number is already in the list
    // if it is make a new number
    // pass it to the function
    //check_square(square);
    // print if its a magic square or not
    return 0;
}