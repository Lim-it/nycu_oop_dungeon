#include "Room.h"

Room::Room()
{
    isExit = false;
    index = 0;
    objects = Object();
};

Room::Room(bool _isExit, int _index, vector<Object*> _objects)
{
    isExit = _isExit;
    index = _index;
    objects = _objects;
};

bool popObject(Object*); //need to figure out

void setUpRoom(Room* up)
{
    upRoom = up;
};

void setDownRoom(Room* down)
{
    downRoom = down;
};

void setLeftRoom(Room* left)
{
    leftRoom = left;
};
void setRightRoom(Room* right)
{
    rightRoom = right;
};

void setIsExit(bool exit)
{
    isExit = exit;
};

void setIndex(int sindex)
{
    Index = sindex;
};

void setObjects(vector<Object*> obj)
{
    objects = obj;
};

bool getIsExit()
{
    return isExit;
};

int getIndex()
{
    return index;
};

vector<Object*> getObjects()
{
    return objects;
};

Room* getUpRoom()
{
    return upRoom;
};
Room* getDownRoom()
{
    return downRoom;
};
Room* getLeftRoom()
{
    return leftRoom;
};
Room* getRightRoom()
{
    return rightRoom;
};
