//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMutableMessage.h>

@class HMDBackingStoreTransactionActions, HMDRemoteMessageSenderContext, NSString;

@interface HMFMutableMessage (XPC)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;	// IMP=0x00200000005f276c
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000005f271b
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x00200000005f2706
- (void)setRequiresWalletKeyEntitlement;	// IMP=0x00100000003378c6
- (void)setSendPolicy:(id)arg1;	// IMP=0x00100000003378ad
- (void)setRequiresPersonManagerEntitlement;	// IMP=0x001000000033788d
- (void)setRequiresMultiUserSetupEntitlement;	// IMP=0x001000000033786d
- (void)setRequiresCameraClipsEntitlement;	// IMP=0x001000000033784d
- (void)setRequiresMatterSetupPayloadEntitlement;	// IMP=0x001000000033782d
- (void)setRequiresSetupPayloadEntitlement;	// IMP=0x001000000033780d
@property(nonatomic) _Bool requiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement;	// IMP=0x001000000033779c
@property(nonatomic) _Bool requiresSPIEntitlement;
- (void)setRequiresSPIEntitlement;	// IMP=0x001000000033772b
@property(retain) HMDBackingStoreTransactionActions *transactionResult;
@property(nonatomic, getter=isInternal) _Bool internal;
@property(retain, nonatomic) HMDRemoteMessageSenderContext *remoteSenderContext;
- (void)setRemoteResponseRestriction:(unsigned long long)arg1;	// IMP=0x0010000000c5d07a
@property(nonatomic) unsigned long long remoteRestriction;
@property(retain, nonatomic) NSString *remoteToID;
@property(retain, nonatomic) NSString *remoteSourceID;
@property(nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(nonatomic, getter=isRemote) _Bool remote;
@end

