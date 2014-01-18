#include <iostream>
#include <string>
#include <Hero.h>
#include <Mob.h>
#include <Combat.h>


int main()
{
    srand(time(NULL)); //testing melee and spell damage

    bool playing = true;
    std::string heroName;
    std::string blankScreen(1, '\n');

    Hero PC;
    Mob NPC;
    Combat combat;

    std::cout << "Please enter your Hero's name: ";
    std::cin >> heroName;

    while(playing == true)
    {
        int choice;
        std::cout << blankScreen;
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1: Fight Monsters" << std::endl;
        std::cout << "2: Check Inventory" << std::endl;
        std::cout << "3: Check Attributes" << std::endl;
        std::cout << "4: Exit" << std::endl;
        std::cout << "Please enter a Number to continue: ";
        std::cin >> choice;
        switch(choice)
        {
            case 1:
            {
                std::cout << blankScreen;
                std::cout << heroName << " Attacked Mob for " << combat.meleeAttack(PC.gethStrength(), PC.gethLevel(), NPC.getMStamina(), PC.hMelee(PC.gethStrength(), rand() % 25 + 1)) << " damage!" << std::endl;
                std::cout << blankScreen;
                std::cout << heroName << " Casted Fire on the Mob for " << combat.magicAttack(PC.gethIntelligence(), PC.gethLevel(), NPC.getMIntelligence(), rand() % 15 + 1)<< " damage!" << std::endl;
                break;
            }
            case 2:
            {
                std::cout << blankScreen;
                std::cout << ":::::::::::::" << std::endl;
                std::cout << ": Equipment :" << std::endl;
                std::cout << ":::::::::::::" << std::endl;
                std::cout << "Weapon: " << std::endl;
                std::cout << "Armor: " << std::endl;
                std::cout << "Accessory: " << std::endl;
                break;
            }
            case 3:
            {
                std::cout << blankScreen;
                std::cout << "::::::::::::::" << std::endl;
                std::cout << ": Attributes :" << std::endl;
                std::cout << "::::::::::::::" << std::endl;
                std::cout << "Level: " << PC.gethLevel() << std::endl;
                std::cout << "Health: " << PC.gethHealth(PC.gethBaseHealth(), PC.gethStamina()) << std::endl;
                std::cout << "Mana: " << PC.gethMana(PC.gethBaseMana(), PC.gethIntelligence()) << std::endl;
                std::cout << "Strength: " << PC.gethStrength() << std::endl;
                std::cout << "Stamina: " << PC.gethStamina() << std::endl;
                std::cout << "Dexterity: " << PC.gethDexterity() << std::endl;
                std::cout << "Intelligence: " << PC.gethIntelligence() << std::endl;
                std::cout << "Wisdom: " << PC.gethWisdom() << std::endl;
                std::cout << "Charisma: " << PC.gethCharisma() << std::endl;
                break;
            }
            case 4:
            {
                std::cout << blankScreen;
                std::cout << "Exiting Game" << std::endl;
                playing = false;
            }
        }
    }

    return 0;
}
