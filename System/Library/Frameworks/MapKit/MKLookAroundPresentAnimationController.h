//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface MKLookAroundPresentAnimationController : NSObject
{
    UIView *_sourceView;	// 8 = 0x8
    struct CGRect _initialFrame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003f0e6
- (void)animateTransition:(id)arg1;	// IMP=0x000000000003ec03
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000003ebec
- (_Bool)_shouldUseSpringWithDampingAnimationStyle;	// IMP=0x000000000003ebd5
- (id)initWithSourceView:(id)arg1 initialFrame:(struct CGRect)arg2;	// IMP=0x000000000003eb4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

