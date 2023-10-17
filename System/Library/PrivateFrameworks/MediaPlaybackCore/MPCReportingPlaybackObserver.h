//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface MPCReportingPlaybackObserver : NSObject
{
    NSOperationQueue *_recordEventOperationQueue;	// 8 = 0x8
    _Bool _offline;	// 16 = 0x10
}

+ (id)sharedReportingPlaybackObserver;	// IMP=0x00100000002acaf2
- (void).cxx_destruct;	// IMP=0x00000000002ac3d3
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;	// IMP=0x00000000002ac320
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;	// IMP=0x00000000002ab053
- (id)newPlayActivityEvent;	// IMP=0x00000000002aae88
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x00000000002aadeb
- (id)_init;	// IMP=0x00000000002aacf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

