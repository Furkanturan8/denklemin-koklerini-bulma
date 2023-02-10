#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // soru:ax^2+bx+c olan denkleminin koklerini yazdirma.
    int a,b,c;
    float delta;
    float x1,x2;
	
	printf("Degerleri lutfen kokleri tamsayi olacak sekilde yaziniz. Yoksa irrasyonel sonuc cikar ! \n\n");
	
    printf("a degerini giriniz:");
    	scanf("%d",&a);
    printf("b degerini giriniz:");
   	 	scanf("%d",&b);
    printf("c degerini giriniz:");
    	scanf("%d",&c);

    delta=(b*b)-(4*a*c);

    x1=(-b+sqrt(delta))/(2.0*a);

    x2=(-b-sqrt(delta))/(2.0*a);

    printf("\nx1:%.3f \nx2:%.3f",x1,x2);

    return 0;
}
