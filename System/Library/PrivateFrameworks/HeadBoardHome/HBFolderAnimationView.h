//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, _UIStackedImageConfiguration;

__attribute__((visibility("hidden")))
@interface HBFolderAnimationView : UIView
{
    NSArray *_images;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    NSArray *_imageViews;	// 24 = 0x18
    unsigned long long _numberOfColumns;	// 32 = 0x20
    double _verticalSpacing;	// 40 = 0x28
    _UIStackedImageConfiguration *_configuration;	// 48 = 0x30
    struct UIEdgeInsets _edgeInsets;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005e63b
@property(retain, nonatomic) _UIStackedImageConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)_updateWithCurrentStyle;	// IMP=0x000000000005dfa4
- (void)_updateImageViews;	// IMP=0x000000000005dc03
@property(readonly, nonatomic) struct CGSize imageSize;
- (void)layoutSubviews;	// IMP=0x000000000005d5a9
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000005d419
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005d3ad

@end

