#include "Dungeon.h"

Dungeon::Dungeon():Player(){};


    /* Create a new player, and give him/her basic status */
void Dungeon::createPlayer()
{
    cout << "Enter characteer name: ";
    string name;
    cin >> name;
    this->player = Player(name,100,30,0);
    cout << "Welcome to the dungeon, " << name << "." << endl;
}

    /* Create a map, which include several different rooms */
void Dungeon::createMap()
{
    Room* r1 = &Room(false, 1, new vector<object>);
    Room* r2 = &Room(false, 2, new vector<object>);
    Room* r3 = &Room(false, 3, new vector<object>);
    Room* r4 = &Room(false, 4, new vector<object>);
    Room* r5 = &Room(false, 5, new vector<object>);
    Room* r6 = &Room(false, 6, new vector<object>);
    Room* r7 = &Room(true, 7, new vector<object>);



};

/* Deal with player's moving action */
void Dungeon::handleMovement()
{
    cout << "Which direction?" << endl;

};

    /* Deal with player's interaction with objects in that room */
    void handleEvent(Object*);

    /* Deal with all game initial setting       */
    /* Including create player, create map etc  */
    void startGame()
    {
        createMap();
        createPlayer();
    };

    /* Deal with the player's action     */
    /* including showing the action list */
    /* that player can do at that room   */
    /* and dealing with player's input   */
    void chooseAction(vector<Object*>)
    {
        checkGameLogic();
    };

    /* Check whether the game should end or not */
    /* Including player victory, or he/she dead */
    bool checkGameLogic();

    /* Deal with the whole game process */
    void runDungeon()
    {
        cout << "---------welcome to the dungeon---------" << endl;
        startGame();
    };
