//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPromisedInMemoryDataSeed, NSData;

@interface IXSPromisedInMemoryData
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003b94e
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithSeed:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003b956
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003b8c9
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003b89a

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedInMemoryDataSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedInMemoryDataSeed *seed; // @dynamic seed;

@end

