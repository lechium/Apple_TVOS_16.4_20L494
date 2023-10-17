//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKScoreNetworkRequest : NSObject
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    _Bool coalescingAgent;	// 10 = 0xa
    NSString *bundleID;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSURLSessionTask *nsurlTask;	// 32 = 0x20
    NSString *playerID;	// 40 = 0x28
    NSMutableDictionary *requestData;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
    NSArray *challengeIDs;	// 64 = 0x40
}

+ (long long)coalescingDelay;	// IMP=0x00200000000fcc93
+ (id)bagKey;	// IMP=0x00100000000fc11c
- (void).cxx_destruct;	// IMP=0x00200000000fce9c
@property(nonatomic) _Bool coalescingAgent; // @synthesize coalescingAgent;
@property(retain, nonatomic) NSArray *challengeIDs; // @synthesize challengeIDs;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(readonly, copy) NSString *description;
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x00100000000fcab1
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3 previousKnownPendingAmount:(long long)arg4;	// IMP=0x00100000000fca9e
- (void)addInRequestData:(id *)arg1 additional:(id)arg2;	// IMP=0x00100000000fc977
- (id)requestIdentifier;	// IMP=0x00100000000fc96d
- (id)taskInfo;	// IMP=0x00100000000fc788
- (void)removeFromStore:(id)arg1;	// IMP=0x00100000000fc6a4
- (id)postBody;	// IMP=0x00100000000fc5ae
@property(readonly) long long numberOfRequests; // @dynamic numberOfRequests;
- (id)initWithScores:(id)arg1 bundleID:(id)arg2 eligibleChallenges:(id)arg3;	// IMP=0x00100000000fc1ea
- (id)initWithTask:(id)arg1;	// IMP=0x00100000000fc13e
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000000fc129

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

