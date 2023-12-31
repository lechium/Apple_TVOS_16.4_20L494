//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;
@protocol _UIStatusBarPillRegionVisualProvider;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_PillRegionCoordinator : NSObject
{
    _Bool _visualProviderImplementsBackgroundActivityPillAnimation;	// 8 = 0x8
    id <_UIStatusBarPillRegionVisualProvider> _visualProvider;	// 16 = 0x10
    _UIStatusBarDisplayItemPlacement *_backgroundActivityDetailPlacement;	// 24 = 0x18
    _UIStatusBarDisplayItemPlacement *_pillIconPlacement;	// 32 = 0x20
    _UIStatusBarRegion *_pillRegion;	// 40 = 0x28
    NSTimer *_backgroundActivityDetailTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000e3645e
@property(retain, nonatomic) NSTimer *backgroundActivityDetailTimer; // @synthesize backgroundActivityDetailTimer=_backgroundActivityDetailTimer;
@property(retain, nonatomic) _UIStatusBarRegion *pillRegion; // @synthesize pillRegion=_pillRegion;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement; // @synthesize pillIconPlacement=_pillIconPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement; // @synthesize backgroundActivityDetailPlacement=_backgroundActivityDetailPlacement;
@property(nonatomic) __weak id <_UIStatusBarPillRegionVisualProvider> visualProvider; // @synthesize visualProvider=_visualProvider;
- (_Bool)handledUpdateOfActionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000e3632d
- (void)updateRegion:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3 cornerRadius:(double)arg4;	// IMP=0x0000000000e36146
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2;	// IMP=0x0000000000e35f10
- (id)animationForBackgroundActivityPill;	// IMP=0x0000000000e35ef3
- (id)animationForBackgroundActivityIcon;	// IMP=0x0000000000e35d71
- (void)_hideActivityDetailAndUpdate:(_Bool)arg1;	// IMP=0x0000000000e35c90
- (void)updatePill;	// IMP=0x0000000000e35c74
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(_Bool)arg3;	// IMP=0x0000000000e35860
- (void)updateDataForBackgroundActivity:(id)arg1;	// IMP=0x0000000000e354c2

@end

