//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TVHomeSharingKit)
+ (id)tvhk_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;	// IMP=0x00800000000455f8
+ (id)tvhk_uppercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00800000000455e3
+ (id)tvhk_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00800000000455cb
- (id)tvhk_dataFromHexString;	// IMP=0x00100000000454dd
- (unsigned long long)tvhk_hexValue;	// IMP=0x0010000000045421
@end

