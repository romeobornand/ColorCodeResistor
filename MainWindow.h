/* Project: ColorResistor
 * File Name: MainWindow.h 
 * Author: Michele Mignola, Gabriele Cereghetti, Romeo Bornand
 * Date: 09-12.2021
 * Description:
 * This is the .h file with the declaration of all the functions of the
 * MainWindows class. This class is used to handle all inputs and outputs on the
 * interface
 *
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Resistor.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

 public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();
  /*Function: refreshColor
   * parameters:
   *   in:  -
   *   out: -
   * description:
   * This function is used to refresh the colors of the bands
   */
  void refreshColor();
  /*Function: refreshBand
   * parameters:
   *   in:  -
   *   out: -
   * description:
   * This function is used to refresh the value of the bands
   */
  void refreshBand();
  /*Function: resultDisplay
   * parameters:
   *   in:  -
   *   out: -
   * description:
   * this function is used to convert all numeric value into a string to print
   */
  std::string resultDisplay(double val, double exp, int tCoeff, double tol);

 private slots:

  // button calculate clicked
  void on_buttonCalcolateCtoV_clicked();

  // group checked/unchecked
  void on_groupCtoV_clicked();

  // group checked/unchecked
  void on_groupVtoC_clicked();

  // change value numbers of bands
  void on_comboBoxNBand_currentIndexChanged(int index);

  // change value 1st band
  void on_comboBoxBand1_currentIndexChanged();

  // change value 2nd band
  void on_comboBoxBand2_currentIndexChanged();

  // change value 3rd band
  void on_comboBoxBand3_currentIndexChanged();

  // change value 4th band
  void on_comboBoxBand4_currentIndexChanged();

  // change value 5th band
  void on_comboBoxBand5_currentIndexChanged();

  // change value 6th band
  void on_comboBoxBand6_currentIndexChanged();

  // change value resistance
  void on_textValueOhm_textChanged(const QString& arg1);

  // change value tolerance resistance
  void on_textTolerance_textChanged(const QString& arg1);

  // change value temperature coefficient resistance
  void on_textTempCoeff_textChanged(const QString& arg1);

  // button calculate clicked
  void on_buttonCalcolateVtoC_clicked();

 private:
  Ui::MainWindow* ui;
  Resistor r;  // create object r of class Resistor
};
#endif  // MAINWINDOW_H
