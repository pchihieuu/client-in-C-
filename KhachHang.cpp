#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

void TienThoi(int tienmondo, int tienkhachhang)
{
	int Bien_phu = 0, bienphu1 = 0, bienphu2 = 0, bienphu3 = 0, bienphu4 = 0, bienphu5 = 0, bienphu6 = 0, bienphu7 = 0, bienphu8 = 0;
	int Tienthoi = tienkhachhang - tienmondo;
	if (tienmondo == tienkhachhang)
		printf("\nSo tien da du\n");
	else
	{
		while (Tienthoi >= 500000)
		{
			Tienthoi -= 500000;
			Bien_phu++;
		}
		printf("\nThoi lai %d to 500.000 VND\n", Bien_phu);
		while (Tienthoi >= 200000)
		{
			Tienthoi -= 200000;
			bienphu1++;
		}
		printf("\t %d to 200.000 VND\n", bienphu1);
		while (Tienthoi >= 100000)
		{
			Tienthoi -= 100000;
			bienphu2++;
		}
		printf("\t %d to 100.000 VND\n", bienphu2);
		while (Tienthoi >= 50000)
		{
			Tienthoi -= 50000;
			bienphu3++;
		}
		printf("\t %d to 50.000 VND\n", bienphu3);
		while (Tienthoi >= 20000)
		{
			Tienthoi -= 20000;
			bienphu4++;
		}
		printf("\t %d to 20.000 VND\n", bienphu4);
		while (Tienthoi >= 10000)
		{
			Tienthoi -= 10000;
			bienphu5++;
		}
		printf("\t %d to 10.000 VND\n", bienphu5);
		while (Tienthoi >= 5000)
		{
			Tienthoi -= 5000;
			bienphu6++;
		}
		printf("\t %d to 5.000 VND\n", bienphu6);
		while (Tienthoi >= 2000)
		{
			Tienthoi -= 2000;
			bienphu7++;
		}
		printf("\t %d to 2.000 VND\n", bienphu7);
        while (Tienthoi >= 1000)
		{
			Tienthoi -= 1000;
			bienphu8++;
		}
		printf("\t %d to 1.000 VND\n", bienphu8);
		if (Tienthoi == 500)
			printf("\t va 1 to 500 VND\n");
	}
}
int main()
{
	int tienmondo, tienkhachhang;
	do
	{
		printf("\nNhap tien mon do: ");
		scanf("%d", &tienmondo);
		if (tienmondo % 500 != 0)
			printf("\nSo tien mon do khong phu hop\n");
	} while (tienmondo % 500 != 0);
	do
	{
		printf("\nNhap tien khach hang: ");
		scanf("%d", &tienkhachhang);
		if (tienkhachhang % 500 != 0 || tienkhachhang < tienmondo)
			printf("\nSo tien khach hang khong phu hop\n");
	} while (tienkhachhang % 500 != 0 || tienkhachhang < tienmondo);
	TienThoi(tienmondo, tienkhachhang);
	getch();
	return 0;
}