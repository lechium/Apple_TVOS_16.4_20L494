//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class FigCaptureFlatPlist;

__attribute__((visibility("hidden")))
@interface FigCaptureFlatPlistArray : NSArray
{
    FigCaptureFlatPlist *_flatPlist;	// 8 = 0x8
    const CDStruct_80d302cf *_bplist;	// 16 = 0x10
    unsigned long long _offset;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
}

- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000044f1
- (unsigned long long)count;	// IMP=0x00000000000044e0
- (void)dealloc;	// IMP=0x000000000000449e
- (id)initWithFlatPlist:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000004404

@end

