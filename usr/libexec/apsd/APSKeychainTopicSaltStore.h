//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, APSMultiUserMode, NSMutableDictionary;

@interface APSKeychainTopicSaltStore : NSObject
{
    APSMultiUserMode *_multiUser;	// 8 = 0x8
    APSEnvironment *_environment;	// 16 = 0x10
    NSMutableDictionary *_identifiersToSaltsUser;	// 24 = 0x18
    NSMutableDictionary *_identifiersToSaltsSystem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000f5fa
@property(retain, nonatomic) NSMutableDictionary *identifiersToSaltsSystem; // @synthesize identifiersToSaltsSystem=_identifiersToSaltsSystem;
@property(retain, nonatomic) NSMutableDictionary *identifiersToSaltsUser; // @synthesize identifiersToSaltsUser=_identifiersToSaltsUser;
@property(retain, nonatomic) APSEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) APSMultiUserMode *multiUser; // @synthesize multiUser=_multiUser;
- (_Bool)_saveKeychainData:(id)arg1 forProcessMode:(unsigned long long)arg2;	// IMP=0x001000000000f25f
- (id)_loadKeychainDataForProcessMode:(unsigned long long)arg1;	// IMP=0x001000000000f07e
- (id)_keychainService;	// IMP=0x001000000000efea
- (id)_serializeKeychainDict:(id)arg1;	// IMP=0x001000000000ee8f
- (id)_deserializeKeychainData:(id)arg1;	// IMP=0x001000000000e9e7
- (_Bool)_saveIdentifiersToSalts:(id)arg1 toKeychainForProcessMode:(unsigned long long)arg2;	// IMP=0x001000000000e946
- (id)_loadIdentifiersToSaltsFromKeychainForProcessMode:(unsigned long long)arg1;	// IMP=0x001000000000e7ef
- (void)_setSaltStore:(id)arg1 forProcessMode:(unsigned long long)arg2;	// IMP=0x001000000000e77e
- (id)_saltStoreForProcessMode:(unsigned long long)arg1;	// IMP=0x001000000000e732
- (_Bool)_useSystemSaltStoreForProcessMode:(unsigned long long)arg1;	// IMP=0x001000000000e6e6
- (id)loadIdentifiersToSaltsForProcessMode:(unsigned long long)arg1;	// IMP=0x001000000000e685
- (_Bool)saveSalt:(id)arg1 forIdentifier:(id)arg2 processMode:(unsigned long long)arg3;	// IMP=0x001000000000e459
- (id)loadSaltForIdentifier:(id)arg1 processMode:(unsigned long long)arg2;	// IMP=0x001000000000e31a
- (id)initWithEnvironment:(id)arg1 multiUserMode:(id)arg2;	// IMP=0x001000000000e281

@end

