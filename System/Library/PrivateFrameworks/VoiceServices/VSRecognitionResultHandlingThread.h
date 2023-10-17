//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray;
@protocol VSRecognitionResultHandlingThreadDelegate;

__attribute__((visibility("hidden")))
@interface VSRecognitionResultHandlingThread : NSObject
{
    id <VSRecognitionResultHandlingThreadDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
    NSConditionLock *_lock;	// 24 = 0x18
    struct {
        unsigned int running:1;
        unsigned int delegateDidHandleResults:1;
        unsigned int valid:1;
    } _resultHandlingFlags;	// 32 = 0x20
}

- (void)_handleRequests;	// IMP=0x000000000002c06b
- (void)_notifyRequestHandled:(id)arg1;	// IMP=0x000000000002bff1
- (void)invalidate;	// IMP=0x000000000002bfaa
- (void)handleResults:(id)arg1 withHandler:(id)arg2;	// IMP=0x000000000002bed0
- (void)setDelegate:(id)arg1;	// IMP=0x000000000002be98
- (void)dealloc;	// IMP=0x000000000002be4e
- (id)init;	// IMP=0x000000000002bde9

@end

