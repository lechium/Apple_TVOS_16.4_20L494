//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTMTLDiagnosticsServiceObserver;

__attribute__((visibility("hidden")))
@interface GTMTLDiagnosticsServiceReplyStream
{
    id <GTMTLDiagnosticsServiceObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a9e0
- (void)notifyDiagnosticsIssue_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000000a96a
- (void)notifyCommandBufferIssue_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000000a8f4
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000000a850

@end
