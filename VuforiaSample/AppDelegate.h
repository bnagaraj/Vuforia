//
//  AppDelegate.h
//  VuforiaSample
//
//  Created by Nagaraj on 22/12/15.
//  Copyright © 2015 Nagaraj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SampleGLResourceHandler.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, weak) id<SampleGLResourceHandler> glResourceHandler;

@end

