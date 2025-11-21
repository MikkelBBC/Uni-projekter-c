#include <iostream>
#include <string>
using namespace std;
#include <vector>


class Player
{
private:
    string name;
    int level;
    std::vector <Weapon> weapons;

public:
    Player(string name_, int level_);

    string getName();

    int getLevel();

    void addWeapon(string)


    

};




class Patient
{
private:
    string name;
    string birthDate;


public:
  Patient(string name_, string birthDate_);

  string getName();

  string birthDate();


};



class Weapon
{
private:
    string type;
    int damage;


public:
  Weapon(string type_, int damage_);

  string getType();

  int getDamage();


};




