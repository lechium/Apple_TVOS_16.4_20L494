//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKnownKeysDictionary, NSManagedObjectModel, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLModel
{
    NSString *_configuration;	// 16 = 0x10
    NSManagedObjectModel *_mom;	// 24 = 0x18
    NSKnownKeysDictionary *_entitiesByName;	// 32 = 0x20
    NSMutableArray *_entities;	// 40 = 0x28
    id *_entityDescriptionToSQLMap;	// 48 = 0x30
    unsigned long long _brokenHashVersion;	// 56 = 0x38
    _Bool _retainLeopardStyleDictionaries;	// 64 = 0x40
    _Bool _modelHasPrecomputedKeyOrder;	// 65 = 0x41
    _Bool _hasVirtualToOnes;	// 66 = 0x42
    unsigned int _entityIDOffset;	// 68 = 0x44
    unsigned int _lastEntityID;	// 72 = 0x48
}

- (id)entityForID:(unsigned long long)arg1;	// IMP=0x00000000001d704e
- (id)entityNamed:(id)arg1;	// IMP=0x00000000001d6d28
- (_Bool)_generateModel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d5f0d
- (id)managedObjectModel;	// IMP=0x00000000001d5efc
- (id)configurationName;	// IMP=0x00000000001d5eeb
- (void)dealloc;	// IMP=0x00000000001d5d3c
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3;	// IMP=0x00000000001d5d2a
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(_Bool)arg3;	// IMP=0x00000000001d5d14
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;	// IMP=0x00000000001d5cff

@end

