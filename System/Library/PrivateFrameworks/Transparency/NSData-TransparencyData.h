//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (TransparencyData)
+ (id)kt_dataWithUint64:(unsigned long long)arg1 length:(unsigned long long)arg2;	// IMP=0x0060000000001473
+ (id)kt_random;	// IMP=0x00600000000013f0
+ (id)kt_dataWithHexString:(const char *)arg1;	// IMP=0x0060000000001005
- (id)kt_sha256WithSalt:(id)arg1;	// IMP=0x0010000000001289
- (id)kt_sha256;	// IMP=0x00100000000011c6
- (id)kt_hexString;	// IMP=0x00100000000010df
@end

