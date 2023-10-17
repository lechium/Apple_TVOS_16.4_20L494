//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoPoint;

__attribute__((visibility("hidden")))
@interface VCPProtoLine : PBCodable
{
    VCPProtoPoint *_end;	// 8 = 0x8
    VCPProtoPoint *_start;	// 16 = 0x10
}

+ (id)lineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00100000000b7a18
- (void).cxx_destruct;	// IMP=0x00000000002674ee
@property(retain, nonatomic) VCPProtoPoint *end; // @synthesize end=_end;
@property(retain, nonatomic) VCPProtoPoint *start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000026740d
- (unsigned long long)hash;	// IMP=0x00000000002673c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002672f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026725a
- (void)copyTo:(id)arg1;	// IMP=0x00000000002671e9
- (void)writeTo:(id)arg1;	// IMP=0x000000000026718a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026717d
- (id)dictionaryRepresentation;	// IMP=0x0000000000266ecf
- (id)description;	// IMP=0x0000000000266e20
- (struct CGPoint)endPointValue;	// IMP=0x00000000000b7b41
- (struct CGPoint)startPointValue;	// IMP=0x00000000000b7ae7

@end

