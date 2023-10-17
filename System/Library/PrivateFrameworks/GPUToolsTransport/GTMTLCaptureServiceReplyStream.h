//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTMTLCaptureServiceObserver;

__attribute__((visibility("hidden")))
@interface GTMTLCaptureServiceReplyStream
{
    id <GTMTLCaptureServiceObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006530
- (void)notifyCaptureRequest_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000064ba
- (void)notifyUnsupportedFenum_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000006444
- (void)notifyCaptureProgress_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000063ce
- (void)notifyCaptureObjectsChanged_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000006358
- (id)initWithObserver:(id)arg1;	// IMP=0x00000000000062b4

@end

