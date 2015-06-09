#if TEST_CODE

#ifndef _TEST_LAYER_H_
#define _TEST_LAYER_H_

#include "cocos2d.h"
#include "cocostudio\CocoStudio.h"

USING_NS_CC;
using namespace cocostudio;

#pragma once


class TestSkeletonLayer :
	public cocos2d::Layer
{
public:
	virtual bool init();
	CREATE_FUNC(TestSkeletonLayer);
};

#endif

#endif