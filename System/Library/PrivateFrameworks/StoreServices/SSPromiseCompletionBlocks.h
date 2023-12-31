//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SSPromiseCompletionBlocks : NSObject
{
    NSMutableArray *_completionBlocks;	// 8 = 0x8
    _Bool _shouldCallImmediately;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017e443
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;	// IMP=0x000000000017e20a
- (void)callSuccessBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000017e15d
- (void)callErrorBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000017e0ad
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000017e009
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017df66
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017dec0
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017de29
- (id)init;	// IMP=0x000000000017ddd3

@end

