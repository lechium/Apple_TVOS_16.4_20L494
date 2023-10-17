//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKBDictationDisplayView : UIKBKeyView
{
    UIDictationView *_dictationView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008c68f0
@property(retain, nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
- (void)removeFromSuperview;	// IMP=0x00000000008c67be
- (void)prepareForDisplay;	// IMP=0x00000000008c6621
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000008c65dd
- (void)updateDictationColor;	// IMP=0x00000000008c6522
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000008c64e1
- (void)dealloc;	// IMP=0x00000000008c6414
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000008c63b2

@end

