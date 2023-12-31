//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CSDMessagingLinkSyncCheckInMessage : PBCodable
{
    NSMutableArray *_generateDescriptorInfos;	// 8 = 0x8
    NSMutableArray *_generatorDescriptors;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _shouldCheckAllGenerators;	// 28 = 0x1c
    struct {
        unsigned int version:1;
        unsigned int shouldCheckAllGenerators:1;
    } _has;	// 32 = 0x20
}

+ (Class)generateDescriptorInfosType;	// IMP=0x002000000019e871
+ (Class)generatorDescriptorsType;	// IMP=0x001000000019e79f
- (void).cxx_destruct;	// IMP=0x002000000019fd1f
@property(retain, nonatomic) NSMutableArray *generateDescriptorInfos; // @synthesize generateDescriptorInfos=_generateDescriptorInfos;
@property(retain, nonatomic) NSMutableArray *generatorDescriptors; // @synthesize generatorDescriptors=_generatorDescriptors;
@property(nonatomic) _Bool shouldCheckAllGenerators; // @synthesize shouldCheckAllGenerators=_shouldCheckAllGenerators;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019fa37
- (unsigned long long)hash;	// IMP=0x001000000019f99a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019f86d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019f523
- (void)copyTo:(id)arg1;	// IMP=0x001000000019f3a2
- (void)writeTo:(id)arg1;	// IMP=0x001000000019f14d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019f140
- (id)dictionaryRepresentation;	// IMP=0x001000000019e931
- (id)description;	// IMP=0x001000000019e882
- (id)generateDescriptorInfosAtIndex:(unsigned long long)arg1;	// IMP=0x001000000019e854
- (unsigned long long)generateDescriptorInfosCount;	// IMP=0x001000000019e837
- (void)addGenerateDescriptorInfos:(id)arg1;	// IMP=0x001000000019e7cd
- (void)clearGenerateDescriptorInfos;	// IMP=0x001000000019e7b0
- (id)generatorDescriptorsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000019e782
- (unsigned long long)generatorDescriptorsCount;	// IMP=0x001000000019e765
- (void)addGeneratorDescriptors:(id)arg1;	// IMP=0x001000000019e6fb
- (void)clearGeneratorDescriptors;	// IMP=0x001000000019e6de
@property(nonatomic) _Bool hasShouldCheckAllGenerators;
@property(nonatomic) _Bool hasVersion;

@end

