//
//  MKInfoPanel.h
//  HorizontalMenu
//
//  Created by Mugunth on 25/04/11.
//  Copyright 2011 Steinlogic. All rights reserved.
//  Permission granted to do anything, commercial/non-commercial with this file apart from removing the line/URL above
//  Read my blog post at http://mk.sg/8e on how to use this code

//  As a side note on using this code, you might consider giving some credit to me by
//	1) linking my website from your app's website 
//	2) or crediting me inside the app's credits page 
//	3) or a tweet mentioning @mugunthkumar
//	4) A paypal donation to mugunth.kumar@gmail.com
//
//  A note on redistribution
//	While I'm ok with modifications to this source code, 
//	if you are re-publishing after editing, please retain the above copyright notices

#import <UIKit/UIKit.h>
#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

typedef enum {    
    MKInfoPanelTypeInfo,
    MKInfoPanelTypeError
} MKInfoPanelType;

@interface MKInfoPanel : UIView {
    
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    
    UIImageView *_thumbImage;
    UIImageView *_backgroundGradient;
    
    SEL _onTouched;
    
    id _delegate;
    SEL _onFinished;
    
    MKInfoPanelType type_;
}

@property (nonatomic, assign) IBOutlet UILabel *titleLabel;
@property (nonatomic, assign) IBOutlet UILabel *detailLabel;
@property (nonatomic, assign) IBOutlet UIImageView *thumbImage;
@property (nonatomic, assign) IBOutlet UIImageView *backgroundGradient;
@property (nonatomic, assign) SEL onTouched;
@property (nonatomic, assign) id delegate;
@property (nonatomic, assign) SEL onFinished;

+ (MKInfoPanel *)showPanelInView:(UIView*)view type:(MKInfoPanelType)type title:(NSString *)title subtitle:(NSString *)subtitle;
+ (MKInfoPanel *)showPanelInView:(UIView*)view type:(MKInfoPanelType)type title:(NSString *)title subtitle:(NSString *)subtitle hideAfter:(NSTimeInterval)interval;

+ (MKInfoPanel *)showPanelInWindow:(UIWindow*)window type:(MKInfoPanelType)type title:(NSString *)title subtitle:(NSString *)subtitle;
+ (MKInfoPanel *)showPanelInWindow:(UIWindow*)window type:(MKInfoPanelType)type title:(NSString *)title subtitle:(NSString *)subtitle hideAfter:(NSTimeInterval)interval;

- (void)hidePanel;

@end
