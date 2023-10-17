//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSAudioServerCrashMonitor
{
    unsigned long long _serverState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0020000000024fa5
@property(nonatomic) unsigned long long serverState; // @synthesize serverState=_serverState;
- (void)audioServerCrashEventProvidingLostMediaserverd;	// IMP=0x00100000000251cc
- (void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2;	// IMP=0x0010000000025151
- (void)_didReceiveMediaserverNotification:(unsigned long long)arg1;	// IMP=0x00100000000250d3
- (void)_mediaserverdDidRestart;	// IMP=0x00100000000250bc
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000002503d
- (id)init;	// IMP=0x0010000000024ffa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

