//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class PBUIDebugRootViewController;

@interface PBUIDebugWindow : UIWindow
{
}

- (void)_updateRootViewController;	// IMP=0x00200000002042e0
- (_Bool)_ignoresHitTest;	// IMP=0x00100000002042d8
- (_Bool)_canBecomeKeyWindow;	// IMP=0x00100000002042d0
@property(retain, nonatomic) PBUIDebugRootViewController *rootViewController; // @dynamic rootViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000002041cb
- (void)dealloc;	// IMP=0x00100000002040f9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000203fff

@end

