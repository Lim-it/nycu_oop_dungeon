#include "NPC.h"

NPC::NPC()
{
    GameCharacter();
    script = "sgap";
    commodity = new vector(Item);
};

NPC::NPC(string _name, string _tag, vector<Item> comm)
{
    GameCharacter(_name, _tag, 1, 100, 1);
    commodity = comm;
};

void listCommodity()
{
    int s = commodity.size();
    for(int i = 0; i < s; i++)
    {
        cout << i << ". " <<commodity[i].name << endl;
    }
}; /*print all the Item in this NPC*/

    /* Virtual function that you need to complete   */
    /* In NPC, this function should deal with the   */
    /* transaction in easy implementation           */
bool triggerEvent(Object*);

    /* Set & Get function*/
void setScript(string _script)
{
    script = _script;
};

void setCommodity(vector<Item> comm)
{
    commodity = comm;
};

string getScript()
{
    return script;
};

vector<Item> getCommodity()
{
    return commodity;
};
