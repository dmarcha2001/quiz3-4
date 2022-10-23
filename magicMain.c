#include<stdio.h>
#include<string.h>
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


int main(){
    // init the two dimensional array
    int square[3][3]={
        {4,9,2},
        {3,5,7},
        {8,1,6}
    };
    // pass it to the function
    check_square(square);
    // print if its a magic square or not
    return 0;
}