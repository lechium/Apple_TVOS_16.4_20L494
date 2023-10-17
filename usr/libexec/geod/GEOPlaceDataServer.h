//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOPlaceDataLocalProxy, NSMapTable, geo_isolater;

@interface GEOPlaceDataServer : GEOServer
{
    geo_isolater *_peerToRequestUUIDIsolater;	// 8 = 0x8
    NSMapTable *_peerToRequestUUID;	// 16 = 0x10
    GEOPlaceDataLocalProxy *_placeDataProxy;	// 24 = 0x18
}

+ (unsigned long long)launchMode;	// IMP=0x00200000000189ed
+ (id)identifier;	// IMP=0x00100000000189e0
- (void).cxx_destruct;	// IMP=0x0010000000003935
- (void)clearCacheWithRequest:(id)arg1;	// IMP=0x0010000000003918
- (void)shrinkBySizeSyncWithRequest:(id)arg1;	// IMP=0x0010000000003867
- (void)shrinkBySizeWithRequest:(id)arg1;	// IMP=0x0010000000003751
- (void)calculateFreeableSpaceSyncWithRequest:(id)arg1;	// IMP=0x00100000000036b6
- (void)calculateFreeableSpaceWithRequest:(id)arg1;	// IMP=0x00100000000035b4
- (void)cancelPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x00100000000034b5
- (void)performPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x0010000000002f0f
- (void)preservePlaceDataWithRequest:(id)arg1;	// IMP=0x0010000000002d3f
- (void)fetchAllCacheEntriesWithRequest:(id)arg1;	// IMP=0x0010000000002b6d
- (void)requestPhoneNumbersWithRequest:(id)arg1;	// IMP=0x00100000000024b2
- (void)requestMUIDsWithRequest:(id)arg1;	// IMP=0x0010000000002069
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x0010000000001d15
- (void)_removeRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000001bf3
- (void)_addRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000001a88
- (id)initWithDaemon:(id)arg1 proxy:(id)arg2;	// IMP=0x001000000000196d
- (id)initWithDaemon:(id)arg1;	// IMP=0x00100000000018ec
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000189f8

@end

