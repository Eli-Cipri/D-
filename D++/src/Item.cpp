#include "Item.h"

Item::Item(std::string name):
name(name)
{

}

Item::Item()
{

}

Item::~Item()
{
    
}

void Item::addItem(Item* item)
{
    Item items;
    items = new Item(items);
    items.push_back(item); 
}

const std::vector<Item*> Item::getItems()
{
    return items; 
}