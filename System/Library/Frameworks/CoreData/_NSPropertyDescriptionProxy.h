//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEntityDescription, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSPropertyDescriptionProxy : NSObject
{
    id _sourceBuffer;	// 8 = 0x8
    NSPropertyDescription *_underlyingProperty;	// 16 = 0x10
    NSEntityDescription *_entityDescription;	// 24 = 0x18
    unsigned int _entitysReferenceIDForProperty;	// 32 = 0x20
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x001000000023010c
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000022fe5f
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000002300f6
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000002300ec
- (unsigned long long)hash;	// IMP=0x00000000002300d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002300c0
- (Class)class;	// IMP=0x00000000002300b2
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;	// IMP=0x0000000000230047
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000230033
- (void)_setEntityAndMaintainIndices:(id)arg1;	// IMP=0x0000000000230029
- (void)_setEntity:(id)arg1;	// IMP=0x000000000023001f
- (void)_createCachesAndOptimizeState;	// IMP=0x0000000000230019
- (id)entity;	// IMP=0x000000000023000f
- (unsigned int)_entitysReferenceID;	// IMP=0x0000000000230006
- (void)_setEntitysReferenceID:(unsigned int)arg1;	// IMP=0x000000000022fffd
- (id)_underlyingProperty;	// IMP=0x000000000022fff3
- (id)description;	// IMP=0x000000000022ff85
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022ff1d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022fe67
- (id)initWithPropertyDescription:(id)arg1;	// IMP=0x000000000022fe52

@end
