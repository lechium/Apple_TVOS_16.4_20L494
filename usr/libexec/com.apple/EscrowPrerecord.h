//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface EscrowPrerecord : PBCodable
{
    NSString *_bottleID;	// 8 = 0x8
    NSString *_dsid;	// 16 = 0x10
    NSData *_duplicateEscrowBlob;	// 24 = 0x18
    NSString *_escrowBaseURL;	// 32 = 0x20
    NSData *_escrowBlob;	// 40 = 0x28
    NSData *_escrowedSPKI;	// 48 = 0x30
    NSString *_iCloudEnvironment;	// 56 = 0x38
    int _passphraseType;	// 64 = 0x40
    NSData *_sosBackupKeybagDigest;	// 72 = 0x48
    NSData *_sosBackupKeybagPassword;	// 80 = 0x50
    NSString *_sosPeerID;	// 88 = 0x58
    NSString *_timestamp;	// 96 = 0x60
    struct {
        unsigned int passphraseType:1;
    } _has;	// 104 = 0x68
}

+ (id)createPrerecordFromCandidate:(id)arg1 storedCertificate:(id)arg2 request:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000560d5
- (void).cxx_destruct;	// IMP=0x001000000004a8aa
@property(retain, nonatomic) NSData *duplicateEscrowBlob; // @synthesize duplicateEscrowBlob=_duplicateEscrowBlob;
@property(retain, nonatomic) NSData *escrowedSPKI; // @synthesize escrowedSPKI=_escrowedSPKI;
@property(retain, nonatomic) NSString *bottleID; // @synthesize bottleID=_bottleID;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *sosBackupKeybagDigest; // @synthesize sosBackupKeybagDigest=_sosBackupKeybagDigest;
@property(retain, nonatomic) NSData *sosBackupKeybagPassword; // @synthesize sosBackupKeybagPassword=_sosBackupKeybagPassword;
@property(retain, nonatomic) NSString *sosPeerID; // @synthesize sosPeerID=_sosPeerID;
@property(retain, nonatomic) NSData *escrowBlob; // @synthesize escrowBlob=_escrowBlob;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSString *escrowBaseURL; // @synthesize escrowBaseURL=_escrowBaseURL;
@property(retain, nonatomic) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004a570
- (unsigned long long)hash;	// IMP=0x001000000004a40f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004a146
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000049f16
- (void)copyTo:(id)arg1;	// IMP=0x0010000000049d73
- (void)writeTo:(id)arg1;	// IMP=0x0010000000049bed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000049be0
- (id)dictionaryRepresentation;	// IMP=0x0010000000049622
- (id)description;	// IMP=0x0010000000049573
@property(readonly, nonatomic) _Bool hasDuplicateEscrowBlob;
- (int)StringAsPassphraseType:(id)arg1;	// IMP=0x00100000000494af
- (id)passphraseTypeAsString:(int)arg1;	// IMP=0x0010000000049466
@property(nonatomic) _Bool hasPassphraseType;
@property(nonatomic) int passphraseType; // @synthesize passphraseType=_passphraseType;
@property(readonly, nonatomic) _Bool hasEscrowedSPKI;
@property(readonly, nonatomic) _Bool hasBottleID;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSosBackupKeybagDigest;
@property(readonly, nonatomic) _Bool hasSosBackupKeybagPassword;
@property(readonly, nonatomic) _Bool hasSosPeerID;
@property(readonly, nonatomic) _Bool hasEscrowBlob;
@property(readonly, nonatomic) _Bool hasDsid;
@property(readonly, nonatomic) _Bool hasEscrowBaseURL;
@property(readonly, nonatomic) _Bool hasICloudEnvironment;
- (id)initWithCandidate:(id)arg1 certificate:(id)arg2 escrowBlob:(id)arg3 passphraseType:(int)arg4;	// IMP=0x0010000000055e8c

@end

