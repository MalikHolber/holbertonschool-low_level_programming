/* malikin kodu
* duzgun yazilmisdir haa
*/

# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/** asagida deyerlerle cavab alinacag
* burada if-den istifade etmek lazimm gelecek
*/


int main (void){


int n;

srand(time(NULL));

n = rand() - RAND_MAX / 2;

if(n>0){
printf("%d is positive\n", n);
}

else if(n < 0){
printf("%d is negative\n",n);
}

else
printf("%d is zero\n", n);

return(0);


}
