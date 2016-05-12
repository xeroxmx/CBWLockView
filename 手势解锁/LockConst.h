//
//  LockConst.h
//  手势解锁
//
//  Created by 陈博文 on 16/5/12.
//  Copyright © 2016年 陈波文. All rights reserved.
//

#import <Foundation/Foundation.h>

#define rgba(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
static NSString *lengthTips = @"长度必须大于4";
static NSString *firstTips = @"请再次输入密码";
static NSString *setKeyerrorTips = @"与上次不统一,需要重新设置";
static NSString *verifyKeyTips = @"密码错误,请重新输入";
static NSString *gestureKey = @"gestureKey";
static const float circleViewWH = 60;
static const float errorDisplayTime = 0.6f;

static const float innerCircleRadius = 20;
static const float innerCircleWidth = 20;//设置宽度等于半径,就会等于实心圆

#define mainScreenW [UIScreen mainScreen].bounds.size.width
#define circleViewBackgroupColor [UIColor clearColor]


#define outerCircleColorNormal [UIColor whiteColor]
#define outerCircleColorSelected [UIColor yellowColor]
#define outerCircleColorError [UIColor redColor]

#define innnerCircleColorNormal [UIColor clearColor]
#define innnerCircleColorSelected [UIColor yellowColor]
#define innnerCircleColorError [UIColor redColor]

@interface LockConst : NSObject

//保存密码
+ (void)saveGesture:(NSString *)gesture Key:(NSString *)key;
//获取密码
+ (NSString *)getGestureWithKey:(NSString *)key;

@end
