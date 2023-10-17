//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKRecordZoneID, NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest
{
    CKRecordZoneID *_zoneID;	// 8 = 0x8
    CDUnknownBlockType _subscriptionModifiedBlock;	// 16 = 0x10
    NSArray *_subscriptionsToSave;	// 24 = 0x18
    NSArray *_subscriptionIDsToDelete;	// 32 = 0x20
    NSMutableDictionary *_subscriptionIDByRequestID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000162d1f
@property(retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID; // @synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID;
@property(retain, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(retain, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
@property(copy, nonatomic) CDUnknownBlockType subscriptionModifiedBlock; // @synthesize subscriptionModifiedBlock=_subscriptionModifiedBlock;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000162b23
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001629de
- (id)generateRequestOperations;	// IMP=0x0000000000161ef1
- (id)requestOperationClasses;	// IMP=0x0000000000161e0a
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x0000000000161e02
- (id)initWithOperation:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToDelete:(id)arg3;	// IMP=0x0000000000161d37

@end

