//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ASSyncConnectionDelegate;

@interface ASSyncConnection : NSObject
{
    id <ASSyncConnectionDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003089
- (id)currentSyncSnapshotFromHandler:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000002f1a
- (void)runSyncWithHandler:(id)arg1 info:(id)arg2 forRequestUUID:(id)arg3;	// IMP=0x001000000000230d
- (long long)defaultChunkBatchSize;	// IMP=0x0010000000002249
- (_Bool)_infoIsValid:(id)arg1 forPreAnchor:(id)arg2;	// IMP=0x00100000000021b1
- (_Bool)_getChunkInfoWithHandler:(id)arg1 batchSize:(long long)arg2 lastAnchor:(id)arg3 updates:(id)arg4 deletes:(id)arg5 post:(id *)arg6 targetIsLocal:(_Bool)arg7;	// IMP=0x0010000000001ce6
- (_Bool)_sendChunkWithUpdates:(id)arg1 deletes:(id)arg2 pre:(id)arg3 post:(id)arg4 validity:(id)arg5 forRequestUUID:(id)arg6;	// IMP=0x0010000000001b05
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000001a9a

@end

