//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPersistentHistoryTransaction;

__attribute__((visibility("hidden")))
@interface _PFBatchHistoryFaultingArray
{
    NSPersistentHistoryTransaction *_transaction;	// 72 = 0x48
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000006be11
- (Class)classForCoder;	// IMP=0x000000000006be00
- (void)_setTransaction:(id)arg1;	// IMP=0x000000000006bdc5
- (id)transaction;	// IMP=0x000000000006bd8c
- (id)initWithPFBatchFaultingArray:(id)arg1;	// IMP=0x000000000006bd56

@end

