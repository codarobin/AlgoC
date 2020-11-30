#include <stdio.h>

int main() {
//short
int i ;
short sh = 32750;
short *sptr;
sptr=&sh;
//int
int a = 2129325802;
int *iptr;
iptr = &a;

//long int
long int li = 8929211925480730606;
long int *lptr;
lptr=&li;

//float 
float fl = 55.5;
float *fptr;
fptr=&fl;

//double
double d = 33.255;
double *dptr;
dptr=&d;

//long double
long double ld = 666.2365;
long double *ldptr;
ldptr=&ld;


//conversion du pointeur du type en un pointeur char
unsigned char *cptr;
cptr  = (unsigned char *)sptr;
//affichage des octets de short
for (i = 0; i < sizeof(short); i++)
printf("%d eme octet = %hhx \n",i+1,*(cptr+i));

cptr = (unsigned char *)iptr;
//affichage des octets de int 
printf("\n");
for (i = 0; i < sizeof(int); i++)
printf("%d eme octet = %hhx \n",i+1,*(cptr+i));

cptr = (unsigned char *)lptr;
//affichage des octets de long int
printf("\n");   
for (i = 0; i < sizeof(long int); i++)
printf("%d eme octet = %hhx \n",i+1,*(cptr+i));

cptr = (unsigned char *)fptr;
//affichage des octets de float
printf("\n");   
for (i = 0; i < sizeof(float); i++)
printf("%d eme octet = %hhx \n",i+1,*(cptr+i));


cptr = (unsigned char *)dptr;
//affichage des octets de double
printf("\n");   
for (i = 0; i < sizeof(double); i++)
printf("%d eme octet = %hhx \n",i+1,*(cptr+i));


cptr = (unsigned char *)ldptr;
//affichage des octets de long double
printf("\n");   
for (i = 0; i < sizeof(long double); i++)
printf("%d eme octet = %hhx \n",i+1,*(cptr+i));

return 0;

}
