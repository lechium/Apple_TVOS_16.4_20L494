//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVConference, NSString, TUVideoDeviceController;
@protocol CSDAVConferenceProviderDelegate;

@interface CSDAVConferenceProvider : NSObject
{
    id <CSDAVConferenceProviderDelegate> delegate;	// 8 = 0x8
    AVConference *_conference;	// 16 = 0x10
    long long _callID;	// 24 = 0x18
    TUVideoDeviceController *_videoDeviceController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001b3f28
@property(readonly, nonatomic) TUVideoDeviceController *videoDeviceController; // @synthesize videoDeviceController=_videoDeviceController;
@property(nonatomic) long long callID; // @synthesize callID=_callID;
@property(readonly, nonatomic) AVConference *conference; // @synthesize conference=_conference;
@property(nonatomic) __weak id <CSDAVConferenceProviderDelegate> delegate; // @synthesize delegate;
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x00100000001b3dc3
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;	// IMP=0x00100000001b3d1f
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x00100000001b3c65
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x00100000001b3bb2
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;	// IMP=0x00100000001b3aff
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x00100000001b3a4c
- (void)serverDiedForConference:(id)arg1;	// IMP=0x00100000001b39c8
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;	// IMP=0x00100000001b38e1
- (void)conference:(id)arg1 withCallID:(long long)arg2 didPauseVideo:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001b37d0
- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x00100000001b36e5
- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x00100000001b3641
- (void)conference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001b3530
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x00100000001b347d
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x00100000001b33ca
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;	// IMP=0x00100000001b32f8
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;	// IMP=0x00100000001b32a2
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;	// IMP=0x00100000001b324c
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x00100000001b31d7
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x00100000001b3162
- (void)conference:(id)arg1 closeConnectionForCallID:(long long)arg2;	// IMP=0x00100000001b3090
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;	// IMP=0x00100000001b2f6f
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;	// IMP=0x00100000001b2e76
- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;	// IMP=0x00100000001b2d41
- (void)sendData:(id)arg1;	// IMP=0x00100000001b2cc6
- (void)updateCapabilities:(id)arg1;	// IMP=0x00100000001b2c4e
- (void)cancel;	// IMP=0x00100000001b2b5f
- (void)stop;	// IMP=0x00100000001b2a70
- (void)inviteDictionaryForCallID:(long long)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x00100000001b29c1
- (_Bool)startConnectionAsCaller:(_Bool)arg1 capabilities:(id)arg2 socket:(int)arg3 error:(id *)arg4;	// IMP=0x00100000001b2861
- (_Bool)startConnectionAsCaller:(_Bool)arg1 remoteInviteDictionary:(id)arg2 capabilities:(id)arg3 destination:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001b26ce
- (_Bool)initializeNewCallWithDeviceRole:(int)arg1 reportingHierarchyToken:(id)arg2;	// IMP=0x00100000001b257f
- (void)setPeerReportingIdentifier:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x00100000001b2429
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg1 localLandscapeAspectRatio:(struct CGSize)arg2;	// IMP=0x00100000001b22aa
- (void)setRemoteVideoPresentationState:(unsigned int)arg1;	// IMP=0x00100000001b2157
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;	// IMP=0x00100000001b1fd1
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused;
@property(nonatomic, getter=isSendingAudio) _Bool sendingAudio;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted;
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long inputAudioPowerSpectrumToken;
@property(nonatomic, getter=isOutputFrequencyMeteringEnabled) _Bool outputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputFrequencyMeteringEnabled) _Bool inputFrequencyMeteringEnabled;
- (void)dealloc;	// IMP=0x00100000001b15a8
- (id)initWithClientUUID:(id)arg1 serialQueue:(id)arg2;	// IMP=0x00100000001b13f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

