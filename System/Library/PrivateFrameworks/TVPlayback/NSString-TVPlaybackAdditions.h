//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TVPlaybackAdditions)
+ (id)tvp_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;	// IMP=0x00800000000a70d4
+ (id)tvp_uppercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00800000000a70bf
+ (id)tvp_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00800000000a70a7
- (id)tvp_dataFromHexString;	// IMP=0x00100000000a6fb9
- (id)tvp_languageCodeWithoutRegion;	// IMP=0x00100000000a6efb
@end
