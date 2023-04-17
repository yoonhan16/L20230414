#pragma once
#include "Actor.h"
#include <vector>

using namespace std;

class FItem;

class FInven : public AActor
{
public:
	FInven();
	virtual ~FInven();

	void AddItem(FItem* newItem);
	FItem* GetItem(int Index);

protected:

	vector<FItem*> Items;

};

