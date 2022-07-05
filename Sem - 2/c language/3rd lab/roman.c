#include<stdio.h>
int main(){
	int n;
	printf("Enter Number : \n");
	scanf("%d",&n);
	
		int last=n%10;
		int sectemp = n-last;
		int sec=sectemp%100;
		int third = n-last-sec;
		// printf("%d %d %d",last,sec,third);
		switch(third){
			case 100:
			printf("c");
			break;
			case 200:
			printf("cc");
			break;
			case 300:
			printf("ccc");
			break;
			case 400:
			printf("cd");
			break;
			case 500:
			printf("d");
			break;
			case 600:
			printf("dc");
			break;
			case 700:
			printf("dcc");
			break;
			case 800:
			printf("dccc");
			break;
			case 900:
			printf("cm");
			break;
		}
		switch(sec){
			case 10:
			printf("x");
			break;
			case 20:
			printf("xx");
			break;
			case 30:
			printf("xxx");
			break;
			case 40:
			printf("xl");
			break;
			case 50:
			printf("l");
			break;
			case 60:
			printf("lx");
			break;
			case 70:
			printf("lxx");
			break;
			case 80:
			printf("lxxx");
			break;
			case 90:
			printf("xc");
			break;
		}
		switch(last){
			case 1:
			printf("i");
			break;
			case 2:
			printf("ii");
			break;
			case 3:
			printf("iii");
			break;
			case 4:
			printf("iv");
			break;
			case 5:
			printf("v");
			break;
			case 6:
			printf("vi");
			break;
			case 7:
			printf("vii");
			break;
			case 8:
			printf("viii");
			break;
			case 9:
			printf("ix");
			break;
		}

	}
