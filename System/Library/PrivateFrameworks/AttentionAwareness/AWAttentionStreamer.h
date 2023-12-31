//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWSampleLogger;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionStreamer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _unitTestMode;	// 16 = 0x10
    AWSampleLogger *_sampleLogger;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a573
- (void)setSmartCoverStateWithMask:(unsigned long long)arg1 smartCoverState:(_Bool)arg2;	// IMP=0x000000000001a56d
- (void)logStreamComplete:(unsigned long long)arg1 identifier:(id)arg2 duration:(unsigned long long)arg3 ERActivated:(_Bool)arg4;	// IMP=0x000000000001a567
- (void)setNotificationHandler:(CDUnknownBlockType)arg1 withMask:(unsigned long long)arg2;	// IMP=0x000000000001a561
- (_Bool)isStreamerRunningWithMask:(unsigned long long)arg1;	// IMP=0x000000000001a559
- (id)cancelEventStreamWithMask:(unsigned long long)arg1;	// IMP=0x000000000001a50e
- (id)streamEventsWithMask:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 options:(union)arg3;	// IMP=0x000000000001a4c3
- (id)initForUnitTest:(_Bool)arg1 withMask:(unsigned long long)arg2;	// IMP=0x000000000001a431

@end

