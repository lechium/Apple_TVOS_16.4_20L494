//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKitFocusableViewResponderItemBase.h"

@class MISSING_TYPE, NSArray;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_60C465D0E37117769FC505C04DE5239A24UIKitFocusableFillerItem : UIKitFocusableViewResponderItemBase
{
    MISSING_TYPE *host;	// 8 = 0x8
    MISSING_TYPE *axis;	// 16 = 0x10
    MISSING_TYPE *logicalFrame;	// 24 = 0x18
    MISSING_TYPE *focusableFrame;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000762cd0
- (id)init;	// IMP=0x0000000000762c8c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000762c4d
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000762c2b
- (void)updateFocusIfNeeded;	// IMP=0x0000000000766446
- (void)setNeedsFocusUpdate;	// IMP=0x0000000000762c0c
@property(nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property(nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) struct CGRect frame;

@end

