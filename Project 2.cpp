/*Use of floor and ceil functions on floating point values.
Both functions are library functions and declare in math.h header file. Floor ignores the fraction part and just print the same in floating point.
floor(123.46) then it will return 123.000000
ceil(123.46) then it will return 124.000000
Input Format
Take a floating point value n.
Constraints
n>=0.00
n<=99999999.000000
Output Format
First line should print the floor value.
Second line should print the ceil value.
Sample Input 0
123.45
Sample Output 0
123.000000
124.000000 */

#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    
        float n;
    scanf("%f",&n);
    printf("%f",floor(n));
    printf("\n%f",ceil(n));

      
    return 0;
}

/*Given a character and we have to find its ASCII value.
An ASCII value is a code (numeric value) of keys. We put the any character, symbol etc, than the computer can’t understand. A computer can understand only code and that code against each key is known as ASCII Code.
Input Format
Take a character from the user.
Constraints
Input should be only one character.
Output Format
Print the ASCII value of the given character.
Sample Input 0
a
Sample Output 0
97 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char a;
    scanf("%c",&a);
    printf("%d",a);

   
    return 0;
}

