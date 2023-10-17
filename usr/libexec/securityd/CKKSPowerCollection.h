//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSMutableDictionary;

@interface CKKSPowerCollection : NSOperation
{
    NSMutableDictionary *_store;	// 8 = 0x8
    NSMutableDictionary *_delete;	// 16 = 0x10
}

+ (void)OTPowerEvent:(id)arg1;	// IMP=0x004000000004755e
+ (void)CKKSPowerEvent:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000004747d
+ (void)CKKSPowerEvent:(id)arg1 zone:(id)arg2 count:(unsigned long long)arg3;	// IMP=0x0010000000047379
+ (void)CKKSPowerEvent:(id)arg1 zone:(id)arg2;	// IMP=0x00100000000472b1
- (void).cxx_destruct;	// IMP=0x0020000000047280
@property(retain) NSMutableDictionary *delete; // @synthesize delete=_delete;
@property(retain) NSMutableDictionary *store; // @synthesize store=_store;
- (void)commit;	// IMP=0x00100000000471d8
- (void)summary:(id)arg1 stats:(id)arg2;	// IMP=0x0010000000046fd5
- (void)deletedOQE:(id)arg1;	// IMP=0x0010000000046f79
- (void)storedOQE:(id)arg1;	// IMP=0x0010000000046f1d
- (void)addToStatsDictionary:(id)arg1 key:(id)arg2;	// IMP=0x0010000000046e47
- (id)init;	// IMP=0x0010000000046d9c

@end

