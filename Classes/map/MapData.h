//
//  MapData.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__MapData__
#define __TowerDefenceBWXG__MapData__

#include <iostream>

#include "Defines.h"

#include "PointItem.h"

USING_NS_CC;

#define MAP_TILE_WIDTH 80
#define MAP_TILE_HEIGTH 80

//地图的格子数
#define MAP_XN 12
#define MAP_YN 8

class MapData : public Node
{
public:
	CREATE_FUNC_I(MapData);
	bool init(int id);
public:
	//0 不放置塔 1可以放置塔 2已经放置塔
	int map_data[MAP_YN][MAP_XN];
	//初始化可以放置塔的位置
	void initTower();
	//路径
	Vector<PointItem*> _route;
	void initRoute();
};

#endif /* defined(__TowerDefenceBWXG__MapData__) */
