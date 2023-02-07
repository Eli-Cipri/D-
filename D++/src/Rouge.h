#ifndef ROUGE_H
#define ROUGE_H
#include "Player.h"


#pragma once

class Rouge : public Player,Item
{
public:
    Rouge(std::string& m_nume);
    
    ~Rouge();

    void Attack() override;
    

private:

};

#endif