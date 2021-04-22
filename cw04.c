#include <stdio.h>

int main()
{
int n;
int i;
i=1;
unsigned long long wynik;
wynik=1;
printf("Program wypisuje wartosci silni malejaco. Podaj prosze wartosc calkowita z zakresu od 0 do 20\n n=");
scanf("%d" , &n);
for(n=n;n>0;n--)
{
wynik=n;
do{
	
	n=n--;
	wynik=wynik*n;
	
}while(n>0);
printf("n=%d silnia=%llu\n",n , wynik);
}
return 0;
}
