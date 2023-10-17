//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamInputManager
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_streamInputQueue;	// 32 = 0x20
    NSMutableDictionary *_streamInputs;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00100000001744b9
- (void)didResumeStreamInput:(id)arg1;	// IMP=0x00000000001760dc
- (void)didSuspendStreamInput:(id)arg1;	// IMP=0x0000000000176028
- (void)didStopStreamInput:(id)arg1;	// IMP=0x0000000000175f74
- (void)didStartStreamInput:(id)arg1;	// IMP=0x0000000000175ec0
- (id)streamInputWithID:(long long)arg1;	// IMP=0x0000000000175d56
- (void)deregisterBlocksForService;	// IMP=0x0000000000175d1d
- (void)registerBlocksForService;	// IMP=0x0000000000175c0a
- (void)registerDidClientDieBlock:(id)arg1;	// IMP=0x0000000000175abe
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 eventLogLevel:(int)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000175968
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000017594d
- (_Bool)pushSampleBufferWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000175794
- (_Bool)clientProcessDiedWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001755b4
- (_Bool)terminateStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000017528e
- (_Bool)getServerPidWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001750a2
- (_Bool)initializeStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000174986
- (id)newStreamInputID;	// IMP=0x0000000000174831
- (void)dealloc;	// IMP=0x000000000017479f
- (id)autorelease;	// IMP=0x0000000000174796
- (oneway void)release;	// IMP=0x0000000000174790
- (unsigned long long)retainCount;	// IMP=0x0000000000174783
- (id)retain;	// IMP=0x000000000017477a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174771
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174764
- (id)init;	// IMP=0x00000000001744fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

