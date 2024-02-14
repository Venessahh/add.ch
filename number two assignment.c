#include <stdio.h>
#include <stdlib.h>
    int main ()
    {
        printf("A table showing the Farenheit to celcius program");
        int a, b, c;
    printf("Enter Starting Value");
    scanf("%d" , &a);
    printf("Enter Interval Value");
    scanf("%d" , &b);
    printf("Enter Ending Value");
    scanf("%d" , &c);
    while (a<=c)
    {
     printf("%4d degrees F - %4d degrees C\n" ,
     a, (a-32)*5/9);
    a=a +b;
    }
return 0;
}
