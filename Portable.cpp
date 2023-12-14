#include "Portable.h"
#include <iostream>
using namespace std;
Portable::Portable(string model) : _model(model)
{

}
void Portable::Show()
{
	cout << "model is: " << _model << endl;
}
Camera::Camera(string model, int pixels) : Portable(model), _pixels(pixels)
{

}
void Camera::Show()
{
	cout << "Model of the camera: " << _model << " Megapixels: " << _pixels << endl;
}
Tablet::Tablet(string model, int diagonal) : Portable(model), _diagonal(diagonal)
{

}
void Tablet::Show()
{
	cout << "Tablet, price is: " << _model << " diagonal is: " << _diagonal << endl;
}