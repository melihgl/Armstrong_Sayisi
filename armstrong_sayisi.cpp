//Girilen sayinin Armstrong Sayýsý olup olmadýðýný bulan program
//Armstrong Sayýsý nedir? Tek tek basamaklarýnýn küplerinin toplamý kendisini veren sayýdýr.

#include <stdio.h>
#include <math.h>
int main () {
	
	int sayi,toplam=0,geciciSayi,basamak;
	printf("sayiyi yaziniz:\n");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	while(geciciSayi!=0){
		basamak=geciciSayi%10; //3,7,1
		toplam+=pow(basamak,3); //3'ün küpü+7'nin küpü+1'in küpü sayi=371
		geciciSayi/=10;
	}
	if(toplam==sayi){
		printf("%d sayi armstrong sayisidir",sayi);
	}
	else
		printf("%d armstrong sayisi degildir",sayi);
	return 0;}
