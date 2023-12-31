//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ManagedAppService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000129c80
- (void)submitVPPRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001299a5
- (void)submitManifestRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000129725
- (void)showVPPInviteForCurrentUser:(id)arg1 orgName:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012964f
- (void)requestStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000012932d
- (void)processITMSServicesRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012911c
- (id)init;	// IMP=0x001000000012909a

@end

