//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView
{
    CDStruct_227bb23d _visualStyling;	// 8 = 0x8
    UIView *_candidateKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000008c5524
@property(retain, nonatomic) UIView *candidateKey; // @synthesize candidateKey=_candidateKey;
@property(nonatomic) CDStruct_227bb23d visualStyling; // @synthesize visualStyling=_visualStyling;
- (void)clearCandidateKey;	// IMP=0x00000000008c53fc
- (void)updateCandidateKey;	// IMP=0x00000000008c4ab7
- (_Bool)isTenKey;	// IMP=0x00000000008c4a5e
- (id)candidateList;	// IMP=0x00000000008c4a07
- (void)displayLayer:(id)arg1;	// IMP=0x00000000008c4839
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000008c480b
- (void)dealloc;	// IMP=0x00000000008c4789
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000008c463e

@end
