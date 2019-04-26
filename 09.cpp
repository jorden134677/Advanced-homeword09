#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int month,day,s;
	
    printf("請輸入一個日期的月份，日期:",month,day);
    scanf("%d,%d",&month,&day);
	s=(month*2+day)%3;
	
	printf("您的運勢為");
	if(s==0){
		printf("普通\n"); 
	}
	else if(s==1){
		printf("吉\n"); 
	}
	else if(s==2){
		printf("大吉\n"); 
	}
	
	system("PAUSE");
	return 0;
}
