#include <stdio.h>

int main()
{
	int price =0;
	int bill = 0;

	printf("请输入金额：");

	scanf("%d",&price);
	printf("请输入票面：");
	scanf("%d",&bill);

	printf("应找您：%d\n",bill-price);

	return 0;
}
