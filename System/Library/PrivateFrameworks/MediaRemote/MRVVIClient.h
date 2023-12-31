//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRVVIClient : NSObject
{
    NSMutableDictionary *_deviceIDToCallbackMap;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedClient;	// IMP=0x0060000000243313
- (void).cxx_destruct;	// IMP=0x000000000024387e
- (void)_recordingStateChangedNotification:(id)arg1;	// IMP=0x000000000024361b
- (void)setRecordingStateCallback:(CDUnknownBlockType)arg1 forDeviceID:(unsigned int)arg2;	// IMP=0x00000000002434c8
- (void)dealloc;	// IMP=0x0000000000243453
- (id)init;	// IMP=0x0000000000243368

@end

