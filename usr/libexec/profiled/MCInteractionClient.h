//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MCInteractionClient : NSObject
{
    NSString *_defaultStatus;	// 8 = 0x8
    NSString *_lastStatus;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000018d81
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSString *defaultStatus;
- (void)waitForEnrollmentToFinishWithPersonaID:(id)arg1;	// IMP=0x0010000000018cfc
- (_Bool)requestCurrentPasscodeOutPasscode:(id *)arg1;	// IMP=0x0010000000018948
- (_Bool)didBeginInstallingNextProfileData:(id)arg1;	// IMP=0x001000000001879e
- (_Bool)didUpdateStatus:(id)arg1;	// IMP=0x00100000000185c3
- (_Bool)didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0010000000018312
- (_Bool)showUserWarnings:(id)arg1 outResult:(_Bool *)arg2;	// IMP=0x0010000000017f12
- (void)_receivedUserInput:(id)arg1 preflight:(_Bool)arg2 payloadIndex:(unsigned long long)arg3 delegate:(id)arg4 semaphore:(id)arg5 error:(id)arg6 outResponses:(id)arg7;	// IMP=0x0010000000017ab7
- (void)requestManagedRestoreWithManagedAppleID:(id)arg1 personaID:(id)arg2;	// IMP=0x001000000001765c
- (_Bool)requestMAIDSignIn:(id)arg1 personaID:(id)arg2 outError:(id *)arg3 isCancelled:(_Bool *)arg4;	// IMP=0x0010000000017091
- (_Bool)requestUserInput:(id)arg1 delegate:(id)arg2 outResult:(id *)arg3;	// IMP=0x0010000000016c15
- (id)initWithXPCClientConnection:(id)arg1;	// IMP=0x0010000000016bad

@end

