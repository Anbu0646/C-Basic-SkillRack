/*
The runs scored by two cricket players is passed as input. The program must print the total runs scored by the better player.
The better player is the player with a higher average. It is not necessary that both the players have played/scored in the same number of matches. 
If both the players have same average, then print the runs scored by the player who has the highest total runs.

Boundary Conditions: - The number of matches played for any player will not exceed 20. 
                     - If a negative value is passed as runs scored, then the program output must be INVALIDINPUT.

Input Format:  First line will contain the runs scored by player one.
               The scores are separated by one or more spaces. 
               Second line will contain the runs scored by player two. 
               The scores are separated by one or more spaces. 
Output Format: The first line will contain the total runs scored by the player having higher average. 

Sample Input/Output: 

Example 1: 

Input:  20 30 40 
        50 10 
Output: 90 

Explanation: Both the players have same average 30. Hence the output is the highest total runs which is by player 1. (20+30+40 = 90)

Example 2: 

Input:  50 60 10 
        50 40 
Output: 90 

Example 3: 

Input:  40 42 60
        0 100 56
Output: 156 

Example 4:

Input:  42 -10 
        22 45 
Output: INVALIDINPUT

Explanation: As -10 is passed as runs scored in the input, the program must print INVALIDINPUT

SOLUTION:
*/

