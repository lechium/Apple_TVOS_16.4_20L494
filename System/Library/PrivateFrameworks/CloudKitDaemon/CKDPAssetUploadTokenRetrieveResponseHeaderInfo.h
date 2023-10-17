//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveResponseHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057049
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000056f9c
- (unsigned long long)hash;	// IMP=0x0000000000056f4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056e87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056de9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000056d78
- (void)writeTo:(id)arg1;	// IMP=0x0000000000056cdd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000056cd0
- (id)dictionaryRepresentation;	// IMP=0x0000000000056aba
- (id)description;	// IMP=0x0000000000056a0b

@end
