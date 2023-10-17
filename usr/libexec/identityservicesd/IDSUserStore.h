//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMap, IDSRegistrationKeychainManager, NSDictionary, NSMapTable;
@protocol OS_dispatch_queue;

@interface IDSUserStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSPersistentMap *_persistentMap;	// 16 = 0x10
    IDSRegistrationKeychainManager *_registrationKeychainManager;	// 24 = 0x18
    NSMapTable *_realmByListener;	// 32 = 0x20
    NSDictionary *_dataProviderByRealm;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000037a940
@property(retain, nonatomic) NSDictionary *dataProviderByRealm; // @synthesize dataProviderByRealm=_dataProviderByRealm;
@property(retain, nonatomic) NSMapTable *realmByListener; // @synthesize realmByListener=_realmByListener;
@property(retain, nonatomic) IDSRegistrationKeychainManager *registrationKeychainManager; // @synthesize registrationKeychainManager=_registrationKeychainManager;
@property(retain, nonatomic) IDSPersistentMap *persistentMap; // @synthesize persistentMap=_persistentMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeActionListener:(id)arg1;	// IMP=0x001000000037a750
- (void)addActionListener:(id)arg1 forRealm:(long long)arg2;	// IMP=0x001000000037a6b0
- (void)addActionListener:(id)arg1;	// IMP=0x001000000037a650
- (void)_iterateByRealm:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000037a390
- (void)setProperties:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000379e30
- (id)propertiesForUser:(id)arg1;	// IMP=0x0010000000379d40
- (void)silentlySetAuthenticationCertificate:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000379c30
- (void)setAuthenticationCertificate:(id)arg1 forUser:(id)arg2;	// IMP=0x00100000003798f0
- (id)authenticationCertificateForUser:(id)arg1;	// IMP=0x0010000000379750
- (void)setCredential:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000379240
- (id)credentialForUser:(id)arg1;	// IMP=0x0010000000378e90
- (id)_stringRepresentationOfUserRealm:(long long)arg1;	// IMP=0x0010000000378de0
- (void)_removeUser:(id)arg1;	// IMP=0x0010000000378a70
- (void)_addUser:(id)arg1;	// IMP=0x00100000003785b0
- (void)_updateUsersForCurrentUsers:(id)arg1 updatedUsers:(id)arg2;	// IMP=0x0010000000377cf0
- (void)updateUser:(id)arg1;	// IMP=0x0010000000377790
- (void)forceRemoveUser:(id)arg1 silently:(_Bool)arg2;	// IMP=0x0010000000377670
- (void)reloadUsersForRealm:(long long)arg1;	// IMP=0x00100000003772f0
- (void)reloadUsers;	// IMP=0x0010000000377290
- (void)persistUsersImmediately;	// IMP=0x0010000000377260
- (id)userWithUniqueIdentifier:(id)arg1;	// IMP=0x0010000000377160
- (id)usersWithRealms:(id)arg1;	// IMP=0x0010000000376f10
- (id)usersWithRealm:(long long)arg1;	// IMP=0x0010000000376d70
- (id)debugDescription;	// IMP=0x0010000000376cb0
- (id)description;	// IMP=0x0010000000376c50
- (void)setDataProvider:(id)arg1 forRealm:(long long)arg2;	// IMP=0x0010000000376ac0
- (id)initWithQueue:(id)arg1 persister:(id)arg2 registrationKeychainManager:(id)arg3;	// IMP=0x0010000000375d70
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000375c70

@end
