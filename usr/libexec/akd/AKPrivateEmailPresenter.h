//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface AKPrivateEmailPresenter : NSObject
{
    NSXPCListener *_remoteListener;	// 8 = 0x8
    CDUnknownBlockType _privateEmailCompletion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005d46a
@property(copy, nonatomic) CDUnknownBlockType privateEmailCompletion; // @synthesize privateEmailCompletion=_privateEmailCompletion;
@property(retain, nonatomic) NSXPCListener *remoteListener; // @synthesize remoteListener=_remoteListener;
- (void)_callCompletionBlockWithEmail:(id)arg1 error:(id)arg2;	// IMP=0x001000000005d37d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000005d2e6
- (void)privateEmailFetchCompletedWith:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005d1dd
- (void)presentPrivateEmailWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005cfbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

