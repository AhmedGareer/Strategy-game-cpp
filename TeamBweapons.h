#ifndef TEAMBWEAPONS_H
#define TEAMBWEAPONS_H
#include "weapons.h"

class weaponsB : public weapons
{
    public:

  int TankH(int x);

  int RocketsH (int x);

  int ShipsH (int x);

  int ArmorH (int x);

  int MunitionsH (int x);
};

#endif // TEAMBWEAPONS_H
