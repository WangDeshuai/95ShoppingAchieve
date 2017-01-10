//
//  CityChooseVC.h
//  DistributionQuery
//
//  Created by Macx on 16/11/23.
//  Copyright © 2016年 Macx. All rights reserved.
//

#import "BaseViewController.h"
#import <CoreLocation/CoreLocation.h>

@interface CityChooseVC : BaseViewController<CLLocationManagerDelegate>
{
    CLLocationManager * _manager;
    //地理编码 反编码
    CLGeocoder * _coder;
}
@property(nonatomic,copy)void(^citynameBlock)(NSString*name,NSString*code,NSString*shengCode);
@end
