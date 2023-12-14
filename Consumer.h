#pragma once
#include "IElectronics.h"
using namespace std;
class Consumer :virtual public IElectronics //������� �����������
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
	Microwave(int price, int voltage); //�������������
		void Show()override;
private:
	int _voltage;
};
class Stove final : public Consumer //�������� �����
{
public:
	Stove(int price, int burner);
	void Show()override;
private:
	int _burner; //���������� ��������
};