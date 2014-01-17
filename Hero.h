#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED


class Hero
{
public:
    Hero();
    int hMelee(int heroStr, int heroWep);
    int gethLevel();
    int gethHealth(int hHealth, int hStamina);
    int gethBaseHealth();
    int gethMana(int hBaseMana, int hIntelligence);
    int gethBaseMana();
    int gethStrength();
    int gethStamina();
    int gethDexterity();
    int gethIntelligence();
    int gethWisdom();
    int gethCharisma();


private:

    int hLevel;
    int hBaseHealth;
    int hBaseMana;
    int hStrength;
    int hStamina;
    int hDexterity;
    int hIntelligence;
    int hWisdom;
    int hCharisma;
};

#endif // HERO_H_INCLUDED
