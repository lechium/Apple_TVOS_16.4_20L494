//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (IconFoundationAdditions)
+ (id)_IF_UUIDByXORingUUIDs:(id)arg1;	// IMP=0x00500000000129b8
+ (id)_IF_UUIDWithBytes:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00500000000128da
+ (id)_IF_nullUUID;	// IMP=0x005000000001286e
+ (id)_IF_UUIDWithOSType:(unsigned int)arg1;	// IMP=0x005000000001282f
+ (id)_IF_UUIDWithDouble:(double)arg1;	// IMP=0x00500000000127f1
+ (id)_IF_UUIDWithInt64:(long long)arg1;	// IMP=0x00500000000127b1
+ (id)_IF_UUIDWithString:(id)arg1;	// IMP=0x0050000000012713
+ (id)_IF_UUIDWithData:(id)arg1;	// IMP=0x0050000000012694
- (void)_IF_getUUIDBytes:(char *)arg1 hash64:(unsigned long long *)arg2;	// IMP=0x001000000001297e
@end

