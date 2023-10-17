//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CKUploadRequestMetadata;

@interface CKRequestAssetOperation : NSOperation
{
    long long _state;	// 8 = 0x8
    CKUploadRequestMetadata *_metadata;	// 16 = 0x10
    CDUnknownBlockType _assetRequestCompletionBlock;	// 24 = 0x18
    CDUnknownBlockType _requestCallback;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000156d8c
@property(copy, nonatomic) CDUnknownBlockType requestCallback; // @synthesize requestCallback=_requestCallback;
@property(copy, nonatomic) CDUnknownBlockType assetRequestCompletionBlock; // @synthesize assetRequestCompletionBlock=_assetRequestCompletionBlock;
@property(retain, nonatomic) CKUploadRequestMetadata *metadata; // @synthesize metadata=_metadata;
- (void)start;	// IMP=0x00000000001564b0
- (_Bool)isFinished;	// IMP=0x0000000000156496
- (_Bool)isExecuting;	// IMP=0x000000000015647c
@property long long state; // @synthesize state=_state;
- (_Bool)isAsynchronous;	// IMP=0x000000000015632a
- (id)initWithAssetMetadata:(id)arg1 requestCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000156275

@end

