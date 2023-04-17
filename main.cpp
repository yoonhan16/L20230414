#include <iostream>
#include "Actor.h"
#include "Knife.h"
#include "Bread.h"
#include "Drink.h"


using namespace std;

int main()
{
	AActor* Player = new AActor();

	Player->AddItem(new FKnife());
	Player->AddItem(new FBread());
	Player->AddItem(new FDrink());

	for (int i = 0; i < 3; i++)
	{
		FItem* SelectedItem = Player->UseItem(i);                            //�ڽ� Ŭ������ Ư�� �Լ��� �������� ���� ���, �������Ʈ�� ����ȯ �� Ŀ���� �̺�Ʈ ȣ��� ���� ����

		if (dynamic_cast<FKnife*>(SelectedItem))                              //�ڽ� Ŭ������ Ư�� �Լ��� �������� ���� ���, �������Ʈ�� ����ȯ �� Ŀ���� �̺�Ʈ ȣ��� ���� ����
		{
			dynamic_cast<FKnife*>(SelectedItem)->Parry();  
		}
		else if (dynamic_cast<FBread*>(SelectedItem))
		{
			dynamic_cast<FBread*>(SelectedItem)->Hit();
		}
		else if(dynamic_cast<FDrink*>(SelectedItem))
		{
			dynamic_cast<FDrink*>(SelectedItem)->Pour();
		}
	}
	




	return 0;
}
