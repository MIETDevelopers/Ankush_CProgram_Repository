#include<stdio.h>//preprocessor directive to include stantard input or output header file
int main(){//where the execution start from the main
	int num;//decalre the variable
	printf("Enter the number\n");
	scanf("%d", &num);//The value of num is take by user
	if (num%2==0)//num are divisible by 2
	{printf("This number is even=%d\n",num);//if the num is divisible by 2 print if condition
	
	}
	else{
		printf("This number is odd=%d\n",num);//if the num is not divisible by 2 print else condition
	}
	return 0;//return statement
}
