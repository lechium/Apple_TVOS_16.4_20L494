//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, SZExtractor, StreamReader;

@interface StreamingZipStreamConsumer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <SZExtractor> _extractor;	// 16 = 0x10
    id <StreamReader> _streamReader;	// 24 = 0x18
    CDUnknownBlockType _errorHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000010e6c5
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x001000000010ddd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

