//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSAuditToken, VSOptional;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation
{
    VSAuditToken *_auditToken;	// 8 = 0x8
    VSOptional *_result;	// 16 = 0x10
    NSOperationQueue *_privateQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001943d
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void)cancel;	// IMP=0x0000000000019367
- (void)executionDidBegin;	// IMP=0x0000000000018b59
- (id)init;	// IMP=0x0000000000018aa3

@end

