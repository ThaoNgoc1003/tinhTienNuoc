#include <conio.h>
#include <stdio.h>
void main()
{
	int sonuoct;
	int sonuocn;
	int doituong;
	int tien;
	int songuoi;
	int ma;
	printf("Nhap so nuoc thang truoc:");
	scanf("%d", &sonuoct);
	printf("Nhap so nuoc thang nay:");
	scanf("%d", &sonuocn);
	printf("1:Doi tuong sinh hoat");
	printf("\n2:Doi tuong khong sinh hoat");
	printf("\nNhap lua chon ve doi tuong:");
	scanf("%d", &doituong);
	int sonuoc = sonuocn - sonuoct;
	if(doituong == 1)
		{
			printf("Nhap so nguoi");
			scanf("%d",&songuoi);
			if(sonuoc <= 4)
				tien = 6095 * songuoi;
			else if (sonuoc <= 6)
				tien = 10200 * songuoi;
			else if(sonuoc > 6)
				tien = 11400 * songuoi;
		}
	else if(doituong == 2)
		{
			printf("GB 12,22,32:Don vi san xuat");
			printf("\nGB 31: Co quan, Doan the, HC su nghiep");
			printf("\nGB 13,23,33:Don vi kinh doanh, Dich vu");
			printf("\nNhap ma thong tin nguoi dung:");
			scanf("%d", &ma);
			if(ma == 12 || ma == 22 || ma == 32)
				tien = 11040 * sonuoc;
			else if(ma == 31)
				tien = 11845 * sonuoc;
			else if(ma == 13 || ma == 23 || ma ==33)
				tien = 19435 * sonuoc;
		}
	printf("So nuoc thangg truoc: %d", sonuoct);
	printf("\nSo nuoc thang nay: %d", sonuocn);
	printf("\nSo nuoc da dung: %d", sonuoc);
	printf("\nSo tien nuoc: %d", tien);
	if(doituong == 1)
	{
		printf("\nDoi tuong sinh hoat");
		printf("\nSo nguoi: %d", songuoi);
	}
	else if(doituong == 2)
	{
		if(ma == 12 || ma == 22 || ma == 32)
			printf("\nDon vi san xuat");
		else if(ma == 31)
			printf("\nCo quan, Doan the, HC su nghiep");
		else if(ma == 13 || ma == 23 || ma ==33)
			printf("\nDon vi kinh doanh, Dich vu");
	}
	getch();
}