//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/TUConversation.h>

@class CXCallFailureContext, NSSet;

@interface TUConversation (CSD)
@property(readonly, nonatomic) CXCallFailureContext *failureContext;
@property(readonly, copy, nonatomic) NSSet *activeRemoteParticipantCXHandles;
@property(readonly, nonatomic) _Bool anyActiveParticipantHasAV;
@property(readonly, nonatomic, getter=isEligibleForCall) _Bool eligibleForCall;
@end

