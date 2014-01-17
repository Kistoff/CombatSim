#include <Mob.h>

Mob::Mob()
{
        MLevel = 1;
        MHealth = 25;
        MMana = 20;
        MStrength = 10;
        MStamina = 10;
        MDexterity = 10;
        MIntelligence = 10;
        MWisdom = 10;
        MCharisma = 10;
}
int Mob::heal(int addHP)
{
        MHealth += addHP;
}
int Mob::getMLevel()
{
    return MLevel;
}
int Mob::getMHealth()
{
    return MHealth;
}

int Mob::getMMana()
{
    return MMana;
}

int Mob::getMStrength()
{
    return MStrength;
}

int Mob::getMStamina()
{
    return MStamina;
}

int Mob::getMDexterity()
{
    return MDexterity;
}

int Mob::getMIntelligence()
{
    return MIntelligence;
}

int Mob::getMWisdom()
{
    return MWisdom;
}

int Mob::getMCharisma()
{
    return MCharisma;
}
