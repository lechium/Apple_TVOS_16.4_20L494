//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MPPSearchStringPredicate : PBCodable
{
    NSMutableArray *_properties;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017481a
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (unsigned long long)hash;	// IMP=0x0000000000174783
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001746d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001744ff
- (void)copyTo:(id)arg1;	// IMP=0x00000000001743e8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000174275
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000174268
- (id)dictionaryRepresentation;	// IMP=0x00000000001741e5
- (id)description;	// IMP=0x0000000000174136
- (id)propertiesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000174119
- (unsigned long long)propertiesCount;	// IMP=0x00000000001740fc
- (void)addProperties:(id)arg1;	// IMP=0x0000000000174092
- (void)clearProperties;	// IMP=0x0000000000174075
@property(readonly, nonatomic) _Bool hasSearchString;
- (void)dealloc;	// IMP=0x0000000000174009

@end

