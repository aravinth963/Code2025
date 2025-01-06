#include<stdio.h>
int main(){
	int res,a,b,num;
	
	printf("Enter two your number a and b : ");
	scanf("%d %d",&a,&b);
	
	printf("Enter the number which operator you want : ");
	printf("\n1 for addition.");
	printf("\n2 for subraction.");
	printf("\n3 for multiplication.");
	printf("\n4 for division.");
	printf("\n5 for mouduls.");
	scanf("%d",&num);
	
	switch(num){
	case 1:
		res=a+b;
		printf("%d\n",res);
		break;
	case 2:
		res=a-b;
		printf("%d\n",res);
		break;
	case 3:
		res=a*b;
		printf("%d\n",res);
		break;
	case 4:
		res=a/b;
		printf("%d\n",res);
		break;
	case 5:
		res=a%b;
		printf("%d\n",res);
		break;
	default:
		printf("Enter valid operator\n");
	}
	return 0;
	}
