//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface PBMutableData : NSMutableData
{
    char *p;	// 8 = 0x8
    char *buffer;	// 16 = 0x10
    char *end;	// 24 = 0x18
}

- (void *)mutableBytes;	// IMP=0x00000000000044c1
- (const void *)bytes;	// IMP=0x00000000000044b0
- (void)setLength:(unsigned long long)arg1;	// IMP=0x0000000000004457
- (unsigned long long)length;	// IMP=0x000000000000443b
- (void)dealloc;	// IMP=0x00000000000043fa
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000043b1

@end

