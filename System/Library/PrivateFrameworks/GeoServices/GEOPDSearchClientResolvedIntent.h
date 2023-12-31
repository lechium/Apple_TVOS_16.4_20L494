//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchClientResolvedIntent : PBCodable
{
    NSString *_name;	// 8 = 0x8
    int _resolvedItemType;	// 16 = 0x10
    struct {
        unsigned int has_resolvedItemType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000a9f434
- (unsigned long long)hash;	// IMP=0x0000000000a9f3e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a9f320
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a9f288
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a9f224
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a9f215
- (id)jsonRepresentation;	// IMP=0x0000000000a9ef7f
- (id)dictionaryRepresentation;	// IMP=0x0000000000a9ee79
- (id)description;	// IMP=0x0000000000a9edca

@end

