//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveRequestHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f7a0b
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f795e
- (unsigned long long)hash;	// IMP=0x00000000000f7911
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f7849
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f77ab
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f773a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f769f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f7692
- (id)dictionaryRepresentation;	// IMP=0x00000000000f747c
- (id)description;	// IMP=0x00000000000f73cd

@end

