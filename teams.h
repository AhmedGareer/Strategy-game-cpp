#ifndef TEAMS_H
#define TEAMS_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class teams // move ,
{
    public:
    void Move (int x,int y);
    void gotoXY(int x, int y);

    virtual int soliderHealth(int x){}
};

#endif // TEAMS_H
