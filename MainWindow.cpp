/* Project: ColorResistor
 * File Name: MainWindow.cpp
 * Author: Michele Mignola, Gabriele Cereghetti, Romeo Bornand
 * Date: 09-12.2021
 * Description:
 * This is the .cpp file with the implementation of all the functions of the
 * MainWindows class
 * 
 */

#include "MainWindow.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include "Resistor.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)  // ctor
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()  // dtor
{
  delete ui;
}

void MainWindow::refreshColor()
{
  switch (r.getValueBand(1))  // set color for the 1st band
  {
    case 0:  // black
      ui->imageBand1->setStyleSheet("QLabel { background-color : black}");
      break;
    case 1:  // brown
      ui->imageBand1->setStyleSheet("QLabel { background-color : brown}");
      break;
    case 2:  // red
      ui->imageBand1->setStyleSheet("QLabel { background-color : red}");
      break;
    case 3:  // orange
      ui->imageBand1->setStyleSheet("QLabel { background-color : orange}");
      break;
    case 4:  // yellow
      ui->imageBand1->setStyleSheet("QLabel { background-color : yellow}");
      break;
    case 5:  // green
      ui->imageBand1->setStyleSheet("QLabel { background-color : green}");
      break;
    case 6:  // blue
      ui->imageBand1->setStyleSheet("QLabel { background-color : blue}");
      break;
    case 7:  // violet
      ui->imageBand1->setStyleSheet("QLabel { background-color : violet}");
      break;
    case 8:  // grey
      ui->imageBand1->setStyleSheet("QLabel { background-color : grey}");
      break;
    case 9:  // white
      ui->imageBand1->setStyleSheet("QLabel { background-color : white}");
      break;
  }
  switch (r.getValueBand(2))  // set color for the 2nd band
  {
    case 0:  // black
      ui->imageBand2->setStyleSheet("QLabel { background-color : black}");
      break;
    case 1:  // brown
      ui->imageBand2->setStyleSheet("QLabel { background-color : brown}");
      break;
    case 2:  // red
      ui->imageBand2->setStyleSheet("QLabel { background-color : red}");
      break;
    case 3:  // orange
      ui->imageBand2->setStyleSheet("QLabel { background-color : orange}");
      break;
    case 4:  // yellow
      ui->imageBand2->setStyleSheet("QLabel { background-color : yellow}");
      break;
    case 5:  // green
      ui->imageBand2->setStyleSheet("QLabel { background-color : green}");
      break;
    case 6:  // blue
      ui->imageBand2->setStyleSheet("QLabel { background-color : blue}");
      break;
    case 7:  // violet
      ui->imageBand2->setStyleSheet("QLabel { background-color : violet}");
      break;
    case 8:  // grey
      ui->imageBand2->setStyleSheet("QLabel { background-color : grey}");
      break;
    case 9:  // white
      ui->imageBand2->setStyleSheet("QLabel { background-color : white}");
      break;
  }
  if (r.getnBand() >= 5)  // resistor has 5 or 6 bands
  {
    switch (r.getValueBand(3))  // set color for the 3rd band
    {
      case 0:  // black
        ui->imageBand3->setStyleSheet("QLabel { background-color : black}");
        break;
      case 1:  // brown
        ui->imageBand3->setStyleSheet("QLabel { background-color : brown}");
        break;
      case 2:  // red
        ui->imageBand3->setStyleSheet("QLabel { background-color : red}");
        break;
      case 3:  // orange
        ui->imageBand3->setStyleSheet("QLabel { background-color : orange}");
        break;
      case 4:  // yellow
        ui->imageBand3->setStyleSheet("QLabel { background-color : yellow}");
        break;
      case 5:  // green
        ui->imageBand3->setStyleSheet("QLabel { background-color : green}");
        break;
      case 6:  // blue
        ui->imageBand3->setStyleSheet("QLabel { background-color : blue}");
        break;
      case 7:  // violet
        ui->imageBand3->setStyleSheet("QLabel { background-color : violet}");
        break;
      case 8:  // grey
        ui->imageBand3->setStyleSheet("QLabel { background-color : grey}");
        break;
      case 9:  // white
        ui->imageBand3->setStyleSheet("QLabel { background-color : white}");
        break;
    }
  }
  if (r.getnBand() <= 4)  // resistor has 3 or 4 bands
  {
    switch (r.getValueBand(3))  // set color for the 3rd band
    {
      case 0:  // black
        ui->imageBand3->setStyleSheet("QLabel { background-color : black}");
        break;
      case 1:  // brown
        ui->imageBand3->setStyleSheet("QLabel { background-color : brown}");
        break;
      case 2:  // red
        ui->imageBand3->setStyleSheet("QLabel { background-color : red}");
        break;
      case 3:  // orange
        ui->imageBand3->setStyleSheet("QLabel { background-color : orange}");
        break;
      case 4:  // yellow
        ui->imageBand3->setStyleSheet("QLabel { background-color : yellow}");
        break;
      case 5:  // green
        ui->imageBand3->setStyleSheet("QLabel { background-color : green}");
        break;
      case 6:  // blue
        ui->imageBand3->setStyleSheet("QLabel { background-color : blue}");
        break;
      case 7:  // violet
        ui->imageBand3->setStyleSheet("QLabel { background-color : violet}");
        break;
      case 8:  // grey
        ui->imageBand3->setStyleSheet("QLabel { background-color : grey}");
        break;
      case 9:  // white
        ui->imageBand3->setStyleSheet("QLabel { background-color : white}");
        break;
      case 10:  // gold
        ui->imageBand3->setStyleSheet("QLabel { background-color : gold}");
        break;
      case 11:  // silver
        ui->imageBand3->setStyleSheet("QLabel { background-color : silver}");
        break;
    }
  }
  if (r.getnBand() >= 5)  // resistor has 5 or 6 bands
  {
    switch (r.getValueBand(4))  // set color for the 4th band
    {
      case 0:  // black
        ui->imageBand4->setStyleSheet("QLabel { background-color : black}");
        break;
      case 1:  // brown
        ui->imageBand4->setStyleSheet("QLabel { background-color : brown}");
        break;
      case 2:  // red
        ui->imageBand4->setStyleSheet("QLabel { background-color : red}");
        break;
      case 3:  // orange
        ui->imageBand4->setStyleSheet("QLabel { background-color : orange}");
        break;
      case 4:  // yellow
        ui->imageBand4->setStyleSheet("QLabel { background-color : yellow}");
        break;
      case 5:  // green
        ui->imageBand4->setStyleSheet("QLabel { background-color : green}");
        break;
      case 6:  // blue
        ui->imageBand4->setStyleSheet("QLabel { background-color : blue}");
        break;
      case 7:  // violet
        ui->imageBand4->setStyleSheet("QLabel { background-color : violet}");
        break;
      case 8:  // grey
        ui->imageBand4->setStyleSheet("QLabel { background-color : grey}");
        break;
      case 9:  // white
        ui->imageBand4->setStyleSheet("QLabel { background-color : white}");
        break;
      case 10:  // gold
        ui->imageBand4->setStyleSheet("QLabel { background-color : gold}");
        break;
      case 11:  // silver
        ui->imageBand4->setStyleSheet("QLabel { background-color : silver}");
        break;
    }
  }

  switch (r.getValueBand(5))  // set color for the 5th band
  {
    case 0:  // brown
      ui->imageBand5->setStyleSheet("QLabel { background-color : brown}");
      break;
    case 1:  // red
      ui->imageBand5->setStyleSheet("QLabel { background-color : red}");
      break;
    case 2:  // green
      ui->imageBand5->setStyleSheet("QLabel { background-color : green}");
      break;
    case 3:  // blue
      ui->imageBand5->setStyleSheet("QLabel { background-color : blue}");
      break;
    case 4:  // violet
      ui->imageBand5->setStyleSheet("QLabel { background-color : violet}");
      break;
    case 5:  // grey
      ui->imageBand5->setStyleSheet("QLabel { background-color : grey}");
      break;
    case 6:  // gold
      ui->imageBand5->setStyleSheet("QLabel { background-color : gold}");
      break;
    case 7:  // silver
      ui->imageBand5->setStyleSheet("QLabel { background-color : silver}");
      break;
    case 8:  // non-color
      ui->imageBand5->setStyleSheet("QLabel { background-color : transparent}");
      break;
  }
  switch (r.getValueBand(6))  // set color for the 6th band
  {
    case 0:  // black
      ui->imageBand6->setStyleSheet("QLabel { background-color : black}");
      break;
    case 1:  // brown
      ui->imageBand6->setStyleSheet("QLabel { background-color : brown}");
      break;
    case 2:  // red
      ui->imageBand6->setStyleSheet("QLabel { background-color : red}");
      break;
    case 3:  // orange
      ui->imageBand6->setStyleSheet("QLabel { background-color : orange}");
      break;
    case 4:  // yellow
      ui->imageBand6->setStyleSheet("QLabel { background-color : yellow}");
      break;
    case 5:  // green
      ui->imageBand6->setStyleSheet("QLabel { background-color : green}");
      break;
    case 6:  // blue
      ui->imageBand6->setStyleSheet("QLabel { background-color : blue}");
      break;
    case 7:  // violet
      ui->imageBand6->setStyleSheet("QLabel { background-color : violet}");
      break;
    case 8:  // grey
      ui->imageBand6->setStyleSheet("QLabel { background-color : grey}");
      break;
  }
}

