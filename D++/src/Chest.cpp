#include "Chest.h"

Chest::Chest()
{
    items.push_back(new Item);
    items.push_back(new Item);
    items.push_back(new Item);
}

Chest::~Chest()
{
     for (auto item : items) 
    {
        delete item;
    }
}

void Chest::openChest()
{
    
}