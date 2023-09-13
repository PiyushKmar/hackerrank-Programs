/*(Question)You are given Principal Amount P, rate R and time T. Calculate Final Amount with Simple Interest on it.
Input Format
First line contains P Second line contains R Third line contains T
Constraints
0 < P,R,T < 100000
Output Format
A integer representing total amount.
Sample Input 0
1000
10
10
Sample Output 0
2000*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  
   int P,R,T,AM;
    scanf("%d %d %d",&P,&R,&T);
    AM = P*R*T/100 + P;
    printf("%d",AM);   
    return 0;
}

/*(Questions)You are given time = 2 Years. You have to take Principal Amount P and rate R from user and calculate and print compound interest.
Input Format
First line contains P Second line contains R
Constraints
0 < P,R < 100000
Output Format
A number representing compound interest rounding upto 2 decimal places.
Sample Input 0
10000
2
Sample Output 0
404.00*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int P,R;
    float ci;
    scanf("%d%d",&P,&R);
    ci=P*pow(1+R/100.0,2)-P;
    printf("%.2f",ci);
    
    
    

   
    return 0;
}

/*(Question)You have a uncle who daily gives you D chocolates upto N days. Also you have C chocolates already but your parents allow only to eat one chocolate per day. Calculate the total chocolates at the end of N days.
Input Format
First line contains C Second line contains N Third line contains D
Constraints
0 < C,D,N < 1000000
Output Format
Single Integer representing the total chocolates at the end of N days.
Sample Input 0
5
5
5
Sample Output 0
25
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int C,N,D,A;
    scanf("%d\n%d\n%d\n",&C,&N,&D);
    A = (D*N)+C-N;
    printf("%d",A);
    
    
    
    
    
    
    
    
    return 0;
}

/*(Questions)It is given that name contains five characters. You are given ASCII value of each character separated by &. Now you have to decode it and find that Funny name.
Input Format
Five & symbol separated integers representing the ASCII value of character at that position.
Constraints
0 < W1,W2,W3,W4,W5 < 255
Output Format
Single line containing five characters representing the name.
Sample Input 0
80&69&65&75&85
Sample Output 0
PEAKU */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int a,b,c,d,e;
    scanf("%d&%d&%d&%d&%d",&a,&b,&c,&d,&e);
    printf("%c%c%c%c%c",a,b,c,d,e);
   

    

       
    return 0;
}

/*(Questions)Use of floor and ceil functions on floating point values.
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

/*(Questions)The Program to read two integer numbers and display the product of both numbers taken as a input.
Input Format
Take two integers n1 and n2 (separate line)
Constraints
0>=(n1,n2)<=100000000
Output Format
It should print the Product of two numbers only.
Sample Input 0
10
20
Sample Output 0
200 */

#include <stdio.h>



int main() {
    
    int a,b,c;
    scanf("%d",&a);
    scanf("\n%d",&b);
    c=a*b;
    printf("%d",c);
   
    return 0;
}

/*(Questions)Take 2 integer from the user and then swap both the value and print as the output.
input:2 4 output:4 2
Input Format
First line contain two integer a and b.
Constraints
0
0
Output Format
First line should print the the swapped integer separated by space. (a b)
Sample Input 0
2 4
Sample Output 0
4 2 */

#include <stdio.h>


int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);


      
    return 0;
}

/*(Questions)Program to find remainder of two numbers without using modulus (%) operator.
Here, we will read two integers numbers and find their remainder. To get the remainder we will not use the modulus (%) operator.
Input Format
Take two integers n1 and n2 from the user.
Constraints
n1,n2>=1 && n1,n2<=10000
Output Format
It should print the remainder of the entered two numbers.
Sample Input 0
16 7
Sample Output 0
2 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a-(a/b)*b;
    printf("%d",c);
    
    

     
    return 0;
}

/*(Questions)Tony Stark (Ironman) is good with numbers, he must be, he is an engineer after all! But he is also lazy. He wants to compute the power of a number but he needs JARVIS to do it. Now, you have to write a program in C for JARVIS that can take a number 'N' and give the number 'N' raised to the power 'M'. The fate of the world rests on your shoulders, dear coder! You can use any/all libraries available at your dispense.
Input Format
5 2
Constraints
m, n >= 0 m, n <= 10000
Output Format
25
Sample Input 0
5 2
Sample Output 0
25*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    
    float a,b;
    int c;
    scanf("%f%f",&a,&b);
    c=pow(a,b);
    printf("%d",c);
    

    
    return 0;
}
/*(Questions)Program to subtract two integers without using Minus (-) operator.
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
-3*/

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

/*(Questions)Given a character and we have to find its ASCII value.
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
97
Sample Input 1
A
Sample Output 1
65*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char a;
    scanf("%c",&a);
    printf("%d",a);

      
    return 0;
}

/*(Question)In this program we are going to learn how to convert given feet into inches? Let’s understand what are feet and inches first...
Word Feet is a plural of foot which is a measurement unit of length and inch is also a measurement of unit length. A foot contains 12 inches. So the logic to convert feet to inches is quite very simple, we have to just multiply 12 into the given feet (entered through the user) to get the measurement in inches.
In this example, we will read value of feet from the user and displays converted inches to the standard output device.
Input Format
Take an integer n for feet.
Constraints
n>=0
n<=99999999
Output Format
It should print the equivalent inches of the entered value in feets.
Sample Input 0
15
Sample Output 0
180 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,c;
    scanf("%d",&n);
    c=n*12;
    printf("%d",c);
    
    
    

    
    return 0;
}

/*(Question)Use of pow, sqrt functions on floating point values. take three variables from user example a,b,c . a and b use in power and c use in sqrt function
Both functions are library functions and declare in math.h header file.
pow(2.0,3.0) then it will return 8.000000
sqrt(8.0) then it will return 2.828427
Input Format
Take a floating point value n.
Constraints
n>=0.00 2. n<=99999999.000000
Output Format
First line should print the power value value.
Second line should print the sqrt value.
Sample Input 0
2 3
8
Sample Output 0
8.000000
2.828427*/

