//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int side1,side2,side3;
	printf("��J�������:");
	scanf("%d",&side1);
    printf("��J�������:");
	scanf("%d",&side2);
	printf("��J�������:");
	scanf("%d",&side3);

	if(side1+side2>side3&&side1+side3>side2&side2+side3>side1)
	printf("�O�ӤT����\n");
	else
	printf("���O�T����\n");

	system("PAUSE");
	return 0;
}
