//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TFImageUpload : PBCodable
{
    NSString *_uploadUrl;	// 8 = 0x8
    NSString *_xiCloudVersionIdHeader;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000087de2
- (void).cxx_destruct;	// IMP=0x001000000003fce4
- (unsigned long long)hash;	// IMP=0x001000000003fc97
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003fbcf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003fb31
- (void)writeTo:(id)arg1;	// IMP=0x001000000003faa0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003fa93
- (id)dictionaryRepresentation;	// IMP=0x001000000003f87d
- (id)description;	// IMP=0x001000000003f7ce
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000087e65
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000087dea

@end

