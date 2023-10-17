//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSRecordPromise, MIAppIdentity, MIApplicationTerminationAssertion, MIClientConnection, NSArray, NSDictionary, NSURL;

@interface MIInstaller : NSObject
{
    unsigned char _packageFormat;	// 8 = 0x8
    NSArray *_receipt;	// 16 = 0x10
    LSRecordPromise *_recordPromise;	// 24 = 0x18
    NSURL *_installURL;	// 32 = 0x20
    unsigned long long _installationDomain;	// 40 = 0x28
    NSDictionary *_options;	// 48 = 0x30
    MIClientConnection *_client;	// 56 = 0x38
    NSURL *_stagingRoot;	// 64 = 0x40
    NSURL *_stagingURL;	// 72 = 0x48
    MIApplicationTerminationAssertion *_terminationAssertion;	// 80 = 0x50
    NSArray *_lockedIdentifiers;	// 88 = 0x58
    MIAppIdentity *_identity;	// 96 = 0x60
    unsigned long long _stagingTime;	// 104 = 0x68
    unsigned long long _waitingTime;	// 112 = 0x70
    unsigned long long _preflightAndPatchTime;	// 120 = 0x78
    unsigned long long _verificationTime;	// 128 = 0x80
}

+ (id)installerForURL:(id)arg1 identity:(id)arg2 domain:(unsigned long long)arg3 options:(id)arg4 forClient:(id)arg5;	// IMP=0x004000000001d46a
- (void).cxx_destruct;	// IMP=0x002000000002384b
@property(nonatomic) unsigned long long verificationTime; // @synthesize verificationTime=_verificationTime;
@property(nonatomic) unsigned long long preflightAndPatchTime; // @synthesize preflightAndPatchTime=_preflightAndPatchTime;
@property(nonatomic) unsigned long long waitingTime; // @synthesize waitingTime=_waitingTime;
@property(nonatomic) unsigned long long stagingTime; // @synthesize stagingTime=_stagingTime;
@property(retain, nonatomic) MIAppIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSArray *lockedIdentifiers; // @synthesize lockedIdentifiers=_lockedIdentifiers;
@property(retain, nonatomic) MIApplicationTerminationAssertion *terminationAssertion; // @synthesize terminationAssertion=_terminationAssertion;
@property(nonatomic) unsigned char packageFormat; // @synthesize packageFormat=_packageFormat;
@property(retain, nonatomic) NSURL *stagingURL; // @synthesize stagingURL=_stagingURL;
@property(retain, nonatomic) NSURL *stagingRoot; // @synthesize stagingRoot=_stagingRoot;
@property(readonly, nonatomic) MIClientConnection *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long installationDomain; // @synthesize installationDomain=_installationDomain;
@property(retain, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(readonly, nonatomic) LSRecordPromise *recordPromise; // @synthesize recordPromise=_recordPromise;
@property(readonly, nonatomic) NSArray *receipt; // @synthesize receipt=_receipt;
- (_Bool)performInstallationWithError:(id *)arg1;	// IMP=0x0010000000022ab7
- (_Bool)_installInstallable:(id)arg1 containingSymlink:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000218de
- (_Bool)_installProvisioningProfilesAtStagingRootWithError:(id *)arg1;	// IMP=0x00100000000213df
- (_Bool)_installProvisioningProfilesFromUserOptionsWithError:(id *)arg1;	// IMP=0x0010000000020fb8
- (id)_discoverInstallableWithError:(id *)arg1;	// IMP=0x001000000001fea5
- (_Bool)_writeLockBundle:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001fdb5
- (id)_identifiersToLockForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001fb35
- (id)_bundleInDirectory:(id)arg1 withBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001f314
- (id)_manifestPathForBase:(id)arg1 withIdentifier:(id)arg2 patchType:(unsigned char *)arg3 error:(id *)arg4;	// IMP=0x001000000001edf4
- (_Bool)_extractPackageContainedSymlink:(_Bool *)arg1 withError:(id *)arg2;	// IMP=0x001000000001e5f2
- (_Bool)_setupPackageStateWithError:(id *)arg1;	// IMP=0x001000000001d86d
- (_Bool)_takeOwnershipOfInstallableContainingSymlink:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000001d610
- (void)_fireCallbackWithStatus:(id)arg1;	// IMP=0x001000000001d59e
- (void)_fireCallbackWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x001000000001d526
- (void)dealloc;	// IMP=0x001000000001d385
- (id)initWithURL:(id)arg1 identity:(id)arg2 domain:(unsigned long long)arg3 options:(id)arg4 forClient:(id)arg5;	// IMP=0x001000000001d295
- (id)init;	// IMP=0x001000000001d28c

@end

