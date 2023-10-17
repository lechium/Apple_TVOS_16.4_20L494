//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UITableCellAccessoryButton : UIButton
{
    UIColor *_accessoryTintColor;	// 144 = 0x90
    CDUnknownBlockType _backgroundImageProvider;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000002e63d8
@property(copy, nonatomic) CDUnknownBlockType backgroundImageProvider; // @synthesize backgroundImageProvider=_backgroundImageProvider;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
- (id)viewForLastBaselineLayout;	// IMP=0x00000000002e6393
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000002e6381
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000002e62d5
- (void)_reloadBackgroundImage;	// IMP=0x00000000002e6254
- (id)initWithFrame:(struct CGRect)arg1 backgroundImageProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e612e

@end
