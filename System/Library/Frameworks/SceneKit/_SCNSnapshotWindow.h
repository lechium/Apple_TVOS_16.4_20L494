//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

__attribute__((visibility("hidden")))
@interface _SCNSnapshotWindow : UIWindow
{
}

- (struct CGPoint)warpPoint:(struct CGPoint)arg1;	// IMP=0x000000000027f655
- (struct CGPoint)_warpPoint:(struct CGPoint)arg1 outOfBounds:(_Bool *)arg2;	// IMP=0x000000000027f329
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;	// IMP=0x000000000027f1a0
- (id)scnView;	// IMP=0x000000000027f193
- (_Bool)_canBecomeKeyWindow;	// IMP=0x000000000027f18b
- (void)_setFirstResponder:(id)arg1;	// IMP=0x000000000027f185
- (_Bool)_isSettingFirstResponder;	// IMP=0x000000000027f17d
- (void)dealloc;	// IMP=0x000000000027f14e

@end

