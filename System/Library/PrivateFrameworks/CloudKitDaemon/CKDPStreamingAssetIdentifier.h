//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKDPStreamingAssetIdentifier : PBCodable
{
    NSData *_fileSignature;	// 8 = 0x8
    NSString *_owner;	// 16 = 0x10
    NSData *_referenceSignature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a2b55
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a2a63
- (unsigned long long)hash;	// IMP=0x00000000000a29f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a28fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a283a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a27b7
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a273d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a2730
- (id)dictionaryRepresentation;	// IMP=0x00000000000a24d7
- (id)description;	// IMP=0x00000000000a2428
@property(readonly, nonatomic) _Bool hasReferenceSignature;
@property(readonly, nonatomic) _Bool hasFileSignature;
@property(readonly, nonatomic) _Bool hasOwner;

@end
