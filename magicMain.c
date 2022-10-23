#include<stdio.h>
#include<string.h>
// function that can test whether an array is a magic square or not:
int check_square(int arr[3][3]){
    printf("%d\n",arr[0][0]);
    printf("%d\n",arr[0][1]);
    printf("%d\n",arr[0][2]);
    printf("%d\n",arr[1][0]);
    printf("%d\n",arr[1][1]);
    printf("%d\n",arr[1][2]);
    printf("%d\n",arr[2][0]);
    printf("%d\n",arr[2][1]);
    printf("%d\n",arr[2][2]);
    return 0;
}


int main(){
    // init the two dimensional array
    int square[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // pass it to the function
    check_square(square);
    // print if its a magic square or not
    return 0;
}