#pragma once
#include "Item.h"

class FKnife : public FItem
{
public:
	FKnife();
	virtual ~FKnife();
	
	virtual void Use() override;

	virtual void Parry();
};

