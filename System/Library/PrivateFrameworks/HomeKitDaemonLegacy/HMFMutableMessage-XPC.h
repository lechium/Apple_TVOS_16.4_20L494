//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMutableMessage.h>

@class HMDBackingStoreTransactionActions, HMDRemoteMessageSenderContext, NSString;

@interface HMFMutableMessage (XPC)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;	// IMP=0x0020000000547953
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000547902
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x00200000005478ed
- (void)setRequiresWalletKeyEntitlement;	// IMP=0x00100000002dbb3f
- (void)setSendPolicy:(id)arg1;	// IMP=0x00100000002dbb26
- (void)setRequiresPersonManagerEntitlement;	// IMP=0x00100000002dbb06
- (void)setRequiresMultiUserSetupEntitlement;	// IMP=0x00100000002dbae6
- (void)setRequiresCameraClipsEntitlement;	// IMP=0x00100000002dbac6
- (void)setRequiresMatterSetupPayloadEntitlement;	// IMP=0x00100000002dbaa6
- (void)setRequiresSetupPayloadEntitlement;	// IMP=0x00100000002dba86
@property(nonatomic) _Bool requiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement;	// IMP=0x00100000002dba15
@property(nonatomic) _Bool requiresSPIEntitlement;
- (void)setRequiresSPIEntitlement;	// IMP=0x00100000002db9a4
@property(retain) HMDBackingStoreTransactionActions *transactionResult;
@property(nonatomic, getter=isInternal) _Bool internal;
@property(retain, nonatomic) HMDRemoteMessageSenderContext *remoteSenderContext;
- (void)setRemoteResponseRestriction:(unsigned long long)arg1;	// IMP=0x0010000000b14de1
@property(nonatomic) unsigned long long remoteRestriction;
@property(retain, nonatomic) NSString *remoteToID;
@property(retain, nonatomic) NSString *remoteSourceID;
@property(nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(nonatomic, getter=isRemote) _Bool remote;
@end

