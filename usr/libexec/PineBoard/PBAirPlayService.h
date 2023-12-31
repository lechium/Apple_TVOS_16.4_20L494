//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemServiceConnection;

@interface PBAirPlayService : NSObject
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001e2b00
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)triggerUserActivity;	// IMP=0x00100000001e290a
- (void)requestPresentationWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e28c9
- (void)invalidate;	// IMP=0x00100000001e28c3
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00100000001e285f
- (id)init;	// IMP=0x00100000001e2851

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

