//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSQueryGenerationToken.h"

@class NSString, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _NSQueryGenerationToken : NSQueryGenerationToken
{
    NSString *_storeIdentifier;	// 8 = 0x8
    _PFWeakReference *_store;	// 16 = 0x10
    id _generationIdentifier;	// 24 = 0x18
    struct _queryGenerationFlags {
        unsigned int _isCompound:1;
        unsigned int _isSingleton:1;
        unsigned int _freeValueOnDealloc:1;
        unsigned int _isUnmoored:1;
        unsigned int _reservedFlags:12;
    } _flags;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e9815
- (id)persistentStoreCoordinator;	// IMP=0x00000000000eae8b
- (id)description;	// IMP=0x00000000000ea19f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea0e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9e3c
- (id)autorelease;	// IMP=0x00000000000e9e00
- (oneway void)release;	// IMP=0x00000000000e9dc4
- (id)retain;	// IMP=0x00000000000e9d88
- (void)dealloc;	// IMP=0x00000000000e9b8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e9a55
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e981d

@end

