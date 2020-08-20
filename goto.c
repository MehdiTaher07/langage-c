#include<stdio.h>
int test_goto1(int a){
	if(a>0)
		goto label1;
		return 1;
		label1:
			return 2;
}
int test_goto2(int a){
	int i;
	for(i=0;i<10;i++)
		if(i==a)
			goto label2;
		return 4;
		label2:
			return 8;
}
main(){
	printf("res==%d",test_goto1(1));//2
	printf("res==%d",test_goto1(-1));//1
	printf("res==%d",test_goto2(10));//4
	printf("res==%d",test_goto2(5));//8
}
