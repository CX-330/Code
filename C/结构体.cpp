// �ṹ����ϰ
// 20200505

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct zb {
	double x;
	double y;
	double z;
};

struct Monster {
	char name[20];
	int id;
	int level;
	int hp;
	zb zuob;

};
Monster guai[10];
void func1()
{
	srand(time(0));
	int i;
	for (i = 0; i < 10; i++)
	{
		strcpy(guai[i].name, "guai");
		guai[i].name[4] = i + '0';
		guai[i].id = i;
		guai[i].hp = rand() % 100;
		guai[i].level = rand() % 100;
		guai[i].zuob.x = rand() % 10000 / 100;
		guai[i].zuob.y = rand() % 10000 / 100;
		guai[i].zuob.z = rand() % 10000 / 100;
	}


}
void func2(int id)
{
	printf("������%s\n", guai[id].name);
	printf("�ȼ���%d\n", guai[id].level);
	printf("Ѫ����%d\n", guai[id].hp);
	printf("����x��%.2f\n", guai[id].zuob.x);
	printf("����y��%.2f\n", guai[id].zuob.y);
	printf("����z��%.2f\n", guai[id].zuob.z);

}

int main()
{
	func1();
	printf("���������ID���鿴������,����10�˳�\n");
	int id;
	scanf("%d", &id);
	while (id != 10)
	{
		func2(id);
		scanf("%d", &id);
	}

	return 0;
}
