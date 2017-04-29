#include "teams.h"
#include <iostream>
#include "windows.h"
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for goto
COORD CursorPosition; // used for goto
void teams::gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console,CursorPosition);
}
void teams::Move (int x,int y)
    {
        gotoXY(x,y);
    }
