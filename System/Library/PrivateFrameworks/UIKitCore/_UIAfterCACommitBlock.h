//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIAfterCACommitBlock : NSObject
{
    _UIAfterCACommitBlock *_next;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    _Atomic _Bool _transactionCleared;	// 24 = 0x18
}

+ (id)blockWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x006000000115569b
- (void).cxx_destruct;	// IMP=0x000000000115583c
- (_Bool)run;	// IMP=0x0000000001155778

@end

