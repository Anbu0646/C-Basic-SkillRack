/*

The program must accept two integer matrices A and B which are of same size NxN as the input. The program must find the sum of the integers in the lower left triangle of the matrix A as S1. The program must find the sum of the integers in the lower left triangle of the matrix B as S2. If S1 is greater than or equal to S2 then the program must print the lower left triangle of the matrix A. Else the program must print the lower left triangle of the matrix B as the output.

Boundary Condition(s): 2 <= N <= 50 
                       0 <= Values in the matrix <= 1000 

Input Format:  The first line contains the integer N.
               The next N lines from the second line each contain N integers separated by space(s). 
               The next N lines from the (N+2)th line each contain N integers separated by space(s).
Output Format: The first N lines contain either lower left triangle of the matrix the A or lower left triangle of the matrix the B. 


Example Input/Output 1: 

Input:  3 
        1 2 3 
        4 5 6 
        7 8 9 
        78 45 23
        51 87 98 
        33 95 41 
       
Output: 78 
        51 87 
        78 95 41 
        
Explanation: The integers in the lower left triangle of the matrix A are 1 4 5 7 8 9 So their sum (S1) is 34.
             The integers in the lower left triangle of the matrix B are 78 51 87 33 95 41 So their sum (S2) is 385. 
             Here S2 is greater than S1. So print the integers in the lower left triangle of the matrix B. 
             Hence the output is 78 51 87 78 95 41 
            
Example Input/Output 2: 

Input:  4 
        4 8 9 8 
        4 6 7 3 
        6 7 9 6 
        4 6 1 9 
        5 2 8 2 
        2 6 5 2
        4 6 1 3 
        2 1 4 5 

Output: 4 
        4 6 
        6 7 9 
        4 6 1 9
        
SOLUTION:
*/
