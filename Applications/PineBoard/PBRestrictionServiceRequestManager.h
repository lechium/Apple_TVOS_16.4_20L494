//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, PBRestrictionServiceRequest, TVSStateMachine;

@interface PBRestrictionServiceRequestManager : NSObject
{
    TVSStateMachine *_stateMachine;	// 8 = 0x8
    NSMutableArray *_pendingServiceRequestsQueue;	// 16 = 0x10
    NSMutableDictionary *_pendingTokenToRequestMapping;	// 24 = 0x18
    PBRestrictionServiceRequest *_currentRequest;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x004000000016595d
+ (void)initialize;	// IMP=0x0010000000165912
- (void).cxx_destruct;	// IMP=0x002000000016942b
@property(retain, nonatomic) PBRestrictionServiceRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) NSMutableDictionary *pendingTokenToRequestMapping; // @synthesize pendingTokenToRequestMapping=_pendingTokenToRequestMapping;
@property(readonly, nonatomic) NSMutableArray *pendingServiceRequestsQueue; // @synthesize pendingServiceRequestsQueue=_pendingServiceRequestsQueue;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (_Bool)_isSettingRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x001000000016936a
- (_Bool)_isContentTypeRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x00100000001691d0
- (_Bool)_isContentType:(unsigned long long)arg1 allowedWithRating:(id)arg2;	// IMP=0x001000000016904b
- (_Bool)_isBooleanSettingType:(unsigned long long)arg1;	// IMP=0x0010000000169027
- (id)_featureNameForSetting:(unsigned long long)arg1;	// IMP=0x0010000000169000
- (id)_featureNameForContentType:(unsigned long long)arg1;	// IMP=0x0010000000168fd4
- (id)_dequeueNextServiceRequest;	// IMP=0x0010000000168ead
- (void)_enqueueIncomingRequest:(id)arg1;	// IMP=0x0010000000168d3a
- (void)_validatePINWithRequest:(id)arg1 postCompletionEvent:(_Bool)arg2;	// IMP=0x0010000000168bce
- (void)_checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x0010000000168a8d
- (void)_authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x0010000000168825
- (void)_validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x001000000016847d
- (void)_validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x0010000000168009
- (void)_initializeRestrictionServiceStateMachine;	// IMP=0x00100000001660e3
- (void)cancelRequestWithToken:(id)arg1;	// IMP=0x0010000000165fed
- (void)authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x0010000000165ef7
- (void)checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x0010000000165e01
- (void)validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x0010000000165d0b
- (_Bool)requestPassesAgeRestriction:(id)arg1;	// IMP=0x0010000000165c81
- (void)validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x0010000000165b8b
- (void)validatePINWithRequest:(id)arg1;	// IMP=0x0010000000165a95
- (id)_init;	// IMP=0x00100000001659d2
- (id)init;	// IMP=0x00100000001659c4

@end
