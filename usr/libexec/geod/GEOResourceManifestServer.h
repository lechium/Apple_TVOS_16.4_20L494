//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOXPCActivity, NSMapTable, NSMutableSet, NSString, geo_isolater;
@protocol GEOResourceManifestUpdateAssertionRecord;

@interface GEOResourceManifestServer : GEOServer
{
    _Bool _isUpdatingResourceManifest;	// 8 = 0x8
    _Bool _isLoadingResources;	// 9 = 0x9
    NSMapTable *_peerToConfiguration;	// 16 = 0x10
    NSMutableSet *_alreadyRegisteredConfigurations;	// 24 = 0x18
    GEOXPCActivity *_activity;	// 32 = 0x20
    geo_isolater *_constrainedNetworkUpdateAssertionIsolation;	// 40 = 0x28
    id <GEOResourceManifestUpdateAssertionRecord> _constrainedNetworkUpdateAssertion;	// 48 = 0x30
}

+ (unsigned long long)launchMode;	// IMP=0x00200000000192b6
+ (id)identifier;	// IMP=0x00100000000192a9
- (void).cxx_destruct;	// IMP=0x001000000004f177
- (void)serverProxy:(id)arg1 didLoadActiveTileGroup:(id)arg2;	// IMP=0x001000000004f171
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;	// IMP=0x001000000004ee54
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e33b
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;	// IMP=0x001000000004e06f
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;	// IMP=0x001000000004dd9f
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;	// IMP=0x001000000004dad3
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;	// IMP=0x001000000004d803
- (void)_forEachPeerMatchingConfiguration:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d5bf
- (void)getResourceManifestWithMessage:(id)arg1;	// IMP=0x001000000004d1e6
- (void)getMaximumZoomLevelWithMessage:(id)arg1;	// IMP=0x001000000004ce8b
- (void)deactivateScenarioWithMessage:(id)arg1;	// IMP=0x001000000004cd48
- (void)activateScenarioWithMessage:(id)arg1;	// IMP=0x001000000004cc1c
- (void)deactivateScaleWithMessage:(id)arg1;	// IMP=0x001000000004cad9
- (_Bool)_checkIfCanDeactivateResourceFilter:(id)arg1;	// IMP=0x001000000004c8e3
- (void)activateScaleWithMessage:(id)arg1;	// IMP=0x001000000004c7b7
- (void)setRequestTokenWithMessage:(id)arg1;	// IMP=0x001000000004c46f
- (void)resetActiveTileGroupWithMessage:(id)arg1;	// IMP=0x001000000004c3df
- (void)forceUpdateWithMessage:(id)arg1;	// IMP=0x001000000004c228
- (void)updateIfNecessaryWithMessage:(id)arg1;	// IMP=0x001000000004c0d4
- (void)setActiveTileGroupIdentifierWithMessage:(id)arg1;	// IMP=0x001000000004bc90
- (void)setConfigurationWithMessage:(id)arg1;	// IMP=0x001000000004b9bc
- (void)_fireOpportunisticResourceLoads;	// IMP=0x001000000004b8e2
- (id)_configurationForPeer:(id)arg1;	// IMP=0x001000000004b85f
- (id)_manifestManagerForPeer:(id)arg1;	// IMP=0x001000000004b7fd
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000004b787
- (void)peerDidConnect:(id)arg1;	// IMP=0x001000000004b3cc
- (void)_configureConstrainedNetworkUpdateAssertion;	// IMP=0x001000000004b235
- (void)dealloc;	// IMP=0x001000000004b06f
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000004ad93
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000192c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
