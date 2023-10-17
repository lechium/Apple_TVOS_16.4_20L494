//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, NSUserDefaults;

@interface CPLEngineParametersStorage : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
    NSSet *_supportedLibraryIdentifiers;	// 16 = 0x10
}

+ (id)defaultSupportedLibraryIdentifiers;	// IMP=0x002000000001ab58
- (void).cxx_destruct;	// IMP=0x002000000001baae
@property(readonly, nonatomic) NSSet *supportedLibraryIdentifiers; // @synthesize supportedLibraryIdentifiers=_supportedLibraryIdentifiers;
@property(readonly, nonatomic) NSArray *allDefinedParameters;
- (_Bool)isCPLEngineParametersStorageKey:(id)arg1;	// IMP=0x001000000001b88f
- (_Bool)saveParameters:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001b7d5
- (_Bool)removeParametersWithLibraryIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001b736
- (id)parametersForLibraryIdentifier:(id)arg1;	// IMP=0x001000000001b663
- (void)_removeKeyForInsanityForLibraryIdentifier:(id)arg1;	// IMP=0x001000000001b616
- (void)_setKeyForInsanityIfNecessaryForParameters:(id)arg1;	// IMP=0x001000000001b3f6
- (id)_keyForInsanityForLibraryIdentifier:(id)arg1;	// IMP=0x001000000001b3dd
- (id)keyForLibraryIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001b326
- (void)_saveParameters:(id)arg1 withKey:(id)arg2;	// IMP=0x001000000001b29f
- (id)_savedParametersForKey:(id)arg1;	// IMP=0x001000000001b23b
- (id)initWithUserDefaults:(id)arg1 supportedLibraryIdentifiers:(id)arg2;	// IMP=0x001000000001ac5c
- (id)init;	// IMP=0x001000000001abd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
