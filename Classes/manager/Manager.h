//
//  Manager.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-7.
//
//

#ifndef __TowerDefenceBWXG__Manager__
#define __TowerDefenceBWXG__Manager__

#include <iostream>

#include "Defines.h"

USING_NS_CC;

#include "TemplateManager.h"

#include "Enemy.h"
#include "Tower.h"
#include "Bullet.h"

#define EnemyManager TemplateManager<Enemy>
#define TowerManager TemplateManager<Tower>
#define BulletManager TemplateManager<Bullet>

#endif /* defined(__TowerDefenceBWXG__Manager__) */
