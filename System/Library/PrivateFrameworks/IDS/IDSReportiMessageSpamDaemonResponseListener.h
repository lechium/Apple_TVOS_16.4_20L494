//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject
{
    IDSDaemonRequestTimer *_requestTimer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008f6c1
- (void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(_Bool)arg3 delay:(double)arg4 withError:(id)arg5;	// IMP=0x000000000008f558
- (id)initWithRequestTimer:(id)arg1;	// IMP=0x000000000008f47e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
