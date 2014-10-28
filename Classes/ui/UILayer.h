#ifndef __TowerDefenceBWXG__UILayer__
#define __TowerDefenceBWXG__UILayer__

#include "Defines.h"
#include "ui/MonsterWavesLabel.h"
USING_NS_CC;

//�ٶȰ�ť����ͣ��ť���˵���ť
//�롰��ͣ�С�ͼƬ�ľ��루����ĻX���е㣩
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

	//�ٶȰ�ť�ص�����
	void speed2xMenuItemCallBack(Ref* sender);
	//��ͣ��ť�ص�����
	void pauseMenuItemCallBack(Ref* sender);
	//�˵���ť�ص�����
	void menuItemCallBack(Ref* sender);

private:
	bool __isSpeed2X;
	bool __isPaused;

	//��ʾ���ܲ����
	LabelAtlas* __turnipLab;

	Sprite* __pauseLable;
	//��ʾĿǰ�ڼ����ֵ���ʾ
	MonsterWavesLabel* __wavesLabel;

	int __curWave;
};

#endif