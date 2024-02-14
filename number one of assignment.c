#include <stdio.h>
#include <stdlib.h>

int main() {
  float start,end,increment,farenheit,celcius;
   //Accepting input from the user
    printf ("Enter starting value in farenheight:");
    scanf("%f", & start);
    printf ("Enter the ending value in farenheit  :");
    scanf("%f", & end);
    printf ("Enter the increment value  :");
     scanf("%f", & increment);
     //printing table header
     printf("\nFarenheit\tce;cius\n");
     printf("................\n");
     //loop to generate the conversion table
      for (farenheit =start;farenheit<=end;farenheit+=increment){
            celcius=(farenheit-32)*5/9;
      printf("%8.2f\t%8.2f\n",
             farenheit,celcius);
      }
      return 0;
}
