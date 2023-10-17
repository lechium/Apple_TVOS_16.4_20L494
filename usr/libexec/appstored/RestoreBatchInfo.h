//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSMutableArray;

@interface RestoreBatchInfo : NSObject
{
    _Bool _failCoordinators;	// 8 = 0x8
    _Bool _autoFinish;	// 9 = 0x9
    _Bool _userInitiated;	// 10 = 0xa
    ACAccount *_account;	// 16 = 0x10
    long long _batchSize;	// 24 = 0x18
    NSMutableArray *_hardFailures;	// 32 = 0x20
    NSMutableArray *_softFailures;	// 40 = 0x28
    NSMutableArray *_successes;	// 48 = 0x30
    NSMutableArray *_tokenFailures;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000cf3c6

@end

