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
		FItem* SelectedItem = Player->UseItem(i);                            //자식 클래스의 특수 함수를 가져오기 위한 방법, 블루프린트의 형변환 후 커스텀 이벤트 호출과 같은 느낌

		if (dynamic_cast<FKnife*>(SelectedItem))                              //자식 클래스의 특수 함수를 가져오기 위한 방법, 블루프린트의 형변환 후 커스텀 이벤트 호출과 같은 느낌
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
