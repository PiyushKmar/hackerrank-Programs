/*Take three integer numbers from user and find largest number among them.
Input Format
Take three numbers as space separated value from user
Constraints
n1,n2,n3<=1000
n1,n2,n3>=-1000
Output Format
Print the largest among the three numbers
Sample Input 0
20 30 40
Sample Output 0
40 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if(n1>n2&&n1>n3)
    {
        printf("%d",n1);
    }
    
    else if(n2>n3&&n2>n1)
    {
        printf("%d",n2);
    }
    
    else
    {
        printf("%d",n3);
    }

   
    return 0;
}

/*Given an integer number and two divisors d1 and d2, we have to check whether number is divisible by d1 and d2 or not.
Input Format
Take an integer n whose divisibilty is to be checked.
Take the first divisor value d1.
Take the second divisor value d2.
Constraints
n>=1
n<=100000000
Output Format
Print "Yes." if number is divisible by both the entered divisors.
Print "No." if number is not divisible by both or any of the entered divisors.
Sample Input 0
100
10
20
Sample Output 0
Yes.
Sample Input 1
90
10
20
Sample Output 1
No. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a%b==0&&a%c==0)
    {
        printf("Yes.");
    }
    
    else
    {
        printf("No.");
    }

     
    return 0;
}

