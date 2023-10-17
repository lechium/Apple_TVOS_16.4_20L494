//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x0040000000140995
- (void).cxx_destruct;	// IMP=0x0020000000141fe0
- (void)stop;	// IMP=0x0010000000141f42
- (void)start;	// IMP=0x0010000000141e38
- (void)volumesChanged:(id)arg1;	// IMP=0x0010000000141e1e
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x0010000000141d4e
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x0010000000141c9b
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x0010000000141b41
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x0010000000141b13
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x0010000000141509
- (id)connectedNodes;	// IMP=0x0010000000140d72
- (id)URLForRemounting:(id)arg1;	// IMP=0x0010000000140cc0
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x0010000000140c44
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x0010000000140c3e
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x0010000000140c33
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x0010000000140c28
- (id)recentNodes;	// IMP=0x0010000000140be2
- (void)addToRecents:(id)arg1;	// IMP=0x0010000000140bdc
- (void)browseAfterDelay:(double)arg1;	// IMP=0x0010000000140bbc
- (void)postNotification;	// IMP=0x0010000000140b5d
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x0010000000140ae2
- (void)setServers:(id)arg1;	// IMP=0x0010000000140a93
- (id)init;	// IMP=0x00100000001409ea

@end

