//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDTaskAssertion, MRPlayerPath;
@protocol MRTransactionDelegate;

@interface MRTransaction : NSObject
{
    unsigned long long _bytesInUse;	// 8 = 0x8
    MRDTaskAssertion *_taskAssertion;	// 16 = 0x10
    id <MRTransactionDelegate> _delegate;	// 24 = 0x18
    unsigned long long _name;	// 32 = 0x20
    MRPlayerPath *_playerPath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000004c51b
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
@property(nonatomic) __weak id <MRTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_calculateMemory;	// IMP=0x001000000004c4a3
- (void)_transactionEnded;	// IMP=0x001000000004c425
- (void)_query:(id)arg1;	// IMP=0x001000000004bf50
- (void)_processMessage:(id)arg1;	// IMP=0x001000000004bc8a
- (void)cancel;	// IMP=0x001000000004bc32
- (void)send:(id)arg1 toConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ba3e
- (void)dealloc;	// IMP=0x001000000004b9bf
- (double)outOfMemoryWaitDuration;	// IMP=0x001000000004b946
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2;	// IMP=0x001000000004b812
- (id)initWithName:(unsigned long long)arg1 fromMessage:(id)arg2 withDelegate:(id)arg3;	// IMP=0x001000000004b4bd

@end

