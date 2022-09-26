//notlarýný yazsýn ve kaç kiþi hangi notu almýþ göstersin 5-4-3-2-1 cinsinden 


#include <stdio.h>
int main ()
{
	int notu;
	int a,b,c,d,i; 
	int notadeti;
	float ortalama;
	int toplam=0 ; 
		
	a = 0;
	b = 0;
	c = 0 ;
	d = 0 ,

	printf ("kac not yazmak istiyorsunuz ? : ");
	scanf ("%d",&notadeti);
	
	//printf ("not giriniz : ");
//	scanf ("%d",&notu);
	
	
	for (i = 1 ; i <= notadeti ; i++ )
	{
		printf ("not giriniz : ");
		scanf ("%d",&notu);
		
		if (notu >= 90)
		{
			a= a+1 ;
			toplam = toplam + notu ;			
		}
		
		else if (notu >= 70)
		{
			b = b+1 ;
			toplam = toplam + notu ;
		}
		
		else if (notu >= 50)
		{
			c = c + 1 ;
			toplam = toplam + notu ;
		}
		
		else if (notu >= 0)
		{
			d = d + 1 ;
			toplam = toplam + notu ;
		}
		
	}
	
	ortalama = (float) toplam / notadeti ; 
	printf ("NOT ORTALAMASI : %.2f \n\n",ortalama);
	
	printf ("A NOTU SAYISI : %d \n",a);
	printf ("B NOTU SAYISI : %d \n",b);
	printf ("C NOTU SAYISI : %d \n",c);
	printf ("D NOTU SAYISI : %d \n\n",d);

	
	
	system ("pause");	
	
	
	
}
