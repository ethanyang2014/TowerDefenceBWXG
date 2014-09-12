//
//  MapLayer.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__MapLayer__
#define __TowerDefenceBWXG__MapLayer__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

#include "model/Enemy.h"

/**
 *  1.每次小怪发生变化 更新塔对小怪列表的引用
 *  2.交互 通知注册
 */
class MapLayer : public Layer
{
public:
    CREATE_FUNC_I(MapLayer);
    bool init(int id);
    void onEnter();
    void onExit();
public:
    //小怪
    Vector<Enemy*> _enemies;
    //塔
    Vector<Enemy*> _towers;
    //生成一波小怪
    void createEnemies(float dt);
    //小怪临时存储
    Vector<Enemy*> _waveEnemise;
    //生成一个小怪 每次取出_waveEnemise中的第一个小怪 放到地图中
    void createEnemy(float dt);
public:
    //交互
    //NC_MAP_ROMOVE_ENEMY
    void removeEnemy(Ref* obj);
    //NC_MAP_ADD_TOWER
    void addTower(Ref* obj);
    //NC_MAP_REMOVE_TOWER
    void removeTower(Ref* obj);
    //NC_MAP_TOWER_ATTACK
    void towerAttack(Ref* obj);
};


#endif /* defined(__TowerDefenceBWXG__MapLayer__) */
