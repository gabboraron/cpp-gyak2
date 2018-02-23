#include <stdio.h>

int main()
{
    int lower = -120;
    int upper = 80;
    int step = 10;
    /* ez jobb: */
    /*#define LOWER = -120;
    #define UPPER = 80
    #define STEP = 10
    #define FAHR2CELS(x) (5./9*((x)-32)*/
    /* *** */
    int i = lower;
    /*int i = LOWER;*/

    for(; i<=  upper; i+= step){
        printf("%dFahrenheit\t%fCelsius\n",i,5./9*(i-32));
        /*printf("%dFahrenheit\t%fCelsius\n",i,FAHR2CELS(i));*/
    }

    return 0;
}