void MainWindow::refreshBand()
{
  r.setValueBand(1, ui->comboBoxBand1->currentIndex());  // set value 1st band
  r.setValueBand(2, ui->comboBoxBand2->currentIndex());  // set value 2nd band
  if (r.getnBand() >= 5)  // resistor has 5 or 6 band
    r.setValueBand(3, ui->comboBoxBand3->currentIndex());  // set value 3rd band
  if (r.getnBand() <= 4)  // resistor has 3 or 4 band
    r.setValueBand(3, ui->comboBoxBand4->currentIndex());  // set value 3rd band
  if (r.getnBand() >= 5)  // resistor has 5 or 6 band
    r.setValueBand(4, ui->comboBoxBand4->currentIndex());  // set value 4th band
  if (r.getnBand() == 4)  // resistor has 4 band
    r.setValueBand(4, ui->comboBoxBand5->currentIndex());  // set value 4th band
  else if (r.getnBand() > 4)  // resistor has 5 or 6 band
    r.setValueBand(5, ui->comboBoxBand5->currentIndex());  // set value 5th band
  if (r.getnBand() == 6)  // resistor has 6 band
    r.setValueBand(6, ui->comboBoxBand6->currentIndex());  // set value 6th band
}

std::string MainWindow::resultDisplay(double val, double exp, int tCoeff,
                                      double tol)
{
  char value[30], buffer[30];  // create buffers for the text
  int e = 0;                   // variable for exponent
  val *= exp;                  // calculate real value with multiplier
  e = (int) log10(val);        // calculate exponent
  val *= pow(10, -e);          // divide real value with exponent
  if (e < 0)                   // exponent is -1 or -2
  {
    val *= pow(10, 3 + e);        // calculate value in mOhm
    sprintf(value, "%.2f", val);  // convert value in text
    strcat(value, "m");           // add 'm' for mOhm
  }
  else  // exponent is 0...11
  {
    val *= pow(10, e % 3);        // calculate value for engineering notation
    sprintf(value, "%.2f", val);  // convert value in text
    switch (e / 3)                // set prefix
    {
      case 0:  // non-prefix
        break;
      case 1:  // kilo prefix
        strcat(value, "K");
        break;
      case 2:  // mega prefix
        strcat(value, "M");
        break;
      case 3:  // giga prefix
        strcat(value, "G");
        break;
      default:  // exp > 11
        strcat(value, "err");
    }
  }
  sprintf(buffer, "ohm, tC: %.d, t: %.2f%%", tCoeff, tol);  // complete text
  strcat(value, buffer);   // concatenate buffers
  std::string str(value);  // covert text in string
  return str;              // return str
}

