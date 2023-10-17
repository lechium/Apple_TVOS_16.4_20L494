//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionMetaAccumulator
{
    NSArray *_accumulators;	// 112 = 0x70
    long long _lastSuccessfulIndex;	// 120 = 0x78
    unsigned long long _actionCountWithoutIncrease;	// 128 = 0x80
}

+ (id)accumulatorWithName:(id)arg1 accumulators:(id)arg2;	// IMP=0x0060000000f26f59
- (void).cxx_destruct;	// IMP=0x0000000000f277b6
- (void)reset;	// IMP=0x0000000000f27657
- (void)increaseWithActions:(id)arg1;	// IMP=0x0000000000f27361
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f272f1

@end

