#include "Inventory.h"

Inventory::Inventory()
{

}

Inventory::~Inventory()
{

}

void Inventory::addItem(const Item* item)
{
    if (size_ < kMaxSize) 
    {
      items_.push_back(item);
      size_++;
    } else 
    {
      std::cout << "Inventory is full." << std::endl;
    }
}