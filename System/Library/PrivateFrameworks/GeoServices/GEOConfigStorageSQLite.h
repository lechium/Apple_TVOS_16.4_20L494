//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOConfigStorageSQLite
{
}

- (id)getAllExpiringKeys;	// IMP=0x00000000011d3676
- (void)clearConfigKeyExpiry:(id)arg1;	// IMP=0x00000000011d365f
- (void)setConfigKeyExpiry:(id)arg1 date:(id)arg2 osVersion:(id)arg3;	// IMP=0x00000000011d34a3
- (_Bool)getConfigKeyExpiry:(id)arg1 date:(id *)arg2 osVersion:(id *)arg3;	// IMP=0x00000000011d338c
- (_Bool)getConfigKeyIsExpired:(id)arg1;	// IMP=0x00000000011d3348
- (id)_getExpiringKeyForKey:(id)arg1;	// IMP=0x00000000011d3297
- (void)_instanceSpecificSetValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000011d3281
- (id)_instanceSpecificGetKeyPath:(id)arg1;	// IMP=0x00000000011d326b
- (id)_instanceSpecificGetKey:(id)arg1;	// IMP=0x00000000011d3255

@end
