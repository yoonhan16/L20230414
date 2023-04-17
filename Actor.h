#pragma once
#include "Inven.h"

class FItem;

class AActor
{
public:
	AActor();
	virtual ~AActor();

	void AddItem(FItem* newItem);
	FItem* UseItem(int Index);                       // const 를 앞에 붙여 리턴값을 고정시키기, 어디에 붙냐에 따라 달라짐

protected:
	FInven Inventory;

};

