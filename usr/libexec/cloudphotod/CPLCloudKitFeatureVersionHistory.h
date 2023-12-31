//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CPLCloudKitFeatureVersionHistory : PBCodable
{
    NSMutableArray *_featureVersions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013f1e4
@property(retain, nonatomic) NSMutableArray *featureVersions; // @synthesize featureVersions=_featureVersions;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000013f08a
- (unsigned long long)hash;	// IMP=0x001000000013f06d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013efd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013ee10
- (void)copyTo:(id)arg1;	// IMP=0x001000000013ed51
- (void)writeTo:(id)arg1;	// IMP=0x001000000013ec21
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000013ec14
- (id)dictionaryRepresentation;	// IMP=0x001000000013e817
- (id)description;	// IMP=0x001000000013e768
- (id)featureVersionAtIndex:(unsigned long long)arg1;	// IMP=0x001000000013e74b
- (unsigned long long)featureVersionsCount;	// IMP=0x001000000013e72e
- (void)addFeatureVersion:(id)arg1;	// IMP=0x001000000013e6c4
- (void)clearFeatureVersions;	// IMP=0x001000000013e6a7

@end

