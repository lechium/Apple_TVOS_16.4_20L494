//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIToolbar, UIView;
@protocol _UIBarAppearanceChangeObserver;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProvider : NSObject
{
    UIToolbar *_toolbar;	// 8 = 0x8
    NSString *_backdropGroupName;	// 16 = 0x10
    UIView *_customBackgroundView;	// 24 = 0x18
    UIView *_currentBackgroundView;	// 32 = 0x20
}

+ (_Bool)shouldDecodeSubviews;	// IMP=0x00600000002104cd
- (void).cxx_destruct;	// IMP=0x000000000021050e
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(readonly, nonatomic) UIView *currentBackgroundView; // @synthesize currentBackgroundView=_currentBackgroundView;
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x00000000002104c7
@property(nonatomic) long long itemDistribution;
@property(readonly, nonatomic) _Bool toolbarIsSmall;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;	// IMP=0x000000000021049b
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;	// IMP=0x0000000000210485
- (void)customViewChangedForButtonItem:(id)arg1;	// IMP=0x000000000021047f
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;	// IMP=0x0000000000210479
- (void)updateItemsForNewFrame:(id)arg1;	// IMP=0x0000000000210473
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;	// IMP=0x000000000021046d
- (void)layoutSubviews;	// IMP=0x0000000000210467
@property(nonatomic) double backgroundTransitionProgress; // @dynamic backgroundTransitionProgress;
- (void)updateBarBackgroundSize;	// IMP=0x0000000000210452
- (void)updateBarBackground;	// IMP=0x000000000021044c
- (void)prepare;	// IMP=0x0000000000210446
- (void)updateAppearance;	// IMP=0x0000000000210440
@property(readonly, nonatomic) id <_UIBarAppearanceChangeObserver> appearanceObserver;
@property(nonatomic) _Bool useModernAppearance;
- (void)updateBackgroundGroupName;	// IMP=0x0000000000210424
- (void)updateBarForStyle:(long long)arg1;	// IMP=0x000000000021033d
- (void)drawBackgroundViewInRect:(struct CGRect)arg1;	// IMP=0x0000000000210337
@property(readonly, nonatomic) struct CGRect backgroundFrame;
- (id)initWithToolbar:(id)arg1;	// IMP=0x00000000002102dc

@end

