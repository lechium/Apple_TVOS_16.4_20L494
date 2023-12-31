//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLCommandQueue.h>

@class MTLSimBufferStoragePool, MTLSimCommandStoragePool, NSObject, NSString;
@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLSimCommandQueue : _MTLCommandQueue
{
    MTLSimCommandStoragePool *commandPool;	// 352 = 0x160
    MTLSimBufferStoragePool *bufferPool;	// 360 = 0x168
    unsigned int _commandQueueRef;	// 368 = 0x170
    id <MTLDevice> _device;	// 376 = 0x178
    unsigned long long bufferStorageByteCount;	// 384 = 0x180
}

@property(readonly) unsigned long long bufferStorageByteCount; // @synthesize bufferStorageByteCount;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id)counterInfo;	// IMP=0x000000000000b8d1
- (id)getRequestedCounters;	// IMP=0x000000000000b8b8
- (int)requestCounters:(id)arg1;	// IMP=0x000000000000b8b0
- (id)availableCounters;	// IMP=0x000000000000b8a8
- (void)returnBufferStorage:(struct BufferStorageEntry *)arg1;	// IMP=0x000000000000b88b
- (struct BufferStorageEntry *)getBufferStorage;	// IMP=0x000000000000b86e
- (void)returnCommandBufferStorage:(struct StorageEntry *)arg1;	// IMP=0x000000000000b851
- (struct StorageEntry *)getCommandBufferStorage;	// IMP=0x000000000000b834
- (void)submitCommandBuffers:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000b660
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;	// IMP=0x000000000000b658
- (_Bool)setGPUPriority:(unsigned long long)arg1;	// IMP=0x000000000000b650
- (void)setCompletionQueue:(id)arg1;	// IMP=0x000000000000b64a
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;	// IMP=0x000000000000b642
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;	// IMP=0x000000000000b63a
- (unsigned long long)getGPUPriority;	// IMP=0x000000000000b62f
- (unsigned long long)getBackgroundGPUPriority;	// IMP=0x000000000000b624
- (id)commandBufferWithDescriptor:(id)arg1;	// IMP=0x000000000000b5a9
- (id)commandBufferWithUnretainedReferences;	// IMP=0x000000000000b571
- (id)commandBuffer;	// IMP=0x000000000000b536
- (void)dealloc;	// IMP=0x000000000000b44a
- (id)initWithDevice:(id)arg1 commandQueueRef:(unsigned int)arg2 descriptor:(id)arg3;	// IMP=0x000000000000b37e
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;	// IMP=0x000000000000b2c0

// Remaining properties
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property _Bool executionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isOpenGLQueue;
@property(copy) NSString *label;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) unsigned long long qosLevel;
@property _Bool skipRender;
@property(readonly) Class superclass;

@end

