//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKDataTransport, GKPlayerCredential, GKPlayerInternal;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    GKPlayerInternal *_localPlayer;	// 24 = 0x18
    GKPlayerCredential *_credential;	// 32 = 0x20
}

+ (Class)interfaceClass;	// IMP=0x0040000000003a0e
+ (unsigned long long)requiredEntitlements;	// IMP=0x00100000000038f5
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;	// IMP=0x0010000000003861
+ (id)serviceFromService:(id)arg1;	// IMP=0x0010000000003761
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;	// IMP=0x00100000000036cb
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;	// IMP=0x0010000000003607
- (void).cxx_destruct;	// IMP=0x0020000000003e9c
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroupForPlayerInternal:(id)arg1;	// IMP=0x0010000000003d8d
- (id)transactionGroup;	// IMP=0x0010000000003d0d
- (id)transportBypassingMultiUser;	// IMP=0x0010000000003c2a
- (id)transactionGroupBypassingMultiUser;	// IMP=0x0010000000003b41
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x0010000000003b2f
- (_Bool)requiresAuthentication;	// IMP=0x0010000000003b27
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x0010000000003369
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000000032d6
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x001000000000312c

@end
