//
//  MapData.cpp
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#include "MapData.h"

bool MapData::init(int id)
{
    return true;
}

void MapData::initTower()
{

}

void MapData::initRoute()
{
    char pBuffer[100] = {0};
    
    TMXTiledMap* map = TMXTiledMap::create(pBuffer);

    TMXObjectGroup* mapObjectGroup = map->getObjectGroup("PATH");
    ValueMap dic;
    
    int posIndex = 0;
    
    float tileWidth = map->getTileSize().width;
    float tileHight = map->getTileSize().height;
    do {
        memset(pBuffer, 0, sizeof(pBuffer));
        sprintf(pBuffer, "PT%d",(posIndex + 1));
        posIndex++;
        dic = mapObjectGroup->getObject(pBuffer);
        if (!dic.empty()) {
            float x = dic["x"].asFloat();
            float y = dic["y"].asFloat();
            x += tileWidth / 2;
            y -= tileHight / 2;
            
            Node* node = CCNode::create();
            //LcdAdapClass::sharedLCDADAP()->setAdaptorNodePos(node, ccp(x,y));
            //LcdAdapClass::sharedLCDADAP()->setAdaptorMapPos(node, ccp(x,y));
            //CCAssert(!(pathArray == NULL), "cannot be NULL");
            
            float fx = x * tileWidth;
            float fy = y * tileHight;
            
            node->setPosition(Point(fx,fy));
            
            //TODO pathArray->addObject(node);
        }
    } while (dic.empty());

}



