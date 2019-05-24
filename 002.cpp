#include <stdio.h>　

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int a[5]={0};

	int y=0, min;

	printf("             找尋陣列中最小值的程式              \n");

	printf("-------------------------------------------------\n");   

	printf("請連續輸入五個數值：\n");

	for(y=0;y<5;y++)

	{

    printf("第%d筆資料：", y+1 );

    scanf("%d", &a[y]);

	}

	min=a[0];

	for(y=0;y<5;y++)

	{

 if (min>a[y])	

  {

   min=a[y];

}

	}

	printf("最小值是：%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
