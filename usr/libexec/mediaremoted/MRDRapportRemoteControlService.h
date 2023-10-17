//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRCompanionLinkClient, NSMutableArray;
@protocol MRDRapportRemoteControlServiceDelegate, OS_dispatch_queue;

@interface MRDRapportRemoteControlService : NSObject
{
    NSObject<OS_dispatch_queue> *_workerQueue;	// 8 = 0x8
    id <MRDRapportRemoteControlServiceDelegate> _delegate;	// 16 = 0x10
    MRCompanionLinkClient *_client;	// 24 = 0x18
    NSMutableArray *_connections;	// 32 = 0x20
}

+ (void)_writeConnectionRecordsToDisk:(id)arg1;	// IMP=0x002000000002cbd7
+ (id)_readConnectionRecordsFromDisk;	// IMP=0x001000000002caaa
+ (id)userDefaults;	// IMP=0x001000000002b7f5
- (void).cxx_destruct;	// IMP=0x002000000002cdf4
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) MRCompanionLinkClient *client; // @synthesize client=_client;
@property(nonatomic) __weak id <MRDRapportRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resetPersistedConnections;	// IMP=0x001000000002c765
- (void)_persistConnectionRecordsToDisk;	// IMP=0x001000000002c6ef
- (void)_onWorkerQueue_disconnectRemoteControlChannelsWithError:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c37c
- (void)_onWorkerQueue_disconnectRemoteControlChannelForSource:(id)arg1 destination:(id)arg2 session:(id)arg3;	// IMP=0x001000000002c17c
- (void)_onWorkerQueue_disconnectAllRemoteControlChannels;	// IMP=0x001000000002c143
- (void)_onWorkerQueue_connectRemoteControlChannelForSource:(id)arg1 destination:(id)arg2 destinationGroupUID:(id)arg3 session:(id)arg4 name:(id)arg5;	// IMP=0x001000000002ba7e
- (id)_connectionForSource:(id)arg1 destination:(id)arg2 session:(id)arg3;	// IMP=0x001000000002b86d
- (void)stop;	// IMP=0x001000000002b867
- (void)start;	// IMP=0x001000000002b861
- (id)init;	// IMP=0x001000000002ad05

@end

