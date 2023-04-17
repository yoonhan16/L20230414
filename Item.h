#pragma once
#include "Inven.h"

class FItem : public FInven
{
public:
	FItem();
	virtual ~FItem();

	virtual void Use() = 0;






};

