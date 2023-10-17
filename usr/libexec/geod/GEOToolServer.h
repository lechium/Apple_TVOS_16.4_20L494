//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOToolServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0020000000018266
- (void)notifyNetworkDefaultsChangedWithMessage:(id)arg1;	// IMP=0x001000000002ead1
- (void)listFilePathsWithMessage:(id)arg1;	// IMP=0x001000000002ea60
- (void)invalidateTileCacheWithMessage:(id)arg1;	// IMP=0x001000000002e92b
- (void)freePurgableSpaceWithMessage:(id)arg1;	// IMP=0x001000000002e550
- (void)calculatePurgableSpaceWithMessage:(id)arg1;	// IMP=0x001000000002e2aa
- (void)getDefaultWithMessage:(id)arg1;	// IMP=0x001000000002e0f7
- (void)checkProactiveTileDownloadPolicyEnabledWithMessage:(id)arg1;	// IMP=0x001000000002e00d
- (void)forceProactiveTileDownloaderRunWithMessage:(id)arg1;	// IMP=0x001000000002dff6
- (void)lockDBsWithMessage:(id)arg1;	// IMP=0x001000000002df6a
- (void)unlockDBsWithMessage:(id)arg1;	// IMP=0x001000000002dede
- (void)pingWithMessage:(id)arg1;	// IMP=0x001000000002dd73
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000018273

@end

