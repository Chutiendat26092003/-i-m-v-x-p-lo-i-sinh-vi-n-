#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int xeploai(int diemasm,int lythuyet,int thuchanh);
int main(int argc, char *argv[])
{
	int i=0,diemasm,lythuyet,thuchanh;
	int xl;
	char ch;
	printf("Xin chao\n");
	do{
		printf("Diem cua sinh vien thu %d \n",i+1);
		i++;
		printf("Nhap diem asm : ");
		scanf("%d",&diemasm);
		printf("Nhap diem ly thuyet : ");
		scanf("%d",&lythuyet);
		printf("Nhap diem thuc hanh : ");
		scanf("%d",&thuchanh);
		xl = xeploai(diemasm,lythuyet,thuchanh);
	    printf("xep loai %d \n",xl); 
		switch(xl){
			case 0:
				printf("sinh vien truot\n");
				break;
			case 1:
				printf("sinh vien do\n");
				break;
			case 2:
				printf("sinh vien kha\n");
				break;
			case 3:
				printf("sinh vien gioi\n");
				break;
		}
		printf("Ban co muon nhap diem tiep khong (y/n) ??\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch != 'n');
	    printf("ket thuc !");
	
	return 0;
}
int xeploai(int diemasm,int lythuyet,int thuchanh)
{
	float tb;
	tb = (diemasm+lythuyet+thuchanh)/3;
	if(tb<40)
	   return 0;
	else if(40<=tb&&tb<60)
	        return 1;
	    else if(60<=tb&&tb<80)
	            return 2;
	        else if(80<=tb)
	               return 3;
	        
	  
	
	
	
}
