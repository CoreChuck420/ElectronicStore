#pragma once
#include "IElectronics.h"
using namespace std;
class Portable :virtual public IElectronics //Портативная электроника
{
public:
	Portable(string model);
	void Show()override;
protected:
	string _model;
};
class Camera final : public Portable
{
public:
	Camera(string model, int pixels);
	void Show()override;
private:
	int _pixels;
};
class Tablet final : public Portable
{
public:
	Tablet(string model, int diagonal);
	void Show()override;
protected:
	int _diagonal;
};
