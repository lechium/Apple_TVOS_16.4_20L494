//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode
{
    id *_attributes;	// 48 = 0x30
    id _attributesAsEncoded;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000088322
+ (void)initialize;	// IMP=0x00100000000882ca
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000088925
- (void)dealloc;	// IMP=0x000000000008885d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008870b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008832a
- (id)initWithValues:(id *)arg1 objectID:(id)arg2;	// IMP=0x00000000000882db

@end

