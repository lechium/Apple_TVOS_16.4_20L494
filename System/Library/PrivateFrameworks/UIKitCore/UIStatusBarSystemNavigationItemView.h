//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarSystemNavigationItemView
{
    int _currentLabelCompressionLevel;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000d3d65b
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) int currentLabelCompressionLevel; // @synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (double)extraRightPadding;	// IMP=0x0000000000d3d5e0
- (double)extraLeftPadding;	// IMP=0x0000000000d3d5bd
- (id)shortenedTitleWithCompressionLevel:(int)arg1;	// IMP=0x0000000000d3d5b5
- (void)userDidActivateButton:(id)arg1;	// IMP=0x0000000000d3d5af
- (long long)labelLineBreakMode;	// IMP=0x0000000000d3d5a4
- (_Bool)layoutImageOnTrailingEdge;	// IMP=0x0000000000d3d59c
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000d3d4e0
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000d3d3ad
- (double)resetContentOverlap;	// IMP=0x0000000000d3d37c
@property(retain, nonatomic) NSString *title;
- (double)updateContentsAndWidth;	// IMP=0x0000000000d3d14e
- (struct CGSize)_buttonSize;	// IMP=0x0000000000d3d0a6
- (_Bool)_shouldLayoutImageOnRight;	// IMP=0x0000000000d3ccf6

@end

