#include <Sumo.h>
Sumo walle;

void setup() {}

void loop()
{
  walle.forward(100,100,1000);
  walle.reverse(100,100,1000);
  walle.rotate(250);
}
