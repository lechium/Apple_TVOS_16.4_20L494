//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKHexadecimalIntegerEventStatistic
{
    unsigned long long _value;	// 8 = 0x8
    long long _hexFormatModifier;	// 16 = 0x10
}

+ (id)statisticWithLabel:(id)arg1 hexFormatModifier:(long long)arg2;	// IMP=0x0040000000048ff9
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000049350
- (void)reset;	// IMP=0x0010000000049310
- (void)excludeMask:(unsigned long long)arg1;	// IMP=0x00100000000492f0
- (void)includeMask:(unsigned long long)arg1;	// IMP=0x00100000000492d3
- (void)excludeBitNumber:(long long)arg1;	// IMP=0x00100000000492af
- (void)includeBitNumber:(long long)arg1;	// IMP=0x001000000004928b
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000004911d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000490a5
- (unsigned long long)hash;	// IMP=0x001000000004904c

@end

