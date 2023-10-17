//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject
{
    _Bool _isStreaming;	// 8 = 0x8
    CSAudioRecordContext *_audioRecordContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000000bdb07
- (void).cxx_destruct;	// IMP=0x00200000000bf006
@property(nonatomic) _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
- (void)notifyReleaseAudioSession;	// IMP=0x00100000000bed08
- (void)notifyDidStopStream:(id)arg1 withEventUUID:(id)arg2;	// IMP=0x00100000000bea62
- (void)notifyWillStopStream:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x00100000000be830
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(_Bool)arg2 option:(id)arg3 withEventUUID:(id)arg4;	// IMP=0x00100000000be509
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2;	// IMP=0x00100000000be281
- (void)notifyPreparedSiriClientAudioStream:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00100000000be010
- (void)notifyFetchedSiriClientAudioStream:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00100000000bdd9f
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000bdcc3
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000bdbe7
- (id)init;	// IMP=0x00100000000bdb5c

@end

