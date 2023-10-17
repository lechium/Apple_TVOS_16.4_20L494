//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityIdentifier.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKDAAPBrowseMediaEntityCollectionIdentifier : TVHKMediaEntityIdentifier
{
    NSString *_browseTitle;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000a4a89
- (void).cxx_destruct;	// IMP=0x00000000000a4f3f
@property(copy, nonatomic) NSString *browseTitle; // @synthesize browseTitle=_browseTitle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a4e93
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a4cc4
- (unsigned long long)hash;	// IMP=0x00000000000a4bf3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a4b5a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4a91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a4a7e
- (id)initWithBrowseTitle:(id)arg1;	// IMP=0x00000000000a4a02
- (id)initWithProtocol:(unsigned long long)arg1;	// IMP=0x00000000000a4993

@end

