//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ODRDiagnosticsClient : NSObject
{
}

- (void)prefetchThenRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x004000000018111e
- (void)prefetchSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withPrefetchCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000018110e
- (void)prefetchAndRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001810fe
- (MISSING_TYPE *)setSpaceReduction:withReply: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000180fc9
- (void)getSpaceReductionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000180f8d
- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000180f38
- (void)getSimulatedBandwidthWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000180ef1
- (void)purgeAssetWithIdentifier:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000180dc3
- (void)purgeAllAssetsForApplications:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000180c4b
- (void)purgeAllAssetsForApplication:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000180b1d
- (void)testPurgeBytes:(long long)arg1 urgency:(int)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000180a67
- (void)purgeBytes:(long long)arg1 odrOnly:(_Bool)arg2 urgency:(int)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000180a55
- (void)nonPurgeableAssetsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000180890
- (void)purgeableAssetsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001806cb
- (void)registerManifest:(id)arg1 forBundleID:(id)arg2 withRequestCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001803ff
- (void)fetchManifestForAdamID:(id)arg1 externalVersionID:(id)arg2 variant:(id)arg3 withFetchCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000180159
- (void)resumeRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001800d8
- (void)pauseRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000180057
- (void)cancelRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000017ffd6
- (void)loadSourceURL:(id)arg1 intoDestinationURL:(id)arg2 isUrgent:(_Bool)arg3 isStreaming:(_Bool)arg4 withRequestCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000017ff54
- (void)setSampler:(id)arg1 enabled:(_Bool)arg2 samplingInterval:(double)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000017fc5d
- (void)setLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017fb6f
- (void)cancelMaintenanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000017fb0f
- (void)performMaintenanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000017faaf
- (void)statusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000017f77e
- (void)fakeWorkWithCount:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017f69d
- (void)expireAssetURLSForBundleIDs:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017f5d2
- (void)assetsForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017e67d
- (void)allRegisteredODRAppsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000017e541
- (void)manifestDictionaryForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017e19d

@end
