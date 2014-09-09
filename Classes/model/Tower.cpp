//
//  Tower.cpp
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#include "Tower.h"

bool Tower::init(int id)
{
    _target = nullptr;
    return true;
}

void Tower::attack(float dt)
{
    //TODO
}

void Tower::setEnemies(Vector<Enemy *> *enemies)
{
    _enemies = *enemies;
}