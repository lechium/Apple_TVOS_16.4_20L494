//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class KeepAlive, NSError, NSLock;

@interface Task : NSOperation
{
    KeepAlive *_keepAlive;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000010abe5
- (void)unlock;	// IMP=0x001000000010abb5
- (_Bool)runSubTask:(id)arg1 returningError:(id *)arg2;	// IMP=0x001000000010aab1
- (_Bool)runTaskReturningError:(id *)arg1;	// IMP=0x001000000010a8ba
- (void)lock;	// IMP=0x001000000010a89d
- (void)completeWithSuccess;	// IMP=0x001000000010a836
- (void)completeWithError:(id)arg1;	// IMP=0x001000000010a7a6
- (id)initWithoutKeepAlive;	// IMP=0x001000000010a749
- (id)init;	// IMP=0x001000000010a67e

@end

