#ifndef ROUGE_H
#define ROUGE_H
#include "Player.h"


#pragma once

class Rouge : public Player
{
public:
    Rouge();
    ~Rouge();

    void Attack() override;
    

private:
    std::string m_nume;
    ClassType type_;
};

#endif