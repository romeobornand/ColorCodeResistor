/* Project: ColorResistor
 * File Name: Resistor.h
 * Author: Michele Mignola, Gabriele Cereghetti, Romeo Bornand
 * Date: 09-12.2021
 * Description:
 * This is the .h file with the declaration of all the functions of the
 * Resistor class. This class is used to handle all necessary conversions and
 * all the calculations for the resistance
 *    
 */

#ifndef RESISTOR_H
#define RESISTOR_H

//#include <QMainWindow>

class Resistor
{
 public:
  Resistor();
  virtual ~Resistor();

  /*Function: setValueBand
   * parameters:
   *   in:  b(int): which band, v(int): value
   *   out: -
   * description:
   * This function set the value of a determinate band
   */
  void setValueBand(const int b, const int v);

  /*Function: getValueBand
   * parameters:
   *   in:  n(int): which band
   *   out(int): value of the band
   * description:
   * This function return a value of a determinate band
   */
  int getValueBand(const int n);

  /*Function: stnBand
   * parameters:
   *   in:  x: numbers of bands
   *   out: -
   * description:
   * This function set the total number of bands in the risistance
   */
  void setnBand(const int x);

  /*Function: getValue
   * parameters:
   *   in:  -
   *   out(int): value in ohm of the digit bands
   * description:
   * This function return the value in ohm of the first three bands
   */
  int getValue();

  /*Function: getMultiplier
   * parameters:
   *   in:  -
   *   out(double): value of the multiplier
   * description:
   * This function return the value of the multiplier
   */
  double getMultiplier();

  /*Function: getTempCoeff
   * parameters:
   *   in:  -
   *   out(int): value of the temperature coeff.
   * description:
   * This function return the value of the temperature coefficient
   */
  int getTempCoeff();

  /*Function: getTolerance
   * parameters:
   *   in:  -
   *   out(double): value of the tolerance in %
   * description:
   * This function return the value of the tolerance
   */
  double getTolerance();

  /*Function: getnBand
   * parameters:
   *   in:  -
   *   out(int): numbers of bands
   * description:
   * This function return the total number of bands in the resistance
   */
  int getnBand();

  /*Function: SetValue
   * parameters:
   *   in:  val(long): value of the resistor in ohm
   *   out: -
   * description:
   * This function set the value of the resistence (value first three digit +
   * multiplier)
   */
  void SetValue(long val);

  /*Function: SetTempCoeff
   * parameters:
   *   in:  tempCoeff(int): value of the temperature coeff.
   *   out: -
   * description:
   * This function set the value of the temperature coefficient
   */
  void SetTempCoeff(int tempCoeff);

  /*Function: SetTolerance
   * parameters:
   *   in:  toll(double): value of the tolerance in %
   *   out: -
   * description:
   * This function set the value of the tolerance
   */
  void SetTolerance(double tol);

 private:
  int n = 6;             // numbers of bands
  int band[6];           // array of bands
  int rvalue = 0;        // value of resistor
  double tolerance = 0;  // value of tolerance
  int tempCoeff = 0;     // value of temperature coeff.
};

#endif  // RESISTOR_H
