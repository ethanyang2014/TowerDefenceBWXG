#include "ui/MonsterWavesLabel.h"


MonsterWavesLabel::MonsterWavesLabel()
{}


MonsterWavesLabel::~MonsterWavesLabel()
{}


bool MonsterWavesLabel::init(int totalWaves)
{
	if (!Node::init())
	{
		return false;
	}

	Sprite* wavesLabelBg = Sprite::createWithSpriteFrameName("MenuCenter_01_CN.png");
	this->addChild(wavesLabelBg);

	__tensDigit = LabelAtlas::create("0", "iResources/num/menublood_num-hd.png", 22, 30, 46);
	this->addChild(__tensDigit);
	__tensDigit->setPosition(Point(-113, -2));

	__unitDigit = LabelAtlas::create("1", "iResources/num/menublood_num-hd.png", 22, 30, 46);
	this->addChild(__unitDigit);
	__unitDigit->setPosition(Point(-68, -2));

	char cWave[10];
	_itoa(totalWaves, cWave, 10);
	__totalWaves = LabelAtlas::create(cWave, "iResources/num/numwhite-hd.png", 20, 30, 46);
	this->addChild(__totalWaves);
	__totalWaves->setPosition(Point(-10, -2));

	return true;
}


void MonsterWavesLabel::onEnter()
{
	NC_ADD(this, callfuncO_selector(MonsterWavesLabel::updateCurrentWave), ADD_MONSTER_WAVE, nullptr);
}


void MonsterWavesLabel::onExit()
{
	NC_REM(this, ADD_MONSTER_WAVE);
}


void MonsterWavesLabel::updateCurrentWave(Ref* sender)
{
	int curWave = *(int*)sender;
	CCLOG("current monster waves is : %d", curWave);
	int nTen = curWave / 10;
	int nUnit = curWave % 10;
	char cTen[5];
	_itoa(nTen, cTen, 10);
	char cUnit[5];
	_itoa(nUnit, cUnit, 10);
	__tensDigit->setString(cTen);
	__unitDigit->setString(cUnit);
}