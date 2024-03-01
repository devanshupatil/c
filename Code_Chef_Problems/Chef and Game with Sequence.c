#include <stdio.h>

int main(void) {
	int T; // Denoting the number of tast case
	int N;
	
	scanf("%d", &T);
	
	while(T--) // Run each tast case
	{
	    scanf("%d", &N);
	    
	    int A[N];
	    int odd = 0;
	    
	    for(int i = 0; i < N; i++)
	    {
	        scanf("%d", &A[i]);
	        
            // If the number is odd then add by one
	        if(A[i] % 2 != 0) 
	        {
	            odd++;
	        }
	    }
	    
	    if(odd % 2 != 0 && N > 1) // if the number is odd and N is more than 1
	    {
	        printf("2\n"); // If true, print'2'
	    }
	    else
	    {
	        printf("1\n"); // If fasle, print '1'
	    }
	    
	    
	}
    return 0; // Exit the program
}

