//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSceneprintResult : PBCodable
{
    NSData *_sceneprintBlob;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000638e4
- (void).cxx_destruct;	// IMP=0x0000000000068597
@property(retain, nonatomic) NSData *sceneprintBlob; // @synthesize sceneprintBlob=_sceneprintBlob;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006854e
- (unsigned long long)hash;	// IMP=0x0000000000068531
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068497
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006841f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000683fc
- (void)writeTo:(id)arg1;	// IMP=0x00000000000683df
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000683d2
- (id)dictionaryRepresentation;	// IMP=0x0000000000068203
- (id)description;	// IMP=0x0000000000068154
- (id)exportToLegacyDictionary;	// IMP=0x00000000000639bf

@end

