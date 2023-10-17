//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CSDPendingMembershipTrackerDelegate, CSDPendingMembershipTrackerMessenger;

@interface CSDPendingMembershipTracker : NSObject
{
    MISSING_TYPE *messenger;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *storage;	// 24 = 0x18
    MISSING_TYPE *serverBag;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00400000002121a0
- (void)handleLocalRejectionOfMember:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000002100e0
- (void)handleLocalApprovalOfMember:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000002100d0
- (void)handleRemoteRejectionOfMember:(id)arg1 forConversation:(id)arg2 from:(id)arg3 transactionUUID:(id)arg4;	// IMP=0x001000000020ffd0
- (void)handleRemoteApprovalOfMember:(id)arg1 forConversation:(id)arg2 from:(id)arg3 transactionUUID:(id)arg4;	// IMP=0x001000000020ffb0
- (void)handleDelegatedPendingMember:(id)arg1 forConversation:(id)arg2 withGroupUUID:(id)arg3 from:(id)arg4 transactionUUID:(id)arg5;	// IMP=0x001000000020fea0
- (void)handleNewPendingMember:(id)arg1 responseKey:(id)arg2 forConversation:(id)arg3 withLink:(id)arg4 dateInitiatedLMI:(id)arg5;	// IMP=0x001000000020f770
- (id)pendingMembersByGroup;	// IMP=0x001000000020e3a0
- (id)retrievePendingMembersFor:(id)arg1;	// IMP=0x001000000020e2c0
- (void)clearPendingMembershipFor:(id)arg1;	// IMP=0x001000000020e040
- (void)stopTrackingPendingMember:(id)arg1 forConversation:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x001000000020dfc0
- (id)init;	// IMP=0x001000000020dd80
@property(nonatomic) __weak id <CSDPendingMembershipTrackerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <CSDPendingMembershipTrackerMessenger> messenger; // @synthesize messenger;

@end

