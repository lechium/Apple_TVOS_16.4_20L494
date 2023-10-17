//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegationConsumerServiceProtocolHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006a147
- (void)getResponseForStartDelegationRequest:(id)arg1 requestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a081
- (void)getResponseForFinishDelegationRequest:(id)arg1 withSessionIDToRequestInfoMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069fbb
- (id)init;	// IMP=0x0000000000069f11

@end

