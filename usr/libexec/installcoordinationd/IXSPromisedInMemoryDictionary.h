//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPromisedInMemoryDictionarySeed, NSDictionary;

@interface IXSPromisedInMemoryDictionary
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002fa74
@property(readonly, copy, nonatomic) NSDictionary *dictionary;
- (id)initWithSeed:(id)arg1 dictionary:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002fa7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002f9ef
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002f9c0

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedInMemoryDictionarySeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedInMemoryDictionarySeed *seed; // @dynamic seed;

@end
