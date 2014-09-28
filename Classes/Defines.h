//
//  Defines.h
//  Parkour
//
//  Created by ethan yang on 13-10-12.
//
//


#ifndef __TowerDefense_Defines_h
#define __TowerDefense_Defines_h

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "SimpleAudioEngine.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#include "CCStdC.h"
#endif

//lib
//#include "iLayer.h"

//#include "iLog.h"
//#include "PersonalAudioEngine.h"
//#include "cocos2dUIEx.h"
//#include "GameBase.h"
//#include "GameData.h"
//#include "StaticData.h"
//#include "EBuffer.h"

//USING_NS_CC;

// 1 - convenience measurements
#define SCREEN Director::getInstance()->getWinSize()
//#define SCREEN Size(768, 1136)
#define CENTER Point(SCREEN.width / 2, SCREEN.height / 2)
#define CURTIME GetCurTime()

/**
 *  通知简化
 *
 *NC_ADD(this, callfuncO_selector(UIScene::closeShop), NC_UI_SHOP_CLOSE, nullptr);
 *NC_POST(NC_UI_SHOP_CLOSE);
 *NC_REM(this, NC_UI_SHOP_CLOSE);
 *
 */

#define NC_ADD(this, callfuncO_selector, str, nullptr) NotificationCenter::getInstance()->addObserver(this, callfuncO_selector, str, nullptr)

//#define NC_POST(str) NotificationCenter::getInstance()->postNotification(str)
#define NC_POST(str, obj) NotificationCenter::getInstance()->postNotification(str, obj)

#define NC_REM(this, str)  NotificationCenter::getInstance()->removeObserver(this, str)

//
// 生成随即数种子
//
//#define srand()           cc_timeval psv; \
//CCTime::gettimeofdayCocos2d( &psv, NULL ); \
//unsigned int tsrans = psv.tv_sec * 1000 + psv.tv_usec / 1000; \
//srand( tsrans )

// 2 - convenience functions
#ifndef UINT64_C
#define UINT64_C(val) val##ui64
#endif
#define random_range(low, high) (rand() % (high - low + 1)) + low
#define frandom (float)rand() / (0x100000000)//UINT64_C
#define frandom_range(low, high) ((high - low) * CCRANDOM_0_1()) + low


#define CREATE_FUNC_I(__TYPE__) \
static __TYPE__* create(int id) \
{ \
__TYPE__ *pRet = new __TYPE__(); \
if (pRet && pRet->init(id)) \
{ \
pRet->autorelease(); \
return pRet; \
} \
else \
{ \
delete pRet; \
pRet = NULL; \
return NULL; \
} \
}

#define CREATE_FUNC_I_I(__TYPE__) \
static __TYPE__* create(int p1, int p2) \
{ \
__TYPE__ *pRet = new __TYPE__(); \
if (pRet && pRet->init(p1, p2)) \
{ \
pRet->autorelease(); \
return pRet; \
} \
else \
{ \
delete pRet; \
pRet = NULL; \
return NULL; \
} \
}

// 3 - enumerations
//typedef enum _ActionState {
//	kActionStateNone = 0,
//	kActionStateIdle,
//	kActionStateAttack,
//	kActionStateWalk,
//	kActionStateHurt,
//	kActionStateKnockedOut
//} ActionState;
//
//typedef enum _ObjType
//{
//    Obj_Hero,
//    Obj_Gold,
//    Obj_Enemy,
//    Obj_Building,
//}ObjType;



// 4 - structures
typedef struct _BoundingBox {
	cocos2d::Rect actual;
	cocos2d::Rect original;
} BoundingBox;

inline float GetCurTime(){
	timeval time;
	//gettimeofday(&time, NULL);
	unsigned long millisecs = (time.tv_sec * 1000) + (time.tv_usec / 1000);
	return (float)millisecs;
};

inline tm* getCurTime()
{
    struct tm *tm;
    time_t timep;
    time(&timep);
    tm = localtime(&timep);
    int year = tm->tm_year + 1900;
    int month = tm->tm_mon + 1;
    int day = tm->tm_mday;
    int hour=tm->tm_hour;
    int minute=tm->tm_min;
    int second=tm->tm_sec;
    return tm;
}

inline int getCurTimeYear()
{
    struct tm *tm;
    time_t timep;
    time(&timep);
    tm = localtime(&timep);

    return tm->tm_year + 1900;
}

inline int getCurTimeMonth()
{
    struct tm *tm;
    time_t timep;
    time(&timep);
    tm = localtime(&timep);
    
    return tm->tm_mon + 1;
}

inline int getCurTimeDay()
{
    struct tm *tm;
    time_t timep;
    time(&timep);
    tm = localtime(&timep);
    return tm->tm_mday;
}

inline int getCurTimeHour()
{
    struct tm *tm;
    time_t timep;
    time(&timep);
    tm = localtime(&timep);
    
    return tm->tm_hour;
}

inline int getCurTimeMin()
{
    struct tm *tm;
    time_t timep;
    time(&timep);
    tm = localtime(&timep);
    
    return tm->tm_min;
}


inline int getCurTimeSec()
{
    struct tm *tm;
    time_t timep;
    time(&timep);
    tm = localtime(&timep);
    
    return tm->tm_sec;
}

typedef std::vector<std::string> strArray;

// string toolkit
static inline void iSplit(const std::string& src, const std::string& token, strArray& vect)
{
    size_t nend = 0;
    size_t nbegin = 0;
    size_t tokenSize = token.size();
    while(nend != std::string::npos)
    {
        nend = src.find(token, nbegin);
        if(nend == std::string::npos)
            vect.push_back(src.substr(nbegin, src.length()-nbegin));
        else
            vect.push_back(src.substr(nbegin, nend-nbegin));
        nbegin = nend + tokenSize;
    }
}

static inline int stringToInt(std::string str)
{
    const char* c = str.c_str();
    int pInt = atoi(c);
    return pInt;
}

#endif
