//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RMDummyDataProviderConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RMDummyDataProvider : NSObject
{
    _Bool _running;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_producerQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_receiverQueue;	// 24 = 0x18
    RMDummyDataProviderConfiguration *_configuration;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_producerTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000005444
@property(retain, nonatomic) NSObject<OS_dispatch_source> *producerTimer; // @synthesize producerTimer=_producerTimer;
@property(getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) RMDummyDataProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *producerQueue; // @synthesize producerQueue=_producerQueue;
- (void)stopProducingData;	// IMP=0x0010000000005360
- (id)startProducingDataWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005086
- (id)initWithConfiguration:(id)arg1 receiverQueue:(id)arg2;	// IMP=0x0010000000004f98

@end

