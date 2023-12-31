//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, NSMutableDictionary;

@interface IDSValidationQueue : NSObject
{
    _Bool _shouldUseAbsinthe;	// 8 = 0x8
    CDUnknownBlockType _validationMessageSendBlock;	// 16 = 0x10
    IDSPushHandler *_pushHandler;	// 24 = 0x18
    NSMutableDictionary *_validationInfoByMechanism;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000005a3160
@property(retain, nonatomic) NSMutableDictionary *validationInfoByMechanism; // @synthesize validationInfoByMechanism=_validationInfoByMechanism;
@property(nonatomic) _Bool shouldUseAbsinthe; // @synthesize shouldUseAbsinthe=_shouldUseAbsinthe;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(copy, nonatomic) CDUnknownBlockType validationMessageSendBlock; // @synthesize validationMessageSendBlock=_validationMessageSendBlock;
- (id)_validationInfoForSubsystem:(long long)arg1 createIfNil:(_Bool)arg2;	// IMP=0x00100000005a2e80
- (long long)_mechanismForSubsystem:(long long)arg1;	// IMP=0x00100000005a2e10
- (void)_sendAbsintheValidationCertRequestIfNeededForSubsystem:(long long)arg1;	// IMP=0x00100000005a2df0
- (void)_sendBAAValidationRequestIfNeededForSubsystem:(long long)arg1;	// IMP=0x00100000005a2dd0
- (void)_sendValidationRequestForSubsystem:(long long)arg1;	// IMP=0x00100000005a2d30
- (void)__purgeCachedCertsForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a2d10
- (void)__cleanupValidationInfoForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a2cf0
- (void)__flushValidationQueueForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a2cd0
- (void)__failValidationQueueWithErrorResponseCode:(long long)arg1 forSubsystemMechanism:(long long)arg2;	// IMP=0x00100000005a2cb0
- (void)__failValidationQueueForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a2c70
- (void)__queueValidationMessage:(id)arg1 subsystem:(long long)arg2 sendBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000005a2bf0
- (void)__removeFromQueue:(id)arg1 subsystem:(long long)arg2;	// IMP=0x00100000005a2ad0
- (_Bool)isBuildingContextForSubsystem:(long long)arg1;	// IMP=0x00100000005a2a50
- (void)buildValidationCredentialsIfNeededForSubsystem:(long long)arg1;	// IMP=0x00100000005a2a30
- (void)queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 subsystem:(long long)arg2 withQueueCompletion:(CDUnknownBlockType)arg3 sendBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000005a27b0
- (void)clearQueueForSubsystem:(long long)arg1;	// IMP=0x00100000005a2570
- (void)removeFromQueue:(id)arg1 subsystem:(long long)arg2;	// IMP=0x00100000005a2500
- (void)purgeCachedCertsForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a24d0
- (void)cleanupValidationInfoForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005a24a0
- (id)initWithPushHandler:(id)arg1 validationMessageSendBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000005a2380
- (id)initWithValidationMessageSendBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005a22c0

@end

