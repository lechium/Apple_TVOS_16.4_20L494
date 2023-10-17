//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseCommand.h>

@class NSString;

@interface SABaseCommand (SiriCoreSessionObject)
- (_Bool)siriCore_supportedByRemoteLimitedSession;	// IMP=0x00200000000287a4
- (_Bool)siriCore_supportedByLocalSession;	// IMP=0x002000000002879c
- (void)siriCore_setSessionRequestId:(id)arg1;	// IMP=0x0020000000028796
- (id)siriCore_requestId;	// IMP=0x002000000002878e
- (void)siriCore_logDiagnostics;	// IMP=0x0020000000028788
- (_Bool)siriCore_isProvisional;	// IMP=0x0020000000028780
- (_Bool)siriCore_isRestartable;	// IMP=0x002000000002876e
- (_Bool)siriCore_isRetryable;	// IMP=0x0020000000028766
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;	// IMP=0x002000000002875e
- (id)siriCore_serializedAceDataError:(id *)arg1;	// IMP=0x002000000002873f

// Remaining properties
@property(copy, nonatomic) NSString *aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId;
@property(readonly) Class superclass;
@end

