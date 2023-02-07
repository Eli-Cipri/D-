#ifndef WIZZARDITEMS_H
#define WIZZARDITEMS_H
#include "Item.h"
#pragma once

class WizzardItems : public Item
{
public:
    WizzardItems();
    ~WizzardItems();

    void display() override;

private:

};

#endif