#include <stdlib.h>
#include <stdio.h>

int  click, clock, contador=0;
char strong[2], *string;

int main ()
{
string = &strong[2];


scanf ("%d\n", &clock);



string = ((char*) malloc(sizeof(char) * clock));


for (click=0; click<clock; click++) {

scanf ("%c", &strong[click]);

}


for (click=0;click<clock;click++){

if ((strong[click]=='a') &&  (strong[click+1]=='a')) {

    while( strong[click]=='a'){
contador++;
click++;
    }
}

}


printf ("%d", contador);


free(string);

return 0;

}

//H.I.
