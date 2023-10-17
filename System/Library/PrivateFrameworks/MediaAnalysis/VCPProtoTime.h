//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoTime : PBCodable
{
    long long _epoch;	// 8 = 0x8
    long long _value;	// 16 = 0x10
    unsigned int _flags;	// 24 = 0x18
    int _timescale;	// 28 = 0x1c
}

+ (id)timeWithCMTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0010000000051759
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) int timescale; // @synthesize timescale=_timescale;
@property(nonatomic) long long value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ea138
- (unsigned long long)hash;	// IMP=0x00000000000ea0ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea042
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9fc6
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e9f88
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e9ef9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e9eec
- (id)dictionaryRepresentation;	// IMP=0x00000000000e99fb
- (id)description;	// IMP=0x00000000000e994c
- (CDStruct_1b6d18a9)timeValue;	// IMP=0x00000000000517c4

@end

