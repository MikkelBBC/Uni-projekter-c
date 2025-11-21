#include "UHL.h"

Player::Player(string name_, int level_)
{
    name_ = name;
    level_ = level;
}

string Player::getName()
{

    return string();
}

int Player::getLevel()
{
    return 0;
}

Patient::Patient(string name_, string birthDate_)
{
    name_ = name;
    birthDate_ = birthDate();
}


string Patient::getName()
{
    return string();
}

string Patient::birthDate()
{
    return string();
}

Weapon::Weapon(string type_, int damage_)
{
    type_ = type;
    damage_ = damage;
}

string Weapon::getType()
{
    return string();
};

int Weapon::getDamage()
{
    return 0;
};
