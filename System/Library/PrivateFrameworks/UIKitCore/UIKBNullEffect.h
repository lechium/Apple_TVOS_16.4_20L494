//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBNullEffect : NSObject
{
}

+ (id)nullEffect;	// IMP=0x001000000092bca2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000092bcb4
- (struct CGColor *)CGColor;	// IMP=0x000000000092bc9a
@property(readonly, nonatomic) UIKBGradient *gradient;
@property(readonly, nonatomic) _Bool usesRGBColors;
@property(nonatomic) double weight;
- (void)renderEffectWithRenderer:(id)arg1 traits:(id)arg2;	// IMP=0x000000000092bc60
@property(readonly, nonatomic) _Bool renderUnder;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
