//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDistributedTimestamps, CKDPProtectionInfo, NSData, NSMutableArray, NSString;

@interface CKDPMergeableDeltaMetadata : PBCodable
{
    NSData *_encryptedTimestamps;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    CKDPProtectionInfo *_protectionInfo;	// 24 = 0x18
    NSMutableArray *_replacedDeltaIdentifiers;	// 32 = 0x20
    CKDPDistributedTimestamps *_timestamps;	// 40 = 0x28
    NSData *_timestampsAuthTag;	// 48 = 0x30
}

+ (Class)replacedDeltaIdentifiersType;	// IMP=0x001000000031f4e6
- (void).cxx_destruct;	// IMP=0x00000000003204de
@property(retain, nonatomic) NSMutableArray *replacedDeltaIdentifiers; // @synthesize replacedDeltaIdentifiers=_replacedDeltaIdentifiers;
@property(retain, nonatomic) NSData *timestampsAuthTag; // @synthesize timestampsAuthTag=_timestampsAuthTag;
@property(retain, nonatomic) CKDPDistributedTimestamps *timestamps; // @synthesize timestamps=_timestamps;
@property(retain, nonatomic) NSData *encryptedTimestamps; // @synthesize encryptedTimestamps=_encryptedTimestamps;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003201d5
- (unsigned long long)hash;	// IMP=0x0000000000320117
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031ff83
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031fd0b
- (void)copyTo:(id)arg1;	// IMP=0x000000000031fba9
- (void)writeTo:(id)arg1;	// IMP=0x000000000031f9e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031f9dc
- (id)dictionaryRepresentation;	// IMP=0x000000000031f5a6
- (id)description;	// IMP=0x000000000031f4f7
- (id)replacedDeltaIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000031f4c9
- (unsigned long long)replacedDeltaIdentifiersCount;	// IMP=0x000000000031f4ac
- (void)addReplacedDeltaIdentifiers:(id)arg1;	// IMP=0x000000000031f442
- (void)clearReplacedDeltaIdentifiers;	// IMP=0x000000000031f425
@property(readonly, nonatomic) _Bool hasTimestampsAuthTag;
@property(readonly, nonatomic) _Bool hasTimestamps;
@property(readonly, nonatomic) _Bool hasEncryptedTimestamps;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

