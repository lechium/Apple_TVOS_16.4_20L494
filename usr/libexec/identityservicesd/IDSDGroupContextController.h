//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTPromiseSeal, ENGroupContext;

@interface IDSDGroupContextController : NSObject
{
    ENGroupContext *_messagesGroupContext;	// 8 = 0x8
    CUTPromiseSeal *_seal;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000004f7fc0
- (void).cxx_destruct;	// IMP=0x00200000004fcad0
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(retain, nonatomic) ENGroupContext *messagesGroupContext; // @synthesize messagesGroupContext=_messagesGroupContext;
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004fc050
- (void)qSetupSeal;	// IMP=0x00100000004fbfc0
- (void)_messagesGroupContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004fbe80
- (void)centerUpdatedRegistrationIdentities:(id)arg1;	// IMP=0x00100000004fba70
- (void)deleteAllCachedValuesForGroupWithID:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004fb830
- (void)deleteAllKnownGroupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004fb650
- (void)fetchAllKnownGroups:(CDUnknownBlockType)arg1;	// IMP=0x00100000004fb3c0
- (void)latestCachedGroupWithStableID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004fb130
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004fac40
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004fa7d0
- (void)groupFromPublicDataRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004fa340
- (void)publicDataRepresentationForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f9ea0
- (void)fetchGroupWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f9820
- (void)upsertGroupWithInfo:(id)arg1 previousGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004f88d0
- (void)groupContextForProtectionSpace:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f8360
- (id)registrationCenter;	// IMP=0x00100000004f8330
- (void)dealloc;	// IMP=0x00100000004f82b0
- (id)init;	// IMP=0x00100000004f8080

@end