void MainWindow::on_groupCtoV_clicked()
{
  if (ui->groupCtoV->isChecked())  // group active
    ui->groupVtoC->setVisible(0);  // set other group invisible
  else                             // group unchecked
    ui->groupVtoC->setVisible(1);  // set other group visible
  refreshBand();                   // refresh bands resistor
  refreshColor();                  // refresh colors resistor
}

void MainWindow::on_groupVtoC_clicked()
{
  r.setnBand(6);                   // set 6 bands
  if (ui->groupVtoC->isChecked())  // group active
    ui->groupCtoV->setVisible(0);  // set other group invisible
  else                             // group unchecked
    ui->groupCtoV->setVisible(1);  // set other group visible
}

void MainWindow::on_buttonCalcolateCtoV_clicked()
{
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
  // take all the  value to display and covert in text
  std::string str = resultDisplay(r.getValue(), r.getMultiplier(),
                                  r.getTempCoeff(), r.getTolerance());
  QString qstr = QString::fromStdString(str);  // convert string to Qstring
  ui->labelResultateCtoV->setText(qstr);       // print final value
}

void MainWindow::on_comboBoxNBand_currentIndexChanged(int index)
{
  switch (index)  // control how many bands
  {
    case 0:  // 6 band
      // all bands visible
      ui->imageBand6->setVisible(1);
      ui->imageBand5->setVisible(1);
      ui->imageBand4->setVisible(1);
      ui->labelBand3->setText("Band 3");
      ui->labelBand4->setText("Band 4");
      ui->labelBand5->setText("Band 5");
      ui->comboBoxBand3->setVisible(1);
      ui->labelBand3->setVisible(1);
      ui->groupTemperature->setVisible(1);
      ui->groupTolerance->setVisible(1);
      r.setnBand(6);  // set 6 of total bands
      break;
    case 1:  // 5 band
      // visible 5 band, last one invisible
      ui->imageBand6->setVisible(0);
      ui->imageBand5->setVisible(1);
      ui->imageBand4->setVisible(1);
      ui->labelBand3->setText("Band 3");
      ui->labelBand4->setText("Band 4");
      ui->labelBand5->setText("Band 5");
      ui->comboBoxBand3->setVisible(1);
      ui->labelBand3->setVisible(1);
      ui->groupTemperature->setVisible(0);
      ui->groupTolerance->setVisible(1);
      r.setnBand(5);  // set 5 of total bands
      break;
    case 2:  // 4 band
      // only visible 4 band
      ui->imageBand6->setVisible(0);
      ui->imageBand5->setVisible(1);
      ui->imageBand4->setVisible(0);
      ui->labelBand4->setText("Band 3");
      ui->labelBand5->setText("Band 4");
      ui->comboBoxBand3->setVisible(0);
      ui->labelBand3->setVisible(0);
      ui->groupTemperature->setVisible(0);
      ui->groupTolerance->setVisible(1);
      r.setnBand(4);  // set 4 of total bands
      break;
    case 3:  // 3 band
      // only visible 3 band
      ui->imageBand6->setVisible(0);
      ui->imageBand5->setVisible(0);
      ui->imageBand4->setVisible(0);
      ui->labelBand4->setText("Band 3");
      ui->comboBoxBand3->setVisible(0);
      ui->labelBand3->setVisible(0);
      ui->groupTemperature->setVisible(0);
      ui->groupTolerance->setVisible(0);
      r.setnBand(3);  // set 3 of total bands
      break;
  }
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
}

