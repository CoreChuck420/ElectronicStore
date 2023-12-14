#pragma once
#include "IElectronics.h"
using namespace std;
class Consumer :virtual public IElectronics //Бытовая электроника
{
public:
	Consumer(int price);
	void Show()override;
protected:
	int _price;
};
class Microwave final : public Consumer
{
public:
	Microwave(int price, int voltage); //микроволновка
		void Show()override;
private:
	int _voltage;
};
class Stove final : public Consumer //Кухонная плита
{
public:
	Stove(int price, int burner);
	void Show()override;
private:
	int _burner; //количество конфорок
};