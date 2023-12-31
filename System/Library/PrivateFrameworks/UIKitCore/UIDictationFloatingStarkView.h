//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDictationView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationFloatingStarkView : UIDictationView
{
}

- (void)endpointButtonPressed;	// IMP=0x00000000009cff33
- (void)show;	// IMP=0x00000000009cfd45
- (struct CGPoint)positionForShow;	// IMP=0x00000000009cfd22
- (void)returnToKeyboard;	// IMP=0x00000000009cfae6
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x00000000009cfaa2
- (void)setInputViewsHiddenForDictation:(_Bool)arg1;	// IMP=0x00000000009cf89d
- (void)setState:(int)arg1;	// IMP=0x00000000009cf4fb
- (void)prepareForReturnToKeyboard;	// IMP=0x00000000009cf468
- (void)finishReturnToKeyboard;	// IMP=0x00000000009cf40c
- (void)layoutSubviews;	// IMP=0x00000000009cf12b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009ced2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

