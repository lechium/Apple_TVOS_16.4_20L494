//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACDQueueDictionary, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface ACDAuthenticationDialogManager : NSObject
{
    NSXPCListener *_authenticationDialogListener;	// 8 = 0x8
    ACDQueueDictionary *_dialogRequestQueues;	// 16 = 0x10
    NSString *_activeAccountID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005b8d9
- (void)authenticationDialogCrashed;	// IMP=0x000000000005b8ba
- (void)authenticationDialogDidFinishWithSuccess:(_Bool)arg1 response:(id)arg2;	// IMP=0x000000000005b4b5
- (void)contextForAuthenticationDialog:(CDUnknownBlockType)arg1;	// IMP=0x000000000005b1d1
- (_Bool)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1;	// IMP=0x000000000005ad0e
- (void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005aa67
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000005a6e2
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005a344
- (id)init;	// IMP=0x000000000005a2ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
