#include "Consumer.h"
#include <iostream>
using namespace std;
Consumer::Consumer(int price) : _price(price)
{

}
void Consumer::Show()
{
	cout << "Price is: " << _price << endl;
}
Microwave::Microwave(int price, int voltage) : Consumer(price), _voltage(voltage)
{

}
void Microwave::Show()
{
	cout << "Price of the microwave: " << _price << " voltage is: " << _voltage << endl;
}
Stove::Stove(int price, int burner) : Consumer(price), _burner(burner)
{

}
void Stove::Show()
{
	cout << "Stove, price is: " << _price << " number of burners is: " << _burner << endl;
}