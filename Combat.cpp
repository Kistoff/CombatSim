#include <Combat.h>

#include <iostream>

int Combat::meleeAttack(int heroAttack, int heroLevel, int mobDefense, int attPower)
{
        srand(time(NULL));
        int baseDamage = heroAttack + ((heroAttack + heroLevel) / 32) * ((heroAttack * heroLevel) / 32);
        int maxDamage = ((attPower * (512 - mobDefense) * baseDamage) / (16 * 512)); //Need setting for heroattack here, should be attPower
        int actualDamage = maxDamage * (3841 + rand() % 255 + 1) / 4096;
        if(rand()%10+1 < 3)
        {
            actualDamage = actualDamage * 2;
            std::cout << "CRITICAL!" << std::endl;
        }
        std::cout << baseDamage << " : Base Damage" << std::endl;
        std::cout << maxDamage << " : Max Damage" << std::endl;
        std::cout << actualDamage << " : Actual Damage" << std::endl;
        return actualDamage;
}

int Combat::magicAttack(int heroIntelligence, int heroLevel, int mobIntelligence, int spellPower)
{
        int baseMagicDamage = heroIntelligence + spellPower;
        int maxMagicDamage = baseMagicDamage * (265 - mobIntelligence) / 4;  //Changed 64 from 265 & 128
        int actualMagicDamage = maxMagicDamage * spellPower / 256;
        std::cout << baseMagicDamage << " : Base Magic Damage" << std::endl;
        std::cout << maxMagicDamage << " : Max Magic Damage" << std::endl;
        std::cout << actualMagicDamage << " : Actual Magic Damage" << std::endl;
        return actualMagicDamage;
}
