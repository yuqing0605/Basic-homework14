//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int side1,side2,side3;
	printf("輸入邊長長度:");
	scanf("%d",&side1);
    printf("輸入邊長長度:");
	scanf("%d",&side2);
	printf("輸入邊長長度:");
	scanf("%d",&side3);

	if(side1+side2>side3&&side1+side3>side2&side2+side3>side1)
	printf("是個三角形\n");
	else
	printf("不是三角形\n");

	system("PAUSE");
	return 0;
}
