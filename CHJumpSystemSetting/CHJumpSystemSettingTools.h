//
//  CHJumpSystemSettingTools.h
//  CHJumpSystemSetting-Demo
//
//  Created by 张晨晖 on 2018/7/30.
//  Copyright © 2018年 张晨晖. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, CHJumpServerType) {///跳转某个服务的设置界面
    CHJumpTypeSetting,///Setting,设置
    CHJumpTypeWIFI,///WIFI,Wifi
    CHJumpTypeBluetooth,///Bluetooth,蓝牙
    CHJumpTypeNotifications,///Notifications,通知
    CHJumpTypeGeneral,///General,通用设置
    CHJumpTypeDisPlay,///DisPlay,显示
    CHJumpTypeWallpaper,///Wallpaper,壁纸
    CHJumpTypeSounds,///Sounds,声音
    CHJumpTypePrivacy,///Privacy,隐私
    CHJumpTypeCellularNetwork,///cellular network,蜂窝网设置
    CHJumpTypeMusic,///music,音乐设置
    CHJumpTypeAppStore,///AppStore,AppStore设置
    CHJumpTypeSafari,///Safari,Safari设置
    CHJumpTypePhoto,///photo,照片设置
};

@interface CHJumpSystemSettingTools : NSObject

//API_AVAILABLE(ios(10.0))

@end
