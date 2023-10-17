//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface IDSRegistrationKeychainManager : NSObject
{
    NSMutableDictionary *_tempPhoneCredentials;	// 8 = 0x8
    NSMutableDictionary *_smsSignatures;	// 16 = 0x10
    NSMutableDictionary *_authenticationCerts;	// 24 = 0x18
    NSMutableArray *_registrationData;	// 32 = 0x20
    IMTimer *_purgeTimer;	// 40 = 0x28
    NSRecursiveLock *_lock;	// 48 = 0x30
    CDUnknownBlockType _purgeCancelBlock;	// 56 = 0x38
    CDUnknownBlockType _purgeEnqueueBlock;	// 64 = 0x40
    _Bool _loaded;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_saveQueue;	// 80 = 0x50
}

+ (id)keychainAccessGroupForVersion:(unsigned long long)arg1;	// IMP=0x0040000000384610
+ (id)keychainAccountForVersion:(unsigned long long)arg1;	// IMP=0x0010000000384550
+ (id)keychainServiceForVersion:(unsigned long long)arg1;	// IMP=0x00100000003844d0
+ (id)sharedInstance;	// IMP=0x0010000000383d20
- (void).cxx_destruct;	// IMP=0x002000000038c390
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue; // @synthesize saveQueue=_saveQueue;
- (void)setTempPhoneCredential:(id)arg1 forID:(id)arg2;	// IMP=0x001000000038c0c0
- (id)tempPhoneCredentialForID:(id)arg1;	// IMP=0x001000000038be70
- (void)setSMSSignature:(id)arg1 mainID:(id)arg2;	// IMP=0x001000000038baf0
- (id)smsIDs;	// IMP=0x001000000038b940
- (id);	// IMP=0x001000000038b610
- (void)setAuthenticationCert:(id)arg1 forID:(id)arg2;	// IMP=0x001000000038b370
- (id)authenticationCertForID:(id)arg1;	// IMP=0x001000000038b260
- (_Bool)removeAllRegistrations;	// IMP=0x001000000038a690
- (_Bool)removeRegistration:(id)arg1;	// IMP=0x001000000038a2a0
- (_Bool)addRegistration:(id)arg1;	// IMP=0x0010000000389f40
@property(readonly, copy, nonatomic) NSArray *registrations; // @dynamic registrations;
- (id)registrationWithServiceType:(id)arg1 registrationType:(int)arg2 value:(id)arg3;	// IMP=0x0010000000389790
- (void)reloadFromKeychain;	// IMP=0x0010000000387b30
- (void)_reloadFromDictionary:(id)arg1;	// IMP=0x0010000000386a00
- (void)_loadIfNeeded;	// IMP=0x0010000000386980
- (void)_setPurgeTimer;	// IMP=0x0010000000386930
- (void)_flush;	// IMP=0x0010000000386570
- (_Bool)saveToKeychain;	// IMP=0x0010000000386540
- (_Bool)_saveToKeychain;	// IMP=0x0010000000386440
- (_Bool)__saveToKeychain;	// IMP=0x0010000000384630
- (void)systemDidFinishMigration;	// IMP=0x00100000003843d0
- (void)_purgeTimerFiredOnMain;	// IMP=0x0010000000384300
- (void)dealloc;	// IMP=0x0010000000384280
- (id)init;	// IMP=0x0010000000383de0

@end

