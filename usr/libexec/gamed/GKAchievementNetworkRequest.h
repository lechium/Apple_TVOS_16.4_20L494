//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKAchievementNetworkRequest : NSObject
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool coalescingAgent;	// 9 = 0x9
    _Bool issueRequests;	// 10 = 0xa
    NSString *playerID;	// 16 = 0x10
    NSURLSessionTask *nsurlTask;	// 24 = 0x18
    NSMutableURLRequest *nsurlRequest;	// 32 = 0x20
    NSMutableDictionary *requestData;	// 40 = 0x28
    NSString *bundleID;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
}

+ (long long)coalescingDelay;	// IMP=0x00200000000fcf08
+ (id)bagKey;	// IMP=0x00100000000fcefb
- (void).cxx_destruct;	// IMP=0x00200000000fe1a5
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool coalescingAgent; // @synthesize coalescingAgent;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(readonly, copy) NSString *description;
- (id)requestIdentifier;	// IMP=0x00100000000fdffd
- (id)taskInfo;	// IMP=0x00100000000fde82
- (void)removeFromStore:(id)arg1;	// IMP=0x00100000000fdb91
- (id)postBody;	// IMP=0x00100000000fdb03
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00100000000fdaee
- (MISSING_TYPE *)handleNetworkRequest:session:clientProxy:previousKnownPendingAmount: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000fdadb
- (void)addInRequestData:(id *)arg1 additional:(id)arg2;	// IMP=0x00100000000fd673
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x00100000000fd39d
@property(readonly) long long numberOfRequests; // @dynamic numberOfRequests;
- (id)initWithAchievements:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000fcfbf
- (id)initWithTask:(id)arg1;	// IMP=0x00100000000fcf13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
