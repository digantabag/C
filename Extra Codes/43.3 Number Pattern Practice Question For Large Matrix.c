/**
 * C program to print number pattern for large number more than 58
 */

#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    // First upper half of the pattern
    for(i=N; i>=1; i--)//1
    {
        // First inner part of upper half
        for(j=N; j>i; j--)//1.1
        {
            printf("%d ", j);
        }

        // Second inner part of upper half
        for(j=1; j<=(i*2-1); j++)//1.2
        {
            printf("%d ", i);
        }

        // Third inner part of upper half
        for(j=i+1; j<=N; j++)//1.3
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    // Second lower half of the pattern
    for(i=1; i<N; i++)//2
    {
        // First inner part of lower half
        for(j=N; j>i; j--)//2.1
        {
            printf("%d ", j);
        }

        // Second inner part of lower half
        for(j=1; j<=(i*2-1); j++)//2.2
        {
            printf("%d ", i+1);
        }

        // Third inner part of lower half
        for(j=i+1; j<=N; j++)//2.3
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
/*
output:
Enter N: 3
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/

/*
explanation:

here n=3
loops by number
loop 1: i=n=3,i>=1, i-- so i=3,2,1

in 1

1st loop
i=3

in 1.1 > j=n=3,j>i=3;j-- condition failed so j=nothing possible value; so print nothing

in 1.2 > j=1,j<=5(2*i-1=2*3-1=6-1=5),j++ so j=1,2,3,4,5 for 5 output of j print value of i=3, so it return
3 3 3 3 3

in 1.3 > j=4[i+1=3+1=4],j<=n=3,j++ condition failed so j=nothing possible value so print nothing
print \n
i-- or now i=3-1=2, i=2 so loop continue

so on first loop of No.1 loop print 
3 3 3 3 3
>

2nd loop
now  i=2 in 1, and n=3 in 1

in 1.1> j=n=3,j>i=2;j-- so j=3 only
print j
return 
3

in 1.2 > j=1,j<=3(2*i-1=2*2-1=4-1=3),j++ so j=1,2,3 for 3 output of j print value of i=2, so it return 2 2 2
counting previous 1.1 final return 3 2 2 2

in 1.3 > j=3[i+1=2+1=3],j<=n=3,j++ so j=3 only print j
return 
3
counting previous 1.1 & 1.2 final return 3 2 2 2 3
on 2nd loop of 1
output is 3 2 2 2 3
print \n
i--

so after 1st and 2nd loop of i it print
3 3 3 3 3 
3 2 2 2 3
>

i--, i=2-1=1 i=1 so loop continue

3rd loop
now i=1,n=3 in loop 1

in 1.1> j=n=3,j>i=1;j-- so j=3,2
print values of j
return 
3 2

in 1.2> j=1,j<=1(2*i-1=2*1-1=2-1=1),j++ so j=1 for 1 output of j print value of i=1, so it return 1
counting previous 1.1 final return 3 2 1

in 1.3 > j=2[i+1=1+1=2],j<=n=3,j++ so j=2,3
print values of j
return 
2 3
counting previous 1.1 & 1.2 final return 3 2 1 2 3
print \n
i--

so after 1st,2nd&3rd loop of 1
output is

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3

i--,i=1-1=0 because i=0 loop 1 ends because condition i=n=3,i>=1, i-- so i=3,2,1

now loop 2 start
loop 2: i=1, i<N=3; i++ so i=1,2

1st loop of loop 2
i=1,n=3
in 2.1>j=N=3; j>i=1; j-- so j=3,2
print values of j
return
3 2

in 2.2>j=1; j<=1(i*2-1=1*2-1=1); j++ so j=1 for 1 output of j print i+1, value of i=1 so i+1=2, so it return 2
counting previous 2.1 final return 3 2 2

in 2.3>j=2(i+1=1+1=2); j<=N=3; j++ so j=2,3
print values of j
return
2 3

counting previous 2.1 & 2.2 final return 3 2 2 2 3
print \n
i++

so after 1st loop of loop 2
3 2 2 2 3
>

i++,i=1+1=2 loop continue
2nd loop of loop 2
i=2;n=3

in 2.1>j=N=3; j>i=2; j-- so j=3 only
print values of j
return
3

in 2.2>j=1; j<=3(2*2-1=2*2-1=3); j++ so j=1,2,3 for 3 output of j print i+1, value of i=2 so i+1=3, so it return 3 3 3
counting previous 2.1 final return 3 3 3 3

in 2.3>j=3(i+1=2+1=3); j<=N=3; j++ so j=3 only
print values of j
return
3
counting previous 2.1 & 2.2 final return 3 3 3 3 3
print \n
i++
so after 1st & 2nd loop of loop 2
3 2 2 2 3
3 3 3 3 3

i++,i=2+1=3 because i=3 loop 2 ends because condition i=1, i<N=3; i++ so i=1,2

now both loop 1 and loop 2 ends
so final output is 
output of loop 1
output of loop 2

or

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/

/*
printing numbers with loops can print more more than a matrix that's why for big matrices we breaks them in loops not use 2d array
*/