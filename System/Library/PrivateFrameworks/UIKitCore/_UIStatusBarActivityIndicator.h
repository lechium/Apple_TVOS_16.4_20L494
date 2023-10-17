//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIActivityIndicatorView.h"

@class NSString, UIAccessibilityHUDItem;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIndicator : UIActivityIndicatorView
{
    struct UIEdgeInsets _alignmentRectInsets;	// 8 = 0x8
}

@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000d3e52b
@property(readonly, nonatomic) _Bool wantsCrossfade;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly, nonatomic) _Bool prefersCenterVerticalAlignment;
@property(readonly) Class superclass;

@end

