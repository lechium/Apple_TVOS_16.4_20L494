//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallCenterObserver, CSDSandboxExtensionDirectory, NSDictionary, NSSet, NSString;
@protocol CSDCallProviderManagerDataSourceDelegate, CSDKeychainPersistentStoreProtocol, OS_dispatch_queue;

@interface CSDCallProviderManagerDataSource : NSObject
{
    id <CSDCallProviderManagerDataSourceDelegate> _delegate;	// 8 = 0x8
    CDUnknownBlockType _preferencesForKeyBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CSDSandboxExtensionDirectory *_ringtonesSandboxExtensionDirectory;	// 32 = 0x20
    CSDCallCenterObserver *_callCenterObserver;	// 40 = 0x28
    NSSet *_providerIdentifiersForExistingCalls;	// 48 = 0x30
    id <CSDKeychainPersistentStoreProtocol> _keychainItem;	// 56 = 0x38
    id <CSDKeychainPersistentStoreProtocol> _pairedHostKeychainItem;	// 64 = 0x40
}

+ (id)dataForProviders:(id)arg1;	// IMP=0x002000000016d517
- (void).cxx_destruct;	// IMP=0x002000000016e698
@property(readonly, nonatomic) id <CSDKeychainPersistentStoreProtocol> pairedHostKeychainItem; // @synthesize pairedHostKeychainItem=_pairedHostKeychainItem;
@property(readonly, nonatomic) id <CSDKeychainPersistentStoreProtocol> keychainItem; // @synthesize keychainItem=_keychainItem;
@property(copy, nonatomic) NSSet *providerIdentifiersForExistingCalls; // @synthesize providerIdentifiersForExistingCalls=_providerIdentifiersForExistingCalls;
@property(readonly, nonatomic) CSDCallCenterObserver *callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) CSDSandboxExtensionDirectory *ringtonesSandboxExtensionDirectory; // @synthesize ringtonesSandboxExtensionDirectory=_ringtonesSandboxExtensionDirectory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType preferencesForKeyBlock; // @synthesize preferencesForKeyBlock=_preferencesForKeyBlock;
@property(nonatomic) __weak id <CSDCallProviderManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeRelayCallingAvailability;	// IMP=0x001000000016e5a0
- (void)callsChangedForCallCenterObserver:(id)arg1;	// IMP=0x001000000016e28d
- (void)handleApplicationUnregisteredNotification:(id)arg1;	// IMP=0x001000000016e1cb
- (id)_providersForPreferenceKey:(id)arg1;	// IMP=0x001000000016dd96
- (id)_providersForKeychainItem:(id)arg1;	// IMP=0x001000000016d89e
- (void)_saveProviders:(id)arg1 forKeychainItem:(id)arg2 error:(id *)arg3;	// IMP=0x001000000016d7d8
- (void)moveExistingPreferencesToKeychain;	// IMP=0x001000000016d1a8
- (_Bool)isProviderInstalled:(id)arg1;	// IMP=0x001000000016d0be
- (void)removeLinksForFilenamesNotInArray:(id)arg1;	// IMP=0x001000000016cfc8
- (id)createLinkIfNecessaryWithFilename:(id)arg1 toURL:(id)arg2;	// IMP=0x001000000016ce41
- (_Bool)isSymbolicLinkAtURL:(id)arg1;	// IMP=0x001000000016cccb
- (void)openUserActivity:(id)arg1 usingApplicationWithBundleIdentifier:(id)arg2 frontBoardOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000016caf8
@property(readonly, nonatomic, getter=isDevicePasscodeLocked) _Bool devicePasscodeLocked;
- (id)dialAssistedDialRequestForDialRequest:(id)arg1;	// IMP=0x001000000016ca73
@property(copy, nonatomic) NSDictionary *registeredPairedHostDeviceProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *registeredLocalProvidersByIdentifier;
@property(readonly, nonatomic, getter=isRelayCallingGuaranteed) _Bool relayCallingGuaranteed;
- (void)dealloc;	// IMP=0x001000000016bdcd
- (id)initWithSerialQueue:(id)arg1 localKeychainItem:(id)arg2 pairedHostKeychainItem:(id)arg3;	// IMP=0x001000000016ba83
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x001000000016b929

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

