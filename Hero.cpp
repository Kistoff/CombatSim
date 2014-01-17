#include <Hero.h>

Hero::Hero()
{
    hLevel = 1;
    hBaseHealth = 75;
    hBaseMana = 30;
    hStrength = 15;
    hStamina = 12;
    hDexterity = 8;
    hIntelligence = 5;
    hWisdom = 5;
    hCharisma = 8;
}

int Hero::hMelee(int heroStr, int heroWep)
{
    int attack = heroWep + heroStr / 2;
    return attack;
}
int Hero::gethLevel()
{
    return hLevel;
}
int Hero::gethHealth(int hBaseHealth, int hStamina)
{
    int hHealth = (hBaseHealth * (hStamina + 32)) / 32;
    return hHealth;
}

int Hero::gethBaseHealth()
{
    return hBaseHealth;
}

int Hero::gethMana(int hBaseMana, int hIntelligence)
{
    int hMana = (hBaseMana * (hIntelligence + 32)) / 32;
    return hMana;
}

int Hero::gethBaseMana()
{
    return hBaseMana;
}

int Hero::gethStrength()
{
    return hStrength;
}

int Hero::gethStamina()
{
    return hStamina;
}

int Hero::gethDexterity()
{
    return hDexterity;
}

int Hero::gethIntelligence()
{
    return hIntelligence;
}

int Hero::gethWisdom()
{
    return hWisdom;
}

int Hero::gethCharisma()
{
    return hCharisma;
}
