#ifndef __TowerDefenceBWXG__UILayer__
#define __TowerDefenceBWXG__UILayer__

#include "Defines.h"
#include "ui/MonsterWavesLabel.h"
USING_NS_CC;

//速度按钮、暂停按钮、菜单按钮
//离“暂停中”图片的距离（即屏幕X轴中点）
#define SPEED_BTN_DIST 200
#define PAUSE_BTN_DIST 320
#define MENU_BTN_DIST 400

class UILayer : public Layer
{
public:
	CREATE_FUNC_I(UILayer);
	bool init(int turnipCount);

	UILayer();
	~UILayer();

private:
	void initGameMenu(int turnipCount);

	//速度按钮回调函数
	void speed2xMenuItemCallBack(Ref* sender);
	//暂停按钮回调函数
	void pauseMenuItemCallBack(Ref* sender);
	//菜单按钮回调函数
	void menuItemCallBack(Ref* sender);

private:
	bool __isSpeed2X;
	bool __isPaused;

	//显示总萝卜金币
	LabelAtlas* __turnipLab;

	Sprite* __pauseLable;
	//显示目前第几波怪的提示
	MonsterWavesLabel* __wavesLabel;

	int __curWave;
};

#endif