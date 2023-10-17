//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface PGMobilePIPSettings : PTSettings
{
    double _shadowOpacity;	// 8 = 0x8
    double _shadowRadius;	// 16 = 0x10
    double _shadowOffsetX;	// 24 = 0x18
    double _shadowOffsetY;	// 32 = 0x20
    double _shadowContinuousCornerRadius;	// 40 = 0x28
}

+ (id)settingsControllerModule;	// IMP=0x0060000000043eee
@property(nonatomic) double shadowContinuousCornerRadius; // @synthesize shadowContinuousCornerRadius=_shadowContinuousCornerRadius;
@property(nonatomic) double shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) double shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
- (void)setDefaultValues;	// IMP=0x0000000000043e5a

@end

