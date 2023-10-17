//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI;

@interface IDSDestinationURI : IDSDestination
{
    IDSURI *_uri;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000cbcf1
- (void).cxx_destruct;	// IMP=0x00000000000cc1ba
@property(readonly, nonatomic) IDSURI *uri; // @synthesize uri=_uri;
- (id)description;	// IMP=0x00000000000cc121
- (id)destinationLightweightStatus;	// IMP=0x00000000000cc051
- (id)destinationURIs;	// IMP=0x00000000000cbfae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cbfa3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cbf2a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cbe32
- (id)initWithURIString:(id)arg1;	// IMP=0x00000000000cbd67
- (id)initWithURI:(id)arg1;	// IMP=0x00000000000cbcf9

@end

