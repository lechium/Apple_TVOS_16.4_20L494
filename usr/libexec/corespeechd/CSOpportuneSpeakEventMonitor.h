//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioRecordContext, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakEventMonitor
{
    _Bool _isOpportuneSpeakListening;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_audioProviderUUID;	// 24 = 0x18
    CSAudioRecordContext *_audioRecordContext;	// 32 = 0x20
    NSUUID *_token;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0020000000030119
- (void).cxx_destruct;	// IMP=0x0020000000030b97
@property(retain, nonatomic) NSUUID *token; // @synthesize token=_token;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSString *audioProviderUUID; // @synthesize audioProviderUUID=_audioProviderUUID;
@property(nonatomic) _Bool isOpportuneSpeakListening; // @synthesize isOpportuneSpeakListening=_isOpportuneSpeakListening;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_notifyStopOpportuneSpeakWithDelay:(double)arg1;	// IMP=0x00100000000308e8
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;	// IMP=0x00100000000308ce
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x00100000000308b4
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(_Bool)arg4 option:(id)arg5;	// IMP=0x0010000000030690
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4;	// IMP=0x001000000003068a
- (_Bool)isStreaming;	// IMP=0x0010000000030332
- (void)_stopMonitoring;	// IMP=0x0010000000030285
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000301d8
- (id)init;	// IMP=0x001000000003016e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

