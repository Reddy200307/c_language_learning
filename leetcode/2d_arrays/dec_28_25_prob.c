/*
1351. Count Negative Numbers in a Sorted Matrix
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
Example 1:
Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:
Input: grid = [[3,2],[1,0]]
Output: 0
*/
   
#include <stdio.h>
#include <stdlib.h>


int countNegatives(int** grid, int gridSize, int* gridColSize) {
        int count=0;
    for(int row=0;row<gridSize;row++){
        for(int col=0;col<gridColSize[row];col++){
                if(grid[row][col]<0)count++;
        }
}
    return count; 
}

int main(){

    int row1[] = {4, 3, 2, -1};
    int row2[] = {3, 2, 1, -1};
    int row3[] = {1, 1, -1, -2};
    int row4[] = {-1, -1, -2, -3};


    int* grid[] = {row1, row2, row3, row4};


    int gridSize = 4;
    int gridColSize[] = {4, 4, 4, 4}; 

    printf("The count is %d\n",countNegatives(grid, gridSize, gridColSize));

    return 0;
}