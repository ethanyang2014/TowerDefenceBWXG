//
//  MapLayer.cpp
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#include "MapLayer.h"

bool MapLayer::init(int id)
{
    if(Layer::init())
    {
        TMXTiledMap* _map = TMXTiledMap::create("iResources/Theme1/BG1/BGPath.tmx");
        
        SpriteFrameCache::getInstance()->addSpriteFramesWithFile("iResources/Theme1/BG1/BG-hd.plist");
        
        Sprite* bg = Sprite::createWithSpriteFrameName("skymap01.png");
        bg->setPosition(CENTER);
        addChild(bg, 1);
        
        return true;
    }
    return true;
}

void MapLayer::onEnter()
{
    Layer::onEnter();
}

void MapLayer::onExit()
{
    Layer::onExit();
}

void MapLayer::removeEnemy(cocos2d::Ref *obj)
{
    
}

void MapLayer::addTower(cocos2d::Ref *obj)
{
    
}

void MapLayer::removeTower(cocos2d::Ref *obj)
{
    
}

void MapLayer::towerAttack(cocos2d::Ref *obj)
{
    
}

void MapLayer::createEnemies(float dt)
{
    //TODO
}

void MapLayer::createEnemy(float dt)
{
    //TODO
}