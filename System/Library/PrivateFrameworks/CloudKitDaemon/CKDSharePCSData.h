//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, NSData, NSDate, NSString;

@interface CKDSharePCSData
{
    CKRecordID *_shareID;	// 40 = 0x28
    NSDate *_shareModificationDate;	// 48 = 0x30
    unsigned long long _serviceType;	// 56 = 0x38
    NSString *_shareEtag;	// 64 = 0x40
    long long _publicPermission;	// 72 = 0x48
    long long _myParticipantRole;	// 80 = 0x50
    long long _myParticipantPermission;	// 88 = 0x58
    struct _OpaquePCSShareProtection *_myParticipantPCS;	// 96 = 0x60
    NSData *_myParticipantPCSData;	// 104 = 0x68
    struct _OpaquePCSShareProtection *_preKeyRollInvitedPCS;	// 112 = 0x70
    struct _OpaquePCSShareProtection *_publicPCS;	// 120 = 0x78
    NSString *_publicPCSEtag;	// 128 = 0x80
    NSData *_publicPCSData;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000324792
+ (id)dataWithShareID:(id)arg1 pcsData:(id)arg2;	// IMP=0x0010000000324313
+ (id)dataWithShare:(id)arg1 serviceType:(unsigned long long)arg2;	// IMP=0x001000000032406b
- (void).cxx_destruct;	// IMP=0x0000000000325127
@property(copy, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property(copy, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property(nonatomic) struct _OpaquePCSShareProtection *publicPCS; // @synthesize publicPCS=_publicPCS;
@property(nonatomic) struct _OpaquePCSShareProtection *preKeyRollInvitedPCS; // @synthesize preKeyRollInvitedPCS=_preKeyRollInvitedPCS;
@property(copy, nonatomic) NSData *myParticipantPCSData; // @synthesize myParticipantPCSData=_myParticipantPCSData;
@property(nonatomic) struct _OpaquePCSShareProtection *myParticipantPCS; // @synthesize myParticipantPCS=_myParticipantPCS;
@property(nonatomic) long long myParticipantPermission; // @synthesize myParticipantPermission=_myParticipantPermission;
@property(nonatomic) long long myParticipantRole; // @synthesize myParticipantRole=_myParticipantRole;
@property(nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSDate *shareModificationDate; // @synthesize shareModificationDate=_shareModificationDate;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000324c3b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003249dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032479a
- (id)CKPropertiesDescription;	// IMP=0x00000000003245b0
@property(nonatomic) struct _OpaquePCSShareProtection *invitedPCS;
- (void)dealloc;	// IMP=0x0000000000324389
- (id)initWithShareID:(id)arg1 pcsData:(id)arg2;	// IMP=0x0000000000323ff3

@end

