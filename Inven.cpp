#include "Inven.h"

FInven::FInven()
{
}

FInven::~FInven()
{
}

void FInven::AddItem(FItem* newItem)
{
	Items.push_back(newItem);
}

FItem* FInven::GetItem(int Index)
{

	return Items[Index];
}
