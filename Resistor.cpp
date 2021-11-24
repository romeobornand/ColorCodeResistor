/* Project: ColorResistor
 * File Name: Resistor.cpp
 * Author: Michele Mignola, Gabriele Cereghetti, Romeo Bornand
 * Date: 09-12.2021
 * Description:
 * This is the .cpp file with the implementation of all the functions of the
 * Resistor class
 *
 *
 */

#include "Resistor.h"
#include <cmath>

Resistor::Resistor()
{
  // ctor
}

Resistor::~Resistor()
{
  // dtor
}

void Resistor::setValueBand(const int b, const int v)
{
  band[b - 1] = v;  // set value 'v' for the 'n' band
}

int Resistor::getValueBand(const int n)
{
  return band[n - 1];  // return value of the 'n' band
}

void Resistor::setnBand(const int x)
{
  n = x;  // set number of bands
}

int Resistor::getValue()
{
  if (n == 3)  // resistor has 3 bands
    rvalue = band[0] * 10 + band[1];
  else if (n == 4)  // resistor has 4 bands
    rvalue = band[0] * 10 + band[1];
  else if (n == 5)  // resistor has 5 bands
    rvalue = band[0] * 100 + band[1] * 10 + band[2];
  else if (n == 6)  // resistor has 6 bands
    rvalue = band[0] * 100 + band[1] * 10 + band[2];

  return rvalue;  // return value of resistance
}

double Resistor::getMultiplier()
{
  double mult = 0;  // create variable for multiplier
  if (n >= 5)       // resistor has 5 or 6 bands
  {
    // take value from the 4th band for multiplier
    if (band[3] < 10)
      mult = pow(10, band[3]);  // calculate from exponent
    else if (band[3] == 10)
      mult = 0.1;
    else if (band[3] == 11)
      mult = 0.01;
  }
  if (n <= 4)  // resistor has 3 or 4 bands
  {
    // take value from the 3rd band for multiplier
    if (band[2] < 9)
      mult = pow(10, band[2]);  // calculate from exponent
    else if (band[2] == 10)
      mult = 0.1;
    else if (band[2] == 11)
      mult = 0.01;
  }
  return mult;  // return the value of multiplier
}

double Resistor::getTolerance()
{
  int color = 0;
  if (n == 3)  // resistor has 3 band
    return tolerance = 20;
  else if (n == 4)  // resistor has 4 band
  {
    color = band[3];  // get the value from the 4th band
  }
  else  // resistor has 5 or 6 band
  {
    color = band[4];  // get the value from the 5th band
  }
  switch (color)
  {
    case 0:  // Brown
      tolerance = 1.0;
      break;
    case 1:  // Red
      tolerance = 2.0;
      break;
    case 2:  // Green
      tolerance = 0.5;
      break;
    case 3:  // Blue
      tolerance = 0.25;
      break;
    case 4:  // Violet
      tolerance = 0.1;
      break;
    case 5:  // Grey
      tolerance = 0.05;
      break;
    case 6:  // Gold
      tolerance = 5.0;
      break;
    case 7:  // Silver
      tolerance = 10.0;
      break;
    case 8:  // None
      tolerance = 20.0;
      break;
  }
  return tolerance;  // return value of tolerance
}

int Resistor::getTempCoeff()
{
  int color = -1;
  if (n == 6)
  {
    color = band[5];  // get the value from the 6th band
  }
  switch (color)
  {
    case 0:  // Black
      tempCoeff = 250;
      break;
    case 1:  // Brown
      tempCoeff = 100;
      break;
    case 2:  // Red
      tempCoeff = 50;
      break;
    case 3:  // Orange
      tempCoeff = 15;
      break;
    case 4:  // Yellow
      tempCoeff = 25;
      break;
    case 5:  // Green
      tempCoeff = 20;
      break;
    case 6:  // Blue
      tempCoeff = 10;
      break;
    case 7:  // Violet
      tempCoeff = 5;
      break;
    case 8:  // Grey
      tempCoeff = 1;
      break;
    default:
      tempCoeff = 0;
  }
  return tempCoeff;  // return value of temp. coeff.
}

int Resistor::getnBand()
{
  return n;  // return numbers of bands
}

void Resistor::SetValue(long val)
{
  int exp = 0;   // variable for exponent
  if (val <= 0)  // value is 0 or not a valid number
  {
    // all the bands for value set to zero
    band[0] = 0;
    band[1] = 0;
    band[2] = 0;
    band[3] = 0;
  }
  else  // value is >0
  {
    for (; val > 999; exp++)  // max 3 digit
      val = val / 10;         // change value and exponent
    for (; val < 100; exp--)  // min 3 digit
      val = val * 10;         // change value and exponent

    // set value for the first three bands
    band[0] = val / 100;
    band[1] = ((val % 100) - (val % 10)) / 10;
    band[2] = val % 10;

    // set value for the 4th band (exponent)
    if (exp == -1)
      band[3] = 10;
    else if (exp == -2)
      band[3] = 11;
    else
      band[3] = exp;
  }
}

void Resistor::SetTempCoeff(int tempCoeff)
{
  // set band for temp. coeff. from input value
  switch (tempCoeff)
  {
    case 250:  // black
      band[5] = 0;
      break;
    case 100:  // brown
      band[5] = 1;
      break;
    case 50:  // red
      band[5] = 2;
      break;
    case 15:  // orange
      band[5] = 3;
      break;
    case 25:  // yellow
      band[5] = 4;
      break;
    case 20:  // green
      band[5] = 5;
      break;
    case 10:  // blue
      band[5] = 6;
      break;
    case 5:  // violet
      band[5] = 7;
      break;
    case 1:  // grey
      band[5] = 8;
      break;
  }
}

void Resistor::SetTolerance(double tol)
{
  // set band for tolerance from input value
  if (tol == 1)  // brown
    band[4] = 0;
  if (tol == 2)  // red
    band[4] = 1;
  if (tol == 0.5)  // green
    band[4] = 2;
  if (tol == 0.25)  // blue
    band[4] = 3;
  if (tol == 0.1)  // violet
    band[4] = 4;
  if (tol == 0.05)  // grey
    band[4] = 5;
  if (tol == 5)  // gold
    band[4] = 6;
  if (tol == 10)  // silver
    band[4] = 7;
  if (tol == 20)  // none
    band[4] = 8;
}
