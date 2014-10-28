#include "ui/UILayer.h"


UILayer::UILayer()
	: __isSpeed2X(false)
	, __isPaused(false)
	, __curWave(1)
{}


UILayer::~UILayer()
{}


/*
* @turnipCount 关卡开始时萝卜金币的初始值
*/
bool UILayer::init(int turnipCount)
{
	if (!Layer::init())
	{
		return false;
	}

	initGameMenu(turnipCount);

	return true;
}


void UILayer::initGameMenu(int turnipCount)
{
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("iResources/Items/Items02-hd.plist");

	Size visibleSize = Director::getInstance()->getVisibleSize();

	//菜单背景图
	Sprite* gameMenuBg = Sprite::createWithSpriteFrameName("MenuBG.png");
	this->addChild(gameMenuBg);
	gameMenuBg->setPosition(visibleSize.width * 0.5f,
		visibleSize.height - gameMenuBg->getContentSize().height * 0.5f);

	char cCount[10];
	_itoa(turnipCount, cCount, 10);
	//46 是图片第一个字符 "." 的 ANSCII 码值
	__turnipLab = LabelAtlas::create(cCount, "iResources/num/numwhite-hd.png", 20, 40, 46);
	this->addChild(__turnipLab, 10);
	__turnipLab->setPosition(visibleSize.width * 0.5f - gameMenuBg->getContentSize().width * 0.5f + 100, 
		visibleSize.height - gameMenuBg->getContentSize().height * 0.6f);

	//暂停中图片
	__pauseLable = Sprite::createWithSpriteFrameName("MenuCenter_02_CN.png");
	this->addChild(__pauseLable, 1);
	__pauseLable->setPosition(visibleSize.width * 0.5f,
		visibleSize.height - gameMenuBg->getContentSize().height * 0.5f);
	__pauseLable->setVisible(false);

	//显示怪物 当前波数/总波数
	__wavesLabel = MonsterWavesLabel::create(15);
	this->addChild(__wavesLabel, 1);
	__wavesLabel->setPosition(visibleSize.width * 0.5f,
		visibleSize.height - gameMenuBg->getContentSize().height * 0.5f);

	SpriteFrame* frame;
	//速度按钮
	MenuItemImage* speed2xItem = MenuItemImage::create();
	frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("speed11.png");
	speed2xItem->setNormalSpriteFrame(frame);
	frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("speed12.png");
	speed2xItem->setSelectedSpriteFrame(frame);
	speed2xItem->setCallback(CC_CALLBACK_1(UILayer::speed2xMenuItemCallBack, this));
	speed2xItem->setPosition(visibleSize.width * 0.5f + SPEED_BTN_DIST,
		visibleSize.height - gameMenuBg->getContentSize().height * 0.5f);

	//暂停/继续 按钮
	MenuItemImage* pauseMenuItem = MenuItemImage::create();
	frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("pause01.png");
	pauseMenuItem->setNormalSpriteFrame(frame);
	frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("pause02.png");
	pauseMenuItem->setSelectedSpriteFrame(frame);
	pauseMenuItem->setCallback(CC_CALLBACK_1(UILayer::pauseMenuItemCallBack, this));
	pauseMenuItem->setPosition(visibleSize.width * 0.5f + PAUSE_BTN_DIST,
		visibleSize.height - gameMenuBg->getContentSize().height * 0.5f);

	//菜单按钮
	MenuItemImage* menuItem = MenuItemImage::create();
	frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("menu01.png");
	menuItem->setNormalSpriteFrame(frame);
	frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("menu02.png");
	menuItem->setSelectedSpriteFrame(frame);
	menuItem->setCallback(CC_CALLBACK_1(UILayer::menuItemCallBack, this));
	menuItem->setPosition(visibleSize.width * 0.5f + MENU_BTN_DIST,
		visibleSize.height - gameMenuBg->getContentSize().height * 0.5f);

	Menu* gameMenu = Menu::create(speed2xItem, pauseMenuItem, menuItem, nullptr);
	gameMenu->setPosition(Point::ZERO);
	this->addChild(gameMenu);
}


void UILayer::speed2xMenuItemCallBack(Ref* sender)
{
	MenuItemImage* menuItem = static_cast<MenuItemImage*>(sender);
	if (__isSpeed2X)
	{
		SpriteFrame* frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("speed11.png");
		menuItem->setNormalSpriteFrame(frame);
		frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("speed12.png");
		menuItem->setSelectedSpriteFrame(frame);
		__isSpeed2X = false;
		NC_POST(SET_SPEED_1X);
	}
	else
	{
		SpriteFrame* frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("speed21.png");
		menuItem->setNormalSpriteFrame(frame);
		frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("speed22.png");
		menuItem->setSelectedSpriteFrame(frame);
		__isSpeed2X = true;
		NC_POST(SET_SPEED_2X);
	}
}


void UILayer::pauseMenuItemCallBack(Ref* sender)
{
	MenuItemImage* menuItem = static_cast<MenuItemImage*>(sender);
	if (__isPaused)
	{
		SpriteFrame* frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("pause01.png");
		menuItem->setNormalSpriteFrame(frame);
		frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("pause02.png");
		menuItem->setSelectedSpriteFrame(frame);
		__isPaused = false;

		__pauseLable->setVisible(false);
		__wavesLabel->setVisible(true);
		NC_POST(SET_GAME_CONTINUE);
	}
	else
	{
		SpriteFrame* frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("pause11.png");
		menuItem->setNormalSpriteFrame(frame);
		frame = SpriteFrameCache::getInstance()->getSpriteFrameByName("pause12.png");
		menuItem->setSelectedSpriteFrame(frame);
		__isPaused = true;

		__pauseLable->setVisible(true);
		__wavesLabel->setVisible(false);
		NC_POST(SET_GAME_PAUSE);
	}
}


void UILayer::menuItemCallBack(Ref* sender)
{
	//test code
	//++__curWave;
	//NC_POST_N(ADD_MONSTER_WAVE, (Ref*)(&__curWave));
}