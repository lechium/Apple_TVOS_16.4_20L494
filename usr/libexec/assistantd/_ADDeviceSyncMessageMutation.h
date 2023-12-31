//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPullDeltaRequest, ADDeviceSyncCommandPullDeltaResponse, ADDeviceSyncCommandPullGenerationsRequest, ADDeviceSyncCommandPullGenerationsResponse, ADDeviceSyncCommandPullSnapshotRequest, ADDeviceSyncCommandPullSnapshotResponse, ADDeviceSyncCommandPushGenerationsRequest, ADDeviceSyncCommandPushGenerationsResponse, ADDeviceSyncMessage, MISSING_TYPE, NSString;

@interface _ADDeviceSyncMessageMutation : NSObject
{
    ADDeviceSyncMessage *_base;	// 8 = 0x8
    MISSING_TYPE *_sequence;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    ADDeviceSyncCommandPushGenerationsRequest *_commandPushGenerationsRequest;	// 32 = 0x20
    ADDeviceSyncCommandPushGenerationsResponse *_commandPushGenerationsResponse;	// 40 = 0x28
    ADDeviceSyncCommandPullGenerationsRequest *_commandPullGenerationsRequest;	// 48 = 0x30
    ADDeviceSyncCommandPullGenerationsResponse *_commandPullGenerationsResponse;	// 56 = 0x38
    ADDeviceSyncCommandPullDeltaRequest *_commandPullDeltaRequest;	// 64 = 0x40
    ADDeviceSyncCommandPullDeltaResponse *_commandPullDeltaResponse;	// 72 = 0x48
    ADDeviceSyncCommandPullSnapshotRequest *_commandPullSnapshotRequest;	// 80 = 0x50
    ADDeviceSyncCommandPullSnapshotResponse *_commandPullSnapshotResponse;	// 88 = 0x58
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSequence:1;
        unsigned int hasType:1;
        unsigned int hasCommandPushGenerationsRequest:1;
        unsigned int hasCommandPushGenerationsResponse:1;
        unsigned int hasCommandPullGenerationsRequest:1;
        unsigned int hasCommandPullGenerationsResponse:1;
        unsigned int hasCommandPullDeltaRequest:1;
        unsigned int hasCommandPullDeltaResponse:1;
        unsigned int hasCommandPullSnapshotRequest:1;
        unsigned int hasCommandPullSnapshotResponse:1;
    } _mutationFlags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000082526
- (void)setCommandPullSnapshotResponse:(id)arg1;	// IMP=0x0010000000082504
- (id)getCommandPullSnapshotResponse;	// IMP=0x00100000000824cc
- (void)setCommandPullSnapshotRequest:(id)arg1;	// IMP=0x00100000000824aa
- (id)getCommandPullSnapshotRequest;	// IMP=0x0010000000082472
- (void)setCommandPullDeltaResponse:(id)arg1;	// IMP=0x0010000000082450
- (id)getCommandPullDeltaResponse;	// IMP=0x0010000000082418
- (void)setCommandPullDeltaRequest:(id)arg1;	// IMP=0x00100000000823f8
- (id)getCommandPullDeltaRequest;	// IMP=0x00100000000823c0
- (void)setCommandPullGenerationsResponse:(id)arg1;	// IMP=0x00100000000823a0
- (id)getCommandPullGenerationsResponse;	// IMP=0x0010000000082368
- (void)setCommandPullGenerationsRequest:(id)arg1;	// IMP=0x0010000000082348
- (id)getCommandPullGenerationsRequest;	// IMP=0x0010000000082310
- (void)setCommandPushGenerationsResponse:(id)arg1;	// IMP=0x00100000000822f0
- (id)getCommandPushGenerationsResponse;	// IMP=0x00100000000822b8
- (void)setCommandPushGenerationsRequest:(id)arg1;	// IMP=0x0010000000082298
- (id)getCommandPushGenerationsRequest;	// IMP=0x0010000000082260
- (void)setType:(long long)arg1;	// IMP=0x0010000000082252
- (long long)getType;	// IMP=0x0010000000082230
- (void)setSequence:(unsigned long long)arg1;	// IMP=0x0010000000082222
- (unsigned long long)getSequence;	// IMP=0x0010000000082200
- (_Bool)isDirty;	// IMP=0x00100000000821f5
- (id)initWithBase:(id)arg1;	// IMP=0x001000000008218a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

