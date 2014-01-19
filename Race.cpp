#include <Race.h>
#include <iostream>

void Race::getRace()
{
    int raceChoice;
    std::cout << "What Race would you like to be?"  << std::endl;
    std::cout << "1 : Human" << std::endl;
    std::cout << "2 : Dwarf" << std::endl;
    std::cout << "3 : Elf bitchs" << std::endl;
    std::cin >> raceChoice;
    switch(raceChoice)
    {
    case 1:
        {
         std::cout << "Human Atributes" << std::endl;
         std::cout << "BaseHealth = 65" << std::endl;
         std::cout << "BaseMana = 30" << std::endl;
         std::cout << "Strength = 10" << std::endl;
         std::cout << "Stamina = 13" << std::endl;
         std::cout << "Dexterity = 8" << std::endl;
         std::cout << "Intelligence = 7" << std::endl;
         std::cout << "Wisdom = 7" << std::endl;
         std::cout << "Charisma = 8" << std::endl;
         break;
        }
    case 2:
        {
         std::cout << "Dwarf Atributes" << std::endl;
         std::cout << "BaseHealth = 75" << std::endl;
         std::cout << "BaseMana = 25" << std::endl;
         std::cout << "Strength = 45" << std::endl;
         std::cout << "Stamina = 20" << std::endl;
         std::cout << "Dexterity = 14" << std::endl;
         std::cout << "Intelligence = 5" << std::endl;
         std::cout << "Wisdom = 5" << std::endl;
         std::cout << "Charisma = 8" << std::endl;
         break;
        }
    case 3:
        {
         std::cout << "Elf Atributes" << std::endl;
         std::cout << "BaseHealth = 55" << std::endl;
         std::cout << "BaseMana = 45" << std::endl;
         std::cout << "Strength = 8" << std::endl;
         std::cout << "Stamina = 8" << std::endl;
         std::cout << "Dexterity = 12" << std::endl;
         std::cout << "Intelligence = 15" << std::endl;
         std::cout << "Wisdom = 14" << std::endl;
         std::cout << "Charisma = 15" << std::endl;
         break;
        }
    }
}
