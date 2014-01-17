#ifndef MOB_H_INCLUDED
#define MOB_H_INCLUDED

class Mob
{
public:
    Mob();
    int heal(int addHP);
    int getMLevel();
    int getMHealth();
    int getMMana();
    int getMStrength();
    int getMStamina();
    int getMDexterity();
    int getMIntelligence();
    int getMWisdom();
    int getMCharisma();

private:

    int MLevel;
    int MHealth;
    int MMana;
    int MStrength;
    int MStamina;
    int MDexterity;
    int MIntelligence;
    int MWisdom;
    int MCharisma;
};

#endif // MOB_H_INCLUDED
