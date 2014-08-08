//
//  UIDevice+MYDevice.h
//  NSApp
//
//  Created by DongCai on 8/6/14.
//  Copyright (c) 2014 ___NoisimStudio___. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IS_IOS7 (([UIDevice deviceSystemMajorVersion] >= 7)?YES:NO)

@interface UIDevice (MYDevice)

+ (NSInteger)deviceSystemMajorVersion;

@end
