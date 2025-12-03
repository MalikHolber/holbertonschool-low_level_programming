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


int a;

srand(time(NULL));

a = rand() - RAND_MAX / 2;

if(a>0){
printf("%d is positive", a);
}

else if(a == 0){
printf("%d is a zero",a);
}

else
printf("%d is a negative", a);

return(0);


}
