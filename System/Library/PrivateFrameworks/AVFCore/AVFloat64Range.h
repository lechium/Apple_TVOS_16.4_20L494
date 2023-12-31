//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVFloat64Range : NSObject
{
    double _minimum;	// 8 = 0x8
    double _maximum;	// 16 = 0x10
}

+ (id)float64RangeWithAudioValueRange:(struct AudioValueRange)arg1;	// IMP=0x0010000000115ff6
+ (id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2;	// IMP=0x0010000000115fb8
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001161ce
- (id)description;	// IMP=0x000000000011614c
- (unsigned long long)hash;	// IMP=0x00000000001160d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000116034
- (id)initWithAudioValueRange:(struct AudioValueRange)arg1;	// IMP=0x0000000000115fa6
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;	// IMP=0x0000000000115f54

@end

