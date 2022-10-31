/*

The program must accept two integer matrices of sizes RxM and RxN as the input. The program must print all the columns of the first matrix interlaced with the columns of the second matrix as the output.

Boundary Condition(s):  2 <= R, M, N <= 50 
Input Format:  The first line contains the values of R, M and N separated by space(s). 
               The next R lines from the second line contain M integers separated by space(s). 
               The next R lines from the (R+2)th line contain N integers separated by space(s). 
Output Format: The first R lines contain M+N integers separated by a space. 

Example Input/Output 1: 

Input:  3 5 3
        3 1 4 9 4 
        1 2 8 5 9 
        0 7 2 2 8 
        45 54 45 47
        49 60 44 46 44 
Output: 3 45 1 54 4 45 
        9 4 1 47 2 49 
        8 60 5 9 0 44 7 46 2 44 2 8 Explanation: The columns of the first matrix are interlaced with the columns of the second matrix. 3 45 1 54 4 45 9 4 1 47 2 49 8 60 5 9 0 44 7 46 2 44 2 8 Example Input/Output 2: Input: 4 3 4 54 49 40 45 97 77 51 62 67 9 59 5 58 89 97 46 7 16 60 44 59 95 44 7 64 55 61 31 Output: 54 58 49 89 40 97 46 45 7 97 16 77 60 44 51 59 62 95 67 44 7 9 64 59 55 5 61 31

*/
