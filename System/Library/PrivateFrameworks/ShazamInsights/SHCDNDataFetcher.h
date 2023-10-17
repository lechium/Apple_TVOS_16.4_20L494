//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHNetworkRequester;

__attribute__((visibility("hidden")))
@interface SHCDNDataFetcher : NSObject
{
    id <SHNetworkRequester> _networkRequester;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c014
@property(readonly, nonatomic) id <SHNetworkRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
- (id)endpointFromDate:(id)arg1 insights:(id)arg2 location:(id)arg3;	// IMP=0x000000000000bf15
- (void)clusterDataAtURL:(id)arg1 forLocation:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000bcc5
- (_Bool)doesRequestEtag:(id)arg1 matchInResponse:(id)arg2;	// IMP=0x000000000000bc1f
- (void)fetchClusterURL:(id)arg1 forCurrentStorefront:(id)arg2 cachedUniqueHash:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b704
- (id)initWithNetworkRequester:(id)arg1;	// IMP=0x000000000000b699
- (id)init;	// IMP=0x000000000000b659

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

