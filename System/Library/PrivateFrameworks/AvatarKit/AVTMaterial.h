//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface AVTMaterial : NSObject
{
    UIColor *_baseColor;	// 8 = 0x8
    NSDictionary *_additionalPropertyColors;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001da92
@property(retain, nonatomic) NSDictionary *additionalPropertyColors; // @synthesize additionalPropertyColors=_additionalPropertyColors;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
- (id)description;	// IMP=0x000000000001d9ae
- (void)applyToSceneKitMaterial:(id)arg1;	// IMP=0x000000000001d7ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d78f

@end

