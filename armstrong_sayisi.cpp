//Girilen sayinin Armstrong Say�s� olup olmad���n� bulan program
//Armstrong Say�s� nedir? Tek tek basamaklar�n�n k�plerinin toplam� kendisini veren say�d�r.

#include <stdio.h>
#include <math.h>
int main () {
	
	int sayi,toplam=0,geciciSayi,basamak;
	printf("sayiyi yaziniz:\n");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	while(geciciSayi!=0){
		basamak=geciciSayi%10; //3,7,1
		toplam+=pow(basamak,3); //3'�n k�p�+7'nin k�p�+1'in k�p� sayi=371
		geciciSayi/=10;
	}
	if(toplam==sayi){
		printf("%d sayi armstrong sayisidir",sayi);
	}
	else
		printf("%d armstrong sayisi degildir",sayi);
	return 0;}
