//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSArrayReversed : NSArray
{
    id _array;	// 8 = 0x8
    unsigned long long _cnt;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x000000000012af20
- (id)initWithArray:(id)arg1;	// IMP=0x000000000012aed7
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000012ade1
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012ad67
- (unsigned long long)count;	// IMP=0x000000000012ad5b

@end

