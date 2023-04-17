#pragma once
#include "Inven.h"

class FItem;

class AActor
{
public:
	AActor();
	virtual ~AActor();

	void AddItem(FItem* newItem);
	FItem* UseItem(int Index);                       // const �� �տ� �ٿ� ���ϰ��� ������Ű��, ��� �ٳĿ� ���� �޶���

protected:
	FInven Inventory;

};

