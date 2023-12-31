//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, VCMomentsHistory, VideoAttributes;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMoments : NSObject
{
    id _delegate;	// 8 = 0x8
    id _transportDelegate;	// 16 = 0x10
    unsigned int _streamToken;	// 24 = 0x18
    VCMomentsHistory *_momentsHistory;	// 32 = 0x20
    unsigned int _capabilities;	// 40 = 0x28
    unsigned char _mode;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;	// 48 = 0x30
    int _currentActiveRequestsCount;	// 56 = 0x38
    _Bool _isActive;	// 60 = 0x3c
    _Bool _enableLocalVideoRecording;	// 61 = 0x3d
    _Bool _isClientRegistered;	// 62 = 0x3e
    VideoAttributes *_remoteScreenAttributes;	// 64 = 0x40
    NSMutableSet *_requests;	// 72 = 0x48
    _Bool _lastRequest;	// 80 = 0x50
    unsigned int _currentTimestamp;	// 84 = 0x54
}

+ (unsigned long long)countForRequestType:(int)arg1;	// IMP=0x0010000000103893
+ (int)typeForRequest:(id)arg1;	// IMP=0x00100000001037a1
+ (unsigned long long)deviceFreeDiskSpace;	// IMP=0x001000000010373e
+ (_Bool)deviceHasSufficientFreeSpace;	// IMP=0x001000000010371b
+ (unsigned long long)fileSize:(id)arg1;	// IMP=0x001000000010353e
@property(retain, nonatomic) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
- (void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000001036af
- (unsigned long long)directorySize:(id)arg1;	// IMP=0x000000000010359e
- (_Bool)isHistorySupported;	// IMP=0x0000000000103509
- (_Bool)validateNumberOfRequestsWithError:(id *)arg1;	// IMP=0x00000000001034b9
- (void)updateVCMomentsMode;	// IMP=0x000000000010349e
- (void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2;	// IMP=0x0000000000103405
- (void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;	// IMP=0x0000000000103315
- (void)notifyFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;	// IMP=0x000000000010318b
- (void)processRemotePhotoRequest:(id)arg1;	// IMP=0x0000000000102cc5
- (void)processRemoteLivePhotoRequest:(id)arg1;	// IMP=0x000000000010268f
- (void)processRemoteRequest:(id)arg1 withMediaType:(unsigned char)arg2;	// IMP=0x0000000000101fef
- (void)_generateRequest:(unsigned char)arg1 requestState:(unsigned char)arg2 transactionID:(id)arg3 timestamp:(unsigned int)arg4;	// IMP=0x0000000000101f0f
- (void)updateActiveStatus;	// IMP=0x0000000000101d22
- (void)deregisterClient;	// IMP=0x0000000000101c4c
- (void)registerClient;	// IMP=0x0000000000101b76
- (void)clearHistoryBuffer;	// IMP=0x0000000000101b60
- (void)cleanupActiveRequests;	// IMP=0x0000000000101b0d
- (_Bool)processClientRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001018ee
- (void)setMomentsDelegate:(id)arg1;	// IMP=0x00000000001018dd
- (id)momentsDelegate;	// IMP=0x00000000001018cf
- (void)setTransportDelegate:(id)arg1;	// IMP=0x00000000001018be
- (id)transportDelegate;	// IMP=0x00000000001018b0
- (void)setFrameRate:(float)arg1;	// IMP=0x000000000010189a
- (void)processRequest:(id)arg1 isRemote:(_Bool)arg2;	// IMP=0x0000000000101348
- (_Bool)validateIncomingRequest:(id)arg1 isRemote:(_Bool)arg2;	// IMP=0x0000000000100c54
- (void)updateRemoteScreenAttributes:(id)arg1;	// IMP=0x0000000000100c16
- (void)getInitialRemoteScreenAttributes:(id)arg1;	// IMP=0x0000000000100bb3
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;	// IMP=0x0000000000100ba7
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x0000000000100b89
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x0000000000100b68
@property(nonatomic) int imageType;
@property(nonatomic) int videoCodec;
- (void)dealloc;	// IMP=0x0000000000100a7d
- (id)initWithStreamToken:(unsigned int)arg1 delegate:(id)arg2;	// IMP=0x00000000001009a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

