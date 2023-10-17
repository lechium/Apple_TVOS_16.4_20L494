//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable
{
    NSMutableArray *_conflictLoserEtags;	// 8 = 0x8
}

+ (Class)conflictLoserEtagsType;	// IMP=0x00100000002c722b
- (void).cxx_destruct;	// IMP=0x00000000002c7aa6
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002c794c
- (unsigned long long)hash;	// IMP=0x00000000002c792f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c7895
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c76d2
- (void)copyTo:(id)arg1;	// IMP=0x00000000002c7613
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c74e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c74d6
- (id)dictionaryRepresentation;	// IMP=0x00000000002c72eb
- (id)description;	// IMP=0x00000000002c723c
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002c720e
- (unsigned long long)conflictLoserEtagsCount;	// IMP=0x00000000002c71f1
- (void)addConflictLoserEtags:(id)arg1;	// IMP=0x00000000002c7187
- (void)clearConflictLoserEtags;	// IMP=0x00000000002c716a

@end

