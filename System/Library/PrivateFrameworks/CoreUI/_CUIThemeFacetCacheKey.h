//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIThemeFacetCacheKey : NSObject
{
    struct _renditionkeytoken keyList[22];	// 8 = 0x8
    long long themeIndex;	// 96 = 0x60
    unsigned long long hashPrecalc;	// 104 = 0x68
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000052cb7
- (unsigned long long)hash;	// IMP=0x0000000000052cad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052c54
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1 themeIndex:(long long)arg2;	// IMP=0x0000000000052bb6
- (unsigned long long)hash64;	// IMP=0x0000000000052b51

@end

