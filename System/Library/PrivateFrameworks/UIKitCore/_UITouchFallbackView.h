//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol _UITouchFallbackViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITouchFallbackView : UIView
{
    id <_UITouchFallbackViewDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) id <_UITouchFallbackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000060d12
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000060d07
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000060c66

@end
