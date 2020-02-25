#include <stdio.h>
#include <stdlib.h>

int *arr, count = 0;

int place(int k, int pos) //k is queen no.(row no.)
{
    for(int r = 0; r < k; r++) 
    {
        if(arr[r] == pos)  //check if same row or same column
        return 0;
        if(abs(r - k) == abs(pos - arr[r]))    //check diagonals
        return 0; 
    }
    return 1;
}

void print_mat(int n) 
{
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            if(arr[i] == j) 
            printf(" Q ");
            else 
            printf(" - ");
        }
        printf("\n");
    }
}

void n_queens(int k, int n)  //k is queen no.(row no.)
{
    for(int i = 0; i < n; i++) 
    {
    
        if(place(k, i)) 
        {
			
            arr[k] = i;
	    
	    print_mat(n);
            
	    printf("\n\n");
            	if(k == n - 1) 
            	{
            	    print_mat(n);
            	    //printf("\n\n");
            	    count++;
            	}
            
            	else 
            	{
            		n_queens(k+1, n);
            	}
        }
    }
}

int main() 
{
    int n;
    printf("No of queens:");
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    n_queens(0, n);

    printf("Number of solutions : %d\n", count);
    return 0;
}


