//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator
{
    NSDictionary *_keyplaneCache;	// 8 = 0x8
    NSEnumerator *_nameEnum;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000008c0fb0
- (id)nextObject;	// IMP=0x00000000008c0e2e
- (id)initWithKeyplaneCache:(id)arg1;	// IMP=0x00000000008c0d78

@end

