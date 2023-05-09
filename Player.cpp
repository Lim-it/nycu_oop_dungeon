#include "Player.h"

Player::Player()
{
    GameCharacter();
    currentRoom = Room();
    previousRoom = Room();
    inventory = new vector(Item);
};

Player(string _name,int _maxH,int _atk,int _def)
{
    GameCharacter(_name, "none", _maxH, _atk, _def);
    currentRoom = Room();
    previousRoom = Room();
    inventory = new vector(Item);
};

void addItem(Item added)
{
    inventory.push_back(added);
};

void increaseStates(int pHp,int patk,int pdef)
{
    currentHealth += pHp;
    attack += patk;
    defense += pdef;
};

void changeRoom(Room* newRoom)
{
    previousRoom = currentRoom;
    currentRoom = newRoom;
};

    /* Virtual function that you need to complete   */
    /* In Player, this function should show the     */
    /* status of player.                            */
    bool triggerEvent(Object*);

    /* Set & Get function*/
void setCurrentRoom(Room* cr)
{
    currentRoom = cr;
};

void setPreviousRoom(Room* pr)
{
    previousRoom = pr;
};

void setInventory(vector<Item> itlist)
{
    inventory = itlist;
};

Room* getCurrentRoom()
{
    return currentRoom;
};

Room* getPreviousRoom()
{
    return previousRoom;
};

vector<Item> getInventory()
{
    return inventory;
};
