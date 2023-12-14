#include "speaker.h"
#include <iostream>
using namespace std;
Speaker::Speaker(int price, string model): Portable(model), Consumer(price)
{

}

void Speaker::Show()
{
	cout << "Speker's price is: "<< _price<<" Model of speaker is: " << _model << endl;
}