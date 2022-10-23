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
    int rows,columns;
    int random,i;
    int randvalues[9],m=0;
    int t,j;  

    for(i=0;i<9;i++)     //assigning values 1 to 9
         randvalues[i]=i+1;

    for(i=0;i<9;i++)      //shuffle logic
    {
         j=i+rand()/(RAND_MAX/(9-i) + 1);
         t=randvalues[j];
         randvalues[j] = randvalues[i];
         randvalues[i] = t;
    }
    for(rows=0;rows<3;rows++) //conversion from 1-D to 2-D array and printning
    {
        for(columns=0;columns<3;columns++)
        {
            arr[rows][columns] = randvalues[m++];
            printf("%d " , arr[rows][columns]);
        }
        printf("\n");
    }
    return 0;
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
    // init the array;
    int array[3][3];
    //generate the array;
    fill_array(array);
    //check if its a lo sho magic square;
    check_square(array);

    return 0;
}