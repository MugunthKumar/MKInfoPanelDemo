//
//  MKInfoPanelDemoAppDelegate.h
//  MKInfoPanelDemo
//
//  Created by Mugunth on 25/04/11.
//  Copyright 2011 Steinlogic. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MKInfoPanelDemoViewController;

@interface MKInfoPanelDemoAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MKInfoPanelDemoViewController *viewController;

@end
