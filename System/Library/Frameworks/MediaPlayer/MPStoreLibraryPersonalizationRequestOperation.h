//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPStoreLibraryPersonalizationRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    MPStoreLibraryPersonalizationRequest *_request;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
}

+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;	// IMP=0x006000000017fa2c
- (void).cxx_destruct;	// IMP=0x000000000017db11
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreLibraryPersonalizationRequest *request; // @synthesize request=_request;
- (void)execute;	// IMP=0x000000000017c785
- (void)cancel;	// IMP=0x000000000017c73c

@end

