//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKBGradient : NSObject
{
    NSString *_gradientName;	// 8 = 0x8
    NSString *_flatColorName;	// 16 = 0x10
    NSString *_startColorName;	// 24 = 0x18
    NSString *_endColorName;	// 32 = 0x20
    NSArray *_colors;	// 40 = 0x28
    NSArray *_middleLocations;	// 48 = 0x30
    double _opacity;	// 56 = 0x38
    _Bool _horizontal;	// 64 = 0x40
    _Bool _usesRGBColors;	// 65 = 0x41
    _Bool _didQueryRGBColors;	// 66 = 0x42
}

+ (id)gradientWithColors:(id)arg1 middleLocations:(id)arg2;	// IMP=0x001000000092d106
+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;	// IMP=0x001000000092d0ab
+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;	// IMP=0x001000000092d03f
+ (id)gradientWithFlatColor:(id)arg1;	// IMP=0x001000000092cff6
+ (id)gradientWithName:(id)arg1;	// IMP=0x001000000092cfad
- (void).cxx_destruct;	// IMP=0x000000000092d863
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000092d7b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000092d626
- (id)description;	// IMP=0x000000000092d4d2
- (id)initWithColors:(id)arg1 middleLocations:(id)arg2;	// IMP=0x000000000092d419
- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;	// IMP=0x000000000092d30b
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;	// IMP=0x000000000092d264
- (id)initWithFlatColor:(id)arg1;	// IMP=0x000000000092d1eb
- (id)initWithName:(id)arg1;	// IMP=0x000000000092d172
- (struct CGGradient *)CGGradient;	// IMP=0x000000000092cb89
@property(readonly, nonatomic) NSString *flatColorName;
@property(readonly, nonatomic) _Bool usesRGBColors;

@end

