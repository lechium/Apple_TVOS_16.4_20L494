//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOWiFiQualityServiceRemoteProxy : NSObject
{
}

- (void)cancelRequestId:(id)arg1;	// IMP=0x000000000063ae2f
- (void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000063a884
- (void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000063a26f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

