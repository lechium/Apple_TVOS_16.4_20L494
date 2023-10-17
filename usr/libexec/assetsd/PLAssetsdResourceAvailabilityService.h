//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString, PLCacheMetricsCollectorServerShell;

@interface PLAssetsdResourceAvailabilityService : PLAbstractLibraryServicesManagerService
{
    NSString *_trustedCallerBundleID;	// 8 = 0x8
    int _clientPid;	// 16 = 0x10
    PLCacheMetricsCollectorServerShell *_cacheMetricsShellObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000951c
@property(readonly, nonatomic) PLCacheMetricsCollectorServerShell *cacheMetricsShellObject; // @synthesize cacheMetricsShellObject=_cacheMetricsShellObject;
- (void)initializeSharedMemoryForCacheMetricsCollector:(id)arg1;	// IMP=0x00100000000092a7
- (id)appyCorrectionsToAssetWithRequest:(id)arg1 errorCodes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000090e4
- (id)appyCorrectionsToResourceWithRequest:(id)arg1 errorCodes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008f21
- (id)runVideoRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008cfc
- (void)makeResourceUnavailableWithRequest:(id)arg1;	// IMP=0x0010000000008bf9
- (id)makeResourceAvailableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000089d8
- (id)_clientPidPrefixedTaskIdentifierWithTaskIdentifier:(id)arg1;	// IMP=0x00100000000089a5
- (id)initWithLibraryServicesManager:(id)arg1 shellObject:(id)arg2 trustedCallerBundleID:(id)arg3 clientPid:(int)arg4;	// IMP=0x00100000000088eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
