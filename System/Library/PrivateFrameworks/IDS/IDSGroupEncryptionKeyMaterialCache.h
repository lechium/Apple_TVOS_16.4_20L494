//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSGroupEncryptionKeyMaterialCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_cache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000041fa9
- (void)enumerateCachedKeyMaterialUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041cc8
- (void)invalidateKeyMaterialByKeyIndexes:(id)arg1;	// IMP=0x00000000000418c7
- (void)recvKeyMaterial:(id)arg1;	// IMP=0x00000000000417b8
- (id)init;	// IMP=0x00000000000416e0

@end

