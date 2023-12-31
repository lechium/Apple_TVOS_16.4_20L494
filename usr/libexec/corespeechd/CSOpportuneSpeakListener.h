//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, CSAudioStream, CSAudioTimeConverter, CSPlainAudioFileWriter, CSSPGEndpointAnalyzer, NSMutableArray, NSString;
@protocol CSAudioSessionProviding, CSAudioStreamProviding, CSOpportuneSpeakListenerDelegate, OS_dispatch_queue;

@interface CSOpportuneSpeakListener : NSObject
{
    _Bool _isMediaPlayingNow;	// 8 = 0x8
    int _remoteVADSPGRatio;	// 12 = 0xc
    id <CSOpportuneSpeakListenerDelegate> _delegate;	// 16 = 0x10
    CSAudioStream *_audioStream;	// 24 = 0x18
    CSSPGEndpointAnalyzer *_spgEndpointAnalyzer;	// 32 = 0x20
    id <CSAudioStreamProviding> _audioStreamProvider;	// 40 = 0x28
    id <CSAudioSessionProviding> _audioSessionProvider;	// 48 = 0x30
    CSAudioRecordContext *_latestContext;	// 56 = 0x38
    NSMutableArray *_remoteVADAlignBuffer;	// 64 = 0x40
    unsigned long long _remoteVADAlignCount;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_alignBufferQueue;	// 80 = 0x50
    CSPlainAudioFileWriter *_audioFileWriter;	// 88 = 0x58
    unsigned long long _runningSampleCount;	// 96 = 0x60
    CSAudioTimeConverter *_audioTimeConverter;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000005caf0
@property(retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // @synthesize audioTimeConverter=_audioTimeConverter;
@property(nonatomic) unsigned long long runningSampleCount; // @synthesize runningSampleCount=_runningSampleCount;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *alignBufferQueue; // @synthesize alignBufferQueue=_alignBufferQueue;
@property(nonatomic) unsigned long long remoteVADAlignCount; // @synthesize remoteVADAlignCount=_remoteVADAlignCount;
@property(retain, nonatomic) NSMutableArray *remoteVADAlignBuffer; // @synthesize remoteVADAlignBuffer=_remoteVADAlignBuffer;
@property _Bool isMediaPlayingNow; // @synthesize isMediaPlayingNow=_isMediaPlayingNow;
@property(retain, nonatomic) CSAudioRecordContext *latestContext; // @synthesize latestContext=_latestContext;
@property(retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider; // @synthesize audioSessionProvider=_audioSessionProvider;
@property(retain, nonatomic) id <CSAudioStreamProviding> audioStreamProvider; // @synthesize audioStreamProvider=_audioStreamProvider;
@property(nonatomic) int remoteVADSPGRatio; // @synthesize remoteVADSPGRatio=_remoteVADSPGRatio;
@property(retain, nonatomic) CSSPGEndpointAnalyzer *spgEndpointAnalyzer; // @synthesize spgEndpointAnalyzer=_spgEndpointAnalyzer;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) __weak id <CSOpportuneSpeakListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)spgEndpointAnalyzer:(id)arg1 hasSilenceScoreEstimate:(double)arg2 clientProcessedAudioTimeMS:(float)arg3;	// IMP=0x001000000005c587
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x001000000005c581
- (_Bool)_shouldReportBoron;	// IMP=0x001000000005c549
- (_Bool)_popRemoteVADSignal;	// IMP=0x001000000005c4ca
- (void)_addRemoteVADSignal:(_Bool)arg1;	// IMP=0x001000000005c444
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x001000000005c0c8
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x001000000005c019
- (void)stopListenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c002
- (void)stopListenWithStateReset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005bc7c
- (void)_startRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005b692
- (void)_resetAlignBuffer;	// IMP=0x001000000005b669
- (void)startListenWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b169
- (id)init;	// IMP=0x001000000005b07b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

