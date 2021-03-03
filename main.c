#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	float s1,s2,sonuc,tol=0;	
	int s3,s4,i,secim,secim1;
	
	printf("Olasilik sayisi:");
	scanf("%d",&s4);
	float dizi[s4];
	
	printf("\n\n");
	
	for(i=0;i<s4;i++){
	printf("P(A%d) olasiligi: ",i+1);
	scanf("%f",&s1);
	printf("P(B/A%d) olasiligi: ",i+1);
	scanf("%f",&s2);
	sonuc=s1*s2;
	dizi[i]=sonuc;
	printf("\n");
	}
	for(i=0;i<s4;i++)
		tol+=dizi[i];
		
	printf("Toplam Olasilik: %lf",tol);
	printf("\n\n");
	

	printf("\n");
		printf("Bayes hesaplamak icin olasilik secin: ");
		scanf("%d",&secim);
		printf("\n");
		printf("Bayes: %lf",(dizi[secim-1]/tol));
		printf("\n");
		scanf("%d",&secim1);
	

	
	getchar();
	getchar();	
	return 0;
}
