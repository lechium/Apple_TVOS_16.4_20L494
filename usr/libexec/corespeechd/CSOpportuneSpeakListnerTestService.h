//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSOpportuneSpeakListener, NSString;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    CSOpportuneSpeakListener *;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002e7b5
- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(_Bool)arg2;	// IMP=0x001000000002e720
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2;	// IMP=0x001000000002e68b
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;	// IMP=0x001000000002e5f6
- (void)receiveOpportuneSpeakListenerStop;	// IMP=0x001000000002e4e9
- (void)receiveOpportuneSpeakListenerStart;	// IMP=0x001000000002e36a
- (void)start;	// IMP=0x001000000002e2a1
- (id)init;	// IMP=0x001000000002e249

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
