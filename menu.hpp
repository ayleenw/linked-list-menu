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

#ifndef _MENU_H_
#define _MENU_H_

#include <string>
#include <stdio.h>
#include "linkedlist.hpp"

using namespace std;

class Menu
{
public:
  Menu();
  Menu(string menuTexts[]);
  // ~Menu();
  void PrintMenuToLCD();

private:
  LinkedList MenuList;
};
#endif // _MENU_H_