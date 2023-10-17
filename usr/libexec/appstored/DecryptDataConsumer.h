//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChunkedDigest, DigestVerifier, NSString;
@protocol AssetDataConsumer, OS_dispatch_queue;

@interface DecryptDataConsumer : NSObject
{
    char *_partialSampleBuffer;	// 8 = 0x8
    unsigned long long _partialSampleBufferLength;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_consumerQueue;	// 24 = 0x18
    DigestVerifier *_digestVerifier;	// 32 = 0x20
    unsigned int *_sampleSizes;	// 40 = 0x28
    unsigned long long _sampleSizesCount;	// 48 = 0x30
    ChunkedDigest *_digest;	// 56 = 0x38
    id <AssetDataConsumer> _streamAdapter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000005c87a
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c6bc
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c5aa
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c498
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c2d1
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c209
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005c13f
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005c12d
- (void)dealloc;	// IMP=0x001000000005c0fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
