//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFNumber
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000005daea
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000005da27
- (long long)compare:(id)arg1;	// IMP=0x000000000005e3c4
- (long long)_reverseCompare:(id)arg1;	// IMP=0x000000000005e398
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;	// IMP=0x000000000005e29c
- (long long)_cfNumberType;	// IMP=0x000000000005e187
- (unsigned long long)_cfTypeID;	// IMP=0x000000000005e181
- (_Bool)boolValue;	// IMP=0x000000000005e0ff
- (unsigned long long)unsignedIntegerValue;	// IMP=0x000000000005e0f2
- (long long)integerValue;	// IMP=0x000000000005e0e5
- (double)doubleValue;	// IMP=0x000000000005e09d
- (float)floatValue;	// IMP=0x000000000005e055
- (unsigned long long)unsignedLongLongValue;	// IMP=0x000000000005e00d
- (long long)longLongValue;	// IMP=0x000000000005dfc6
- (unsigned long long)unsignedLongValue;	// IMP=0x000000000005df7e
- (long long)longValue;	// IMP=0x000000000005df37
- (unsigned int)unsignedIntValue;	// IMP=0x000000000005def1
- (int)intValue;	// IMP=0x000000000005deab
- (unsigned short)unsignedShortValue;	// IMP=0x000000000005de64
- (short)shortValue;	// IMP=0x000000000005de1d
- (unsigned char)unsignedCharValue;	// IMP=0x000000000005ddd6
- (BOOL)charValue;	// IMP=0x000000000005dd8f
- (const char *)objCType;	// IMP=0x000000000005dd61
- (void)getValue:(void *)arg1;	// IMP=0x000000000005dcb8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005dcab
- (id)stringValue;	// IMP=0x000000000005dc14
- (id)description;	// IMP=0x000000000005db87
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005daed
- (unsigned long long)retainCount;	// IMP=0x000000000005dae5
- (_Bool)_isDeallocating;	// IMP=0x000000000005dad5
- (_Bool)_tryRetain;	// IMP=0x000000000005dac4
- (oneway void)release;	// IMP=0x000000000005daba
- (id)retain;	// IMP=0x000000000005daad
- (unsigned long long)hash;	// IMP=0x000000000005daa8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005da63
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x000000000005da42
- (_Bool)isNSNumber__;	// IMP=0x000000000005da3f

@end

