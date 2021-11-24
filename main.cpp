/* Project: ColorResistor
 * File Name: main.cpp
 * Author: Michele Mignola, Gabriele Cereghetti, Romeo Bornand
 * Date: 09-12.2021
 * Description:
 * This is the main file of the programm it is used to lauch the apllication
 *
 */

#include "MainWindow.h"

#include <QApplication>

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
