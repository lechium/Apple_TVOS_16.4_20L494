//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LSPersonaDatabase : NSObject
{
    struct os_unfair_lock_s _ivarLock;	// 8 = 0x8
    struct os_unfair_lock_s _uncachedCalloutLock;	// 12 = 0xc
    NSDictionary *_cachedBundleIDToPersonasMap;	// 16 = 0x10
    NSString *_cachedSystemPersonaUniqueString;	// 24 = 0x18
    NSString *_cachedPersonalPersonaUniqueString;	// 32 = 0x20
    unsigned long long _userManagementGenerationNumber;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000166204
- (id)getBundleIDToPersonasWithAttributesMap;	// IMP=0x00000000001655e0
- (void)getCachedBundleIDToPersonasWithAttributesMap:(id *)arg1 systemPersonaUniqueString:(id *)arg2 personalPersonaUniqueString:(id *)arg3;	// IMP=0x0000000000165469
- (void)refreshFromUserManagementIfNecessary;	// IMP=0x0000000000165326
- (void)personaListDidUpdate;	// IMP=0x0000000000165277
- (void)getUncachedBundleIDToPersonasWithAttributesMap:(id *)arg1 systemPersonaUniqueString:(id *)arg2 personalPersonaUniqueString:(id *)arg3;	// IMP=0x0000000000164b82
- (void)updatePersonasInDatabase;	// IMP=0x00000000001640c2
- (id)initPrivately;	// IMP=0x0000000000163f2d

@end

