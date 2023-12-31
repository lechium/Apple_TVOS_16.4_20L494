//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOXPCActivity, NSMapTable, NSString, geo_isolater;

@interface GEODefaultsServer : GEOServer
{
    GEOXPCActivity *_activity;	// 8 = 0x8
    unsigned long long _stateCaptureHandle;	// 16 = 0x10
    geo_isolater *_peersIsolater;	// 24 = 0x18
    NSMapTable *_peerHelpers;	// 32 = 0x20
}

+ (id)_acceptableKeys;	// IMP=0x0020000000031432
+ (unsigned long long)launchMode;	// IMP=0x0010000000017846
+ (id)identifier;	// IMP=0x0010000000017839
- (void).cxx_destruct;	// IMP=0x0010000000033a39
- (void)setConfigValueForKeyWithRequest:(id)arg1;	// IMP=0x0010000000033696
- (void)getConfigValueForKeyWithRequest:(id)arg1;	// IMP=0x0010000000033525
- (void)removeChangeListenerForWithRequest:(id)arg1;	// IMP=0x00100000000332e4
- (void)addChangeListenerForWithRequest:(id)arg1;	// IMP=0x001000000003305e
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x0010000000032fa5
- (void)peerDidConnect:(id)arg1;	// IMP=0x0010000000032eaa
- (void)setExpiringKeyWithRequest:(id)arg1;	// IMP=0x0010000000032cd8
- (void)getAllExpiringKeysWithRequest:(id)arg1;	// IMP=0x0010000000032be7
- (void)setAllValuesInStoreWithRequest:(id)arg1;	// IMP=0x0010000000032a7b
- (void)getAllValuesInStoreWithRequest:(id)arg1;	// IMP=0x00100000000329cf
- (void)clearExpiredKeyWithRequest:(id)arg1;	// IMP=0x001000000003295e
- (void)_notifyListenersOfKeysChange:(id)arg1 options:(unsigned long long)arg2 postInternalNotification:(_Bool)arg3;	// IMP=0x0010000000032684
- (void)_notifyChangedKeys:(id)arg1 options:(unsigned long long)arg2 postInternalNotification:(_Bool)arg3 triggerWatchSync:(_Bool)arg4;	// IMP=0x0010000000032509
- (void)_expiringKeysChanged:(id)arg1;	// IMP=0x0010000000032132
- (void)_configKeysChanged:(id)arg1;	// IMP=0x0010000000031fbc
- (void)_experimentChanged:(id)arg1;	// IMP=0x0010000000031f9c
- (void)_networkDefaultsChanged:(id)arg1;	// IMP=0x0010000000031f7c
- (void)resetAllDefaultsWithMessage:(id)arg1;	// IMP=0x0010000000031f3a
- (void)updateNetworkDefaultsWithMessage:(id)arg1;	// IMP=0x0010000000031d50
- (void)_validatePeer:(id)arg1 canSetKey:(id)arg2 callingSetterIfAcceptable:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031a99
- (void)_registerXPCActivityTimer;	// IMP=0x0010000000031923
- (void)dealloc;	// IMP=0x0010000000031891
- (id)initWithDaemon:(id)arg1;	// IMP=0x00100000000314a2
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000017851
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0010000000033a7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

