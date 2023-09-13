/*Program to subtract two integers without using Minus (-) operator.
In this program, we will study how we can print subtraction between two integer values without using minus (-) operator? We will use bitwise complement for getting the same.
Input Format
Take two integers n1,n2 from the user.
Constraints
n1,n2>=-100000 && n1,n2<=100000
Output Format
It should print the value of n1-n2.
Sample Input 0
9 12
Sample Output 0
-3 */

#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    int n1,n2,c;
    scanf("%d%d",&n1,&n2);
    c=n1-n2;
    printf("%d",c);
    

      
    return 0;
}

