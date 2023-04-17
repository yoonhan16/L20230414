#pragma once
#include "Item.h"

class FBread : public FItem
{
public:
	FBread();
	virtual ~FBread();

	virtual void Use() override;

	virtual void Hit();


};

