#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i;
	int numbers[n];
	do{
		printf("****************MENU*****************\n");
		printf("1. Nhap vao mang\n");
		printf("2. In ra mang\n");
		printf("3. Sao chep mang vao mang khac\n");
		printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
		printf("5. Dao nguoc mang\n");
		printf("6. Nhap vao 1 ki tu, tim kiem ki tu do trong mang\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban:");
		
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				
				printf("So phan tu cua mang : ");
				scanf("%d",&n);
				printf("Nhap vao gia tri cac phan tu :\n");
				for(i = 0; i < n; i++){
					printf("numbers[%d] = ",i);
					scanf("%d",ptr );
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				exit(0);
		}
	}while (1 ==1 );
}
