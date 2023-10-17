//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffectViewEntry
{
    NSString *_filterType;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    double _alpha;	// 32 = 0x20
}

+ (id)newEntryWithFilterType:(id)arg1 image:(id)arg2 alpha:(double)arg3;	// IMP=0x00600000000d8646
+ (id)newEntryWithFilterType:(id)arg1 color:(id)arg2 alpha:(double)arg3;	// IMP=0x00600000000d8557
- (void).cxx_destruct;	// IMP=0x00000000000d8abd
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (id)description;	// IMP=0x00000000000d89a3
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x00000000000d8945
- (void)removeEffectFromView:(id)arg1;	// IMP=0x00000000000d8884
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x00000000000d886c
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x00000000000d884b
- (void)addEffectToView:(id)arg1;	// IMP=0x00000000000d877f

@end

