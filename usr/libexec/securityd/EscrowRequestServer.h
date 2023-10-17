//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EscrowRequestController, NSString;

@interface EscrowRequestServer : NSObject
{
    EscrowRequestController *_controller;	// 8 = 0x8
}

+ (id)request:(id *)arg1;	// IMP=0x002000000003a921
+ (id)server;	// IMP=0x001000000003a8f1
- (void).cxx_destruct;	// IMP=0x002000000003a688
@property(retain) EscrowRequestController *controller; // @synthesize controller=_controller;
- (void)setupAnalytics;	// IMP=0x001000000003a600
- (void)escrowCompletedWithinLastSeconds:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a2fb
- (void)storePrerecordsInEscrow:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a23a
- (void)resetAllRequests:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039e2e
- (void)fetchRequestStatuses:(CDUnknownBlockType)arg1;	// IMP=0x001000000003993b
- (void)triggerEscrowUpdate:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039818
- (void)fetchRequestWaitingOnPasscode:(CDUnknownBlockType)arg1;	// IMP=0x00100000000392f6
- (void)fetchPrerecord:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039045
- (void)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038d4d
- (_Bool)escrowCompletedWithinLastSeconds:(double)arg1;	// IMP=0x0010000000038c51
- (_Bool)pendingEscrowUpload:(id *)arg1;	// IMP=0x001000000003888d
- (id)fetchStatuses:(id *)arg1;	// IMP=0x0010000000038749
- (_Bool)triggerEscrowUpdate:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000385df
- (_Bool)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000385c8
- (id)initWithLockStateTracker:(id)arg1;	// IMP=0x0010000000038546

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

