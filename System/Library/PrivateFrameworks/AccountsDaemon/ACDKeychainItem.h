//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDKeychainItem : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
    NSMutableSet *_dirtyProperties;	// 16 = 0x10
    const struct __CFData *_persistentRef;	// 24 = 0x18
}

+ (id)new;	// IMP=0x006000000004200b
- (void).cxx_destruct;	// IMP=0x0000000000043182
@property(readonly, nonatomic) const struct __CFData *persistentRef; // @synthesize persistentRef=_persistentRef;
- (id)debugDescription;	// IMP=0x0000000000043035
- (id)description;	// IMP=0x0000000000042f4b
- (void)_reloadProperties;	// IMP=0x0000000000042d74
- (id)_modifiedProperties;	// IMP=0x0000000000042cb4
- (void)_clearDirtyProperties;	// IMP=0x0000000000042c9a
- (void)_markPropertyDirty:(id)arg1;	// IMP=0x0000000000042c40
- (void)_setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000042bdb
@property(nonatomic) long long version;
- (_Bool)_setMetadata:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000429c9
@property(copy, nonatomic) NSDictionary *metadata;
@property(nonatomic) _Bool synchronizable;
@property(copy, nonatomic) NSString *accessibility;
@property(copy, nonatomic) NSString *accessGroup;
@property(copy, nonatomic) NSString *service;
@property(copy, nonatomic) NSString *account;
- (id)_metadataWithError:(id *)arg1;	// IMP=0x000000000004251d
@property(readonly, nonatomic) _Bool hasCustomAccessControl;
@property(readonly, nonatomic) _Bool useDataProtectionKeychain;
- (void)migrateToKeyBagFromLegacy;	// IMP=0x0000000000042363
- (_Bool)save:(id *)arg1;	// IMP=0x00000000000421af
- (void)reload;	// IMP=0x0000000000042181
- (void)dealloc;	// IMP=0x0000000000042142
- (id)initWithPersistentRef:(const struct __CFData *)arg1 properties:(id)arg2;	// IMP=0x00000000000420ad
- (id)initWithPersistentRef:(const struct __CFData *)arg1;	// IMP=0x000000000004204e
- (id)init;	// IMP=0x0000000000042023

@end

