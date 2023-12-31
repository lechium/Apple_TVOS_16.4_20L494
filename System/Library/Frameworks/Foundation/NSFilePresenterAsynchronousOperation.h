//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOperation.h"

__attribute__((visibility("hidden")))
@interface NSFilePresenterAsynchronousOperation : NSOperation
{
    CDUnknownBlockType _block;	// 8 = 0x8
    _Bool _isFinished;	// 16 = 0x10
    _Bool _isExecuting;	// 17 = 0x11
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00600000005b4cf0
- (void)finish;	// IMP=0x00000000005b4db2
- (_Bool)isFinished;	// IMP=0x00000000005b4da2
- (_Bool)isExecuting;	// IMP=0x00000000005b4d92
- (_Bool)isAsynchronous;	// IMP=0x00000000005b4d8a
- (void)start;	// IMP=0x00000000005b4d29

@end

