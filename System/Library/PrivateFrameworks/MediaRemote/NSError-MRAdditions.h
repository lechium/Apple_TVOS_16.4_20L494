//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MRAdditions)
- (id)mr_protobuf;	// IMP=0x0030000000191ddb
- (id)mr_initWithProtobuf:(id)arg1;	// IMP=0x0030000000191bc1
@property(readonly, nonatomic, getter=isInformational) _Bool informational; // @dynamic informational;
- (id)recursiveUnderlyingError;	// IMP=0x0030000000191a8e
- (id)mr_errorByEnvelopingWithMRError:(long long)arg1;	// IMP=0x00300000001919d3
- (id)initWithMRError:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0030000000191911
- (id)initWithMRError:(long long)arg1 description:(id)arg2;	// IMP=0x0030000000191867
- (id)initWithMRError:(long long)arg1 format:(id)arg2;	// IMP=0x0030000000191745
- (id)initWithMRError:(long long)arg1;	// IMP=0x0030000000191731
@end
