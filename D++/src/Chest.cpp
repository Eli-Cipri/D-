#include "Chest.h"

Chest::Chest()
{
    items.push_back(new WarriorItem());
    items.push_back(new WizardItem());
    items.push_back(new RogueItem());
}

Chest::~Chest()
{

}

void Chest::openChest(int classType)
{
        auto item = items.find(classType);
        if (item != items.end()) {
            switch (classType) {
                case 1:
                    std::cout << "Warrior class selected" << std::endl;
                    break;
                case 2:
                    std::cout << "Wizard class selected" << std::endl;
                    break;
                case 3:
                    std::cout << "Rogue class selected" << std::endl;
                    break;
                default:
                    std::cout << "Invalid class selected" << std::endl;
                    return;
            }
            item->second->display();
        } else {
            std::cout << "Invalid class selected" << std::endl;
        }
}