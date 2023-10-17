//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCMomentsMessengerDelegate;

__attribute__((visibility("hidden")))
@interface VCMomentsManager : NSObject
{
    NSMutableDictionary *_streamTokenList;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0010000000131a43
- (id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2;	// IMP=0x0000000000133772
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;	// IMP=0x0000000000133627
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;	// IMP=0x0000000000133582
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;	// IMP=0x00000000001334f8
- (void)saveImage:(id)arg1 movie:(id)arg2;	// IMP=0x0000000000133294
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;	// IMP=0x0000000000132ffe
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;	// IMP=0x0000000000132f61
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;	// IMP=0x0000000000132b2c
- (void)registerBlocksForService;	// IMP=0x0000000000131edf
- (id)messengerFromClientContext:(id)arg1;	// IMP=0x0000000000131e4e
- (void)unregisterMomentsMessengerWithStreamToken:(long long)arg1;	// IMP=0x0000000000131d1b
- (void)registerMomentsMessenger:(id)arg1 withStreamToken:(long long)arg2;	// IMP=0x0000000000131ba9
@property(nonatomic) id <VCMomentsMessengerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000131b18
- (id)init;	// IMP=0x0000000000131a88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

