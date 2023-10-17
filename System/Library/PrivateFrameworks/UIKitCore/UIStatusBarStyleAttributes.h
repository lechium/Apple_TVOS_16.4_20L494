//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface UIStatusBarStyleAttributes : NSObject
{
    UIStatusBarStyleRequest *_request;	// 8 = 0x8
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 16 = 0x10
    _Bool _pulsingAnimationEnabled;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000dc3dad
@property(nonatomic, getter=isPulsingAnimationEnabled) _Bool pulsingAnimationEnabled; // @synthesize pulsingAnimationEnabled=_pulsingAnimationEnabled;
- (long long)tapButtonType;	// IMP=0x0000000000dc3d8e
- (_Bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;	// IMP=0x0000000000dc3d86
- (double)glowAnimationDuration;	// IMP=0x0000000000dc3d7d
- (id)newForegroundStyleWithHeight:(double)arg1;	// IMP=0x0000000000dc3d75
- (id)backgroundImageName;	// IMP=0x0000000000dc3d6d
- (id)backgroundColorWithTintColor:(id)arg1;	// IMP=0x0000000000dc3d65
- (_Bool)shouldUseVisualAltitude;	// IMP=0x0000000000dc3d5d
- (_Bool)shouldProduceReturnEvent;	// IMP=0x0000000000dc3d55
- (_Bool)isDoubleHeight;	// IMP=0x0000000000dc3d4d
- (_Bool)usesVerticalLayout;	// IMP=0x0000000000dc3d09
- (_Bool)isLockScreen;	// IMP=0x0000000000dc3d01
- (_Bool)isTransparent;	// IMP=0x0000000000dc3cf9
- (_Bool)isTranslucent;	// IMP=0x0000000000dc3cf1
- (double)heightForMetrics:(long long)arg1;	// IMP=0x0000000000dc3ce8
- (double)heightForOrientation:(long long)arg1;	// IMP=0x0000000000dc3c24
- (long long)idiom;	// IMP=0x0000000000dc3bd9
- (id)foregroundStyle;	// IMP=0x0000000000dc3b25
- (_Bool)supportsRasterization;	// IMP=0x0000000000dc3b0c
- (long long)legibilityStyle;	// IMP=0x0000000000dc3af6
- (long long)style;	// IMP=0x0000000000dc3ae0
@property(nonatomic) double foregroundAlpha; // @dynamic foregroundAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dc39da
- (id)init;	// IMP=0x0000000000dc39c6
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000dc3953

@end
