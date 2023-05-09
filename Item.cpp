#include "Item.h"

Item::Item():Object(),attack(0),defense(0),health(100){};

Item(string, int, int, int);

    /* Virtual function that you need to complete    */
    /* In Item, this function should deal with the   */
    /* pick up action. You should add status to the  */
    /* player.                                       */
bool triggerEvent(Object*);

    /* Set & Get function*/
int getHealth()
{
    return health;
};

int getAttack()
{
    return attack;
};

int getDefense()
{
    return defense;
};

void setHealth(int _hp)
{
    health = _hp;
};

void setAttack(int _att)
{
    attack = _att;
};

void setDefense(int _def)
{
    defense = _def;
};
