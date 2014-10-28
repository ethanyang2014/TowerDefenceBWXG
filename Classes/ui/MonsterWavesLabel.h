#ifndef __TowerDefenceBWXG__MonsterWavesLabel__
#define __TowerDefenceBWXG__MonsterWavesLabel__

#include "Defines.h"
USING_NS_CC;

#define TENS_DIGIT_OFFSET 5
#define UNITS_DIGIT_OFFSET 30

class MonsterWavesLabel : public Node
{
public:
	CREATE_FUNC_I(MonsterWavesLabel);

	bool init(int totalWaves);

	MonsterWavesLabel();
	~MonsterWavesLabel();

	virtual void onEnter() override;
	virtual void onExit() override;

private:
	//更新显示当前第几波怪物
	void updateCurrentWave(Ref* sender);

private:
	//十位数
	LabelAtlas* __tensDigit;
	//个位数 
	LabelAtlas* __unitDigit;
	LabelAtlas* __totalWaves;
};

#endif