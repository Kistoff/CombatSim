#ifndef COMBAT_H_INCLUDED
#define COMBAT_H_INCLUDED

#include <Hero.h>
#include <Mob.h>
#include <cstdlib>
#include <ctime>

class Combat
{
public:

    int meleeAttack(int heroAttack, int heroLevel, int mobDefense, int attPower);
    int magicAttack(int heroIntelligence, int heroLevel, int mobIntelligence, int spellPower);


};


#endif // COMBAT_H_INCLUDED
