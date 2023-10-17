//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface URLBagTimer : NSObject
{
    NSString *_bagKey;	// 8 = 0x8
    NSString *_cellularBagKey;	// 16 = 0x10
    double _defaultInterval;	// 24 = 0x18
    double _defaultWindow;	// 32 = 0x20
    CDUnknownBlockType _eventBlock;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    CDUnknownBlockType _preconditionsBlock;	// 64 = 0x40
    id _taskObserver;	// 72 = 0x48
}

+ (id)subscriptionRenewTimer;	// IMP=0x00400000000ecc29
- (void).cxx_destruct;	// IMP=0x00200000000ed7a6
@property(copy, nonatomic) CDUnknownBlockType preconditionsBlock; // @synthesize preconditionsBlock=_preconditionsBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) double defaultWindow; // @synthesize defaultWindow=_defaultWindow;
@property(nonatomic) double defaultInterval; // @synthesize defaultInterval=_defaultInterval;
@property(copy, nonatomic) NSString *cellularBagKey; // @synthesize cellularBagKey=_cellularBagKey;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (double)_windowWithUserDefaultsKey:(id)arg1;	// IMP=0x00100000000ed694
- (id)_userDefaultsKeyWindowOverride;	// IMP=0x00100000000ed677
- (id)_userDefaultsKeyWiFiOverride;	// IMP=0x00100000000ed65a
- (id)_userDefaultsKeyLastTimeCheck;	// IMP=0x00100000000ed63d
- (id)_userDefaultsKeyCellularOverride;	// IMP=0x00100000000ed620
- (double)_timerIntervalWithBagKey:(id)arg1 userDefaultsKey:(id)arg2;	// IMP=0x00100000000ed4cd
- (double)_timerInterval;	// IMP=0x00100000000ed3ed
- (void)_setLastFireDate:(id)arg1;	// IMP=0x00100000000ed37c
- (void)_resetBackgroundTaskJobs;	// IMP=0x00100000000ed376
- (double)_readTimeIntervalFromUserDefaultsKey:(id)arg1;	// IMP=0x00100000000ed2ae
- (id)_nextFireDateWithInterval:(double)arg1;	// IMP=0x00100000000ed11d
- (void)_fireTimer;	// IMP=0x00100000000ed04e
- (void)_attemptFireForJob:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000ed048
- (void)_addJobWithDate:(id)arg1 window:(double)arg2 allowsCellular:(_Bool)arg3;	// IMP=0x00100000000ed042
- (void)start;	// IMP=0x00100000000ecd78
- (void)reset;	// IMP=0x00100000000ecd16
- (void)invalidate;	// IMP=0x00100000000ecc9d
- (void)dealloc;	// IMP=0x00100000000ecbac
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000ec9bf

@end
