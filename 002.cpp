#include <stdio.h>�@

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int a[5]={0};

	int y=0, min;

	printf("             ��M�}�C���̤p�Ȫ��{��              \n");

	printf("-------------------------------------------------\n");   

	printf("�гs���J���ӼƭȡG\n");

	for(y=0;y<5;y++)

	{

    printf("��%d����ơG", y+1 );

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

	printf("�̤p�ȬO�G%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
