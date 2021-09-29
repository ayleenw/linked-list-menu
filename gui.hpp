/**
  ******************************************************************************
  * @file           : gui.hpp
  * @brief          : A GUI for a 4x20LCD display
  ******************************************************************************
  * @author Ayleen Weiss, 2021-09-29
  * 
  *
  ******************************************************************************
  */

#ifndef _GUI_H_
#define _GUI_H_

#include <string>
#include <stdio.h>
#include "linkedlist.hpp"

using namespace std;

class Gui
{
public:
    Gui();
    ~Gui();
    void PrintMenuToLCD();

private:
};
#endif // _GUI_H_