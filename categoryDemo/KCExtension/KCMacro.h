//
//  KCMacro.h
//  categoryDemo
//
//  Created by zhangweiwei on 16/5/6.
//  Copyright © 2016年 Erica. All rights reserved.
//

#ifndef KCMacro_h
#define KCMacro_h

// 颜色相关宏
#define KC_RGBA_COLOR(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define KC_RGB_COLOR(r,g,b) KC_RGBA_COLOR(r,g,b,1)
#define KC_RANDOM_COLOR KC_RGB_COLOR(arc4random_uniform(256),arc4random_uniform(256),arc4random_uniform(256))
#define KC_HEX_COLOR(hexValue) KC_RGB_COLOR(((hexValue & 0xFF0000) >> 16)/255.0,((hexValue & 0xFF00) >> 8)/255.0,(hexValue & 0xFF)/255.0)

// 字体相关
#define KC_SYSTEM_FONT_SIZE(size) [UIFont systemFontOfSize:size]

// 单例宏
#define KC_NOTIFICATION_CENTER [NSNotificationCenter defaultCenter]
#define KC_APPLICATION [UIApplication shareApplication]
#define KC_USER_DEFAULTS [NSUserDefaults standardUserDefaults]

// 通知相关宏
#define KC_REMOVE_NOTIFICATION [KC_NOTIFICATION_CENTER removeObserver:self];
#define KC_POST_NOTIFICATION(name,obj,info) [KC_NOTIFICATION_CENTER  postNotificationName:name object:obj userInfo:info];
// 此宏暂时有问题，需要调整
#define KC_ADD_NOTIFICATION_OBSERVER(selector,name) [KC_NOTIFICATION_CENTER addObserver:self selector:selector name:name object:nil];

// 系统版本，设备相关
#define KC_SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define KC_IS_IOS8 KC_SYSTEM_VERSION >= 8.0
#define KC_IS_IOS9 KC_SYSTEM_VERSION >= 9.0

// 屏幕相关
#define KC_SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define KC_SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

//弱引用
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

#endif /* KCMacro_h */