void MainWindow::on_comboBoxBand1_currentIndexChanged()
{
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
}

void MainWindow::on_comboBoxBand2_currentIndexChanged()
{
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
}

void MainWindow::on_comboBoxBand3_currentIndexChanged()
{
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
}

void MainWindow::on_comboBoxBand4_currentIndexChanged()
{
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
}

void MainWindow::on_comboBoxBand5_currentIndexChanged()
{
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
}

void MainWindow::on_comboBoxBand6_currentIndexChanged()
{
  refreshBand();   // refresh bands resistor
  refreshColor();  // refresh colors resistor
}

void MainWindow::on_textValueOhm_textChanged(const QString& arg1)
{
  r.SetValue(arg1.toLong());  // set value resistance in ohm
  refreshColor();             // refresh colors resistor
}

void MainWindow::on_textTolerance_textChanged(const QString& arg1)
{
  r.SetTolerance(arg1.toDouble());  // set value tolerance
  refreshColor();                   // refresh colors resistor
}

void MainWindow::on_textTempCoeff_textChanged(const QString& arg1)
{
  r.SetTempCoeff(arg1.toInt());  // set value temp. coeff.
  refreshColor();                // refresh colors resistor
}

void MainWindow::on_buttonCalcolateVtoC_clicked()
{
  refreshColor();  // refresh colors resistor
  // take all the  value to display and covert in text
  std::string str = resultDisplay(r.getValue(), r.getMultiplier(),
                                  r.getTempCoeff(), r.getTolerance());
  QString qstr = QString::fromStdString(str);  // convert string in Qstring
  ui->labelResultateVtoC->setText(qstr);       // print final value
}
