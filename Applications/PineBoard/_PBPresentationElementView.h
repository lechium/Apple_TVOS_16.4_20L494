//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface _PBPresentationElementView : UIView
{
    _Bool _containedInVisibleWindow;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isContainedInVisibleWindow) _Bool containedInVisibleWindow; // @synthesize containedInVisibleWindow=_containedInVisibleWindow;
- (void)_updateStateForWindow:(id)arg1;	// IMP=0x00100000000a3fa5
- (void)_updateObserversForWindow:(id)arg1;	// IMP=0x00100000000a3e3a
- (void)_windowDidBecomeHidden:(id)arg1;	// IMP=0x00100000000a3dea
- (void);	// IMP=0x00100000000a3d9a
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00100000000a3d63
- (void)didMoveToWindow;	// IMP=0x00100000000a3d06
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000a3cb6

@end

