#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int month,day,s;
	
    printf("�п�J�@�Ӥ��������A���:",month,day);
    scanf("%d,%d",&month,&day);
	s=(month*2+day)%3;
	
	printf("�z���B�լ�");
	if(s==0){
		printf("���q\n"); 
	}
	else if(s==1){
		printf("�N\n"); 
	}
	else if(s==2){
		printf("�j�N\n"); 
	}
	
	system("PAUSE");
	return 0;
}
