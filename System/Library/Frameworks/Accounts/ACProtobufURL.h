//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ACProtobufURL : PBCodable
{
    NSString *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000054c68
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000054c1f
- (unsigned long long)hash;	// IMP=0x0000000000054c02
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054b68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054af0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000054acd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000054ab0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000054aa3
- (id)dictionaryRepresentation;	// IMP=0x00000000000548d4
- (id)description;	// IMP=0x0000000000054825
@property(retain, nonatomic) NSURL *url;
- (id)initWithURL:(id)arg1;	// IMP=0x000000000004f52e

@end

