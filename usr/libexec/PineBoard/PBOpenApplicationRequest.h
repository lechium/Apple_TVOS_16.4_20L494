//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAuditToken, FBSOpenApplicationOptions, FBSSceneIdentity, MISSING_TYPE, NSString, PBAppInfo;

@interface PBOpenApplicationRequest : NSObject
{
    _Bool _trustedRequest;	// 8 = 0x8
    _Bool _hasBrowsingWebAction;	// 9 = 0x9
    MISSING_TYPE *_fromAppInfo;	// 16 = 0x10
    PBAppInfo *_toAppInfo;	// 24 = 0x18
    long long _launchIntent;	// 32 = 0x20
    FBSOpenApplicationOptions *_openApplicationOptions;	// 40 = 0x28
    BSAuditToken *_auditToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00100000000c1e0b
@property(readonly, nonatomic) _Bool hasBrowsingWebAction; // @synthesize hasBrowsingWebAction=_hasBrowsingWebAction;
@property(readonly, nonatomic, getter=isTrustedRequest) _Bool trustedRequest; // @synthesize trustedRequest=_trustedRequest;
@property(readonly, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) FBSOpenApplicationOptions *openApplicationOptions; // @synthesize openApplicationOptions=_openApplicationOptions;
@property(readonly, nonatomic) long long launchIntent; // @synthesize launchIntent=_launchIntent;
@property(readonly, nonatomic) PBAppInfo *toAppInfo; // @synthesize toAppInfo=_toAppInfo;
@property(readonly, nonatomic) PBAppInfo *fromAppInfo; // @synthesize fromAppInfo=_fromAppInfo;
- (id)_makeTransitionPayload;	// IMP=0x00100000000c1ba5
- (id)_payloadSourceApplication;	// IMP=0x00100000000c1ab0
- (_Bool)_shouldSendPayloadSourceApplication;	// IMP=0x00100000000c197d
- (id)_makeTransitionActions;	// IMP=0x00100000000c15ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c1568
- (unsigned long long)hash;	// IMP=0x00100000000c14a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c1254
- (id)debugDescription;	// IMP=0x00100000000c108e
- (id)description;	// IMP=0x00100000000c0fa1
- (id)makeSceneTransitionContext;	// IMP=0x00100000000c0d79
- (id)makeProcessExecutionContext;	// IMP=0x00100000000c0b3d
@property(readonly, nonatomic) NSString *launchReason;
@property(readonly, nonatomic) _Bool relaunchingForUserProfileSwitch;
@property(readonly, nonatomic) _Bool shouldAnimatedLayout;
@property(readonly, nonatomic) _Bool hasPayloadURL;
@property(readonly, nonatomic) _Bool waitForDebugger;
@property(readonly, nonatomic, getter=isDebugging) _Bool debugging;
@property(readonly, nonatomic, getter=isLaunchedByDeactivation) _Bool launchedByDeactivation;
@property(readonly, nonatomic, getter=isLaunchedOverSiri) _Bool launchedOverSiri;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic) FBSSceneIdentity *toSceneIdentity;
@property(readonly, nonatomic) FBSSceneIdentity *fromSceneIdentity;
- (id)_initWithOpenApplicationOptions:(id)arg1 auditToken:(id)arg2 trustedRequest:(_Bool)arg3 fromAppInfo:(id)arg4 toAppInfo:(id)arg5;	// IMP=0x00100000000c0488
- (id)initWithRequest:(id)arg1 fromAppInfo:(id)arg2 toAppInfo:(id)arg3;	// IMP=0x00100000000c0359
@property(readonly, nonatomic) _Bool enforceDeepLinking;

@end

