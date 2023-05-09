#include "GameCharacter.h"

GameCharacter::GameCharacter()
{
    Object();
    name = "none";
    maxHealth = 100;
    currentHealth = 100;
    attack = 0;
    defense = 0;
};

GameCharacter(string _name,string _tag,int _maxH,int att,int def)
{
    Object(_name, _tag);
    maxHealth = _maxH;
    currentHealth = _maxH;
    attack = att;
    defense = def;
};

bool checkIsDead()
{
    if(currentHealth < 0)
    {
        return true;
    }
};
int takeDamage(int cost)
{
    return currentHealth - cost;
};

    /* Set & Get function*/
void setMaxHealth(int _maxH)
{
    maxHealth = _maxH;
};

void setCurrentHealth(int _curH)
{
    currentHealth = _curH;
};

void setAttack(int att)
{
    attack = att;
};

void setDefense(int def)
{
    defense = def;
};

int getMaxHealth()
{
    return maxHealth;
};

int getCurrentHealth()
{
    return currentHealth;
};

int getAttack()
{
    return attack;
};

int getDefense()
{
    return defense;
};
