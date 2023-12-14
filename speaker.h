#pragma once
#include "Consumer.h"
#include "Portable.h"
class Speaker final :public Consumer, Portable
{
public:
	Speaker(int price, string model);
	void Show()override;

};