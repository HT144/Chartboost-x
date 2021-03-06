#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "ChartboostX.h"

class HelloWorld : public cocos2d::CCLayer, public ChartboostXDelegate
{
public:
    virtual bool init();  

    static cocos2d::CCScene* scene();
    
    void continueGameLogic();
    
    // selector callback
    void menuCloseCallback(CCObject* pSender);
    void menuCacheCallback(CCObject* pSender);
    void menuShowCallback(CCObject* pSender);
    
    // ChartboostXDelegate method
    bool shouldDisplayInterstitial(const char* location);
    void didCacheInterstitial(const char* location);
    void didFailToLoadInterstitial(const char* location);
    void didCloseInterstitial(const char* location);
    void didClickInterstitial(const char* location);
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);
    
private:
    bool m_interstitialShowed;
    bool m_gameLogicContinued;
};

#endif // __HELLOWORLD_SCENE_H__
