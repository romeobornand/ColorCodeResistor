/*
 * Test.cpp
 *
 *  Created on: 18 nov 2021
 *      Author: RODOR
 */

#include "Resistor.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
  long valueIn;

  long valueOut;

  Resistor r;

  cout << "Insert value:";
  cin >> valueIn;

  r.SetValue(valueIn);

  valueOut = r.getValue() * r.getMultiplier();

  cout << valueOut << endl;
  if(valueIn == valueOut) cout << "Test succeeded!";

  return 0;
}










