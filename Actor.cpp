#include "Actor.h"

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::AddItem(FItem* newItem)
{
	Inventory.AddItem(newItem);
}

FItem* AActor::UseItem(int Index)
{

	return Inventory.GetItem(Index);
}
