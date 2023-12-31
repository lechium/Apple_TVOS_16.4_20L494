//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_semaphore;

@interface GKResourceIdentifier : NSObject
{
    NSArray *_keys;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 16 = 0x10
    NSString *_queueName;	// 24 = 0x18
}

+ (id)resourceIdentifierForKeys:(id)arg1;	// IMP=0x00200000000c8e18
+ (id)resourceIdentifiersForBagKeys:(id)arg1;	// IMP=0x00100000000c8cfa
- (void).cxx_destruct;	// IMP=0x00200000000c9062
@property(readonly, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (id)description;	// IMP=0x00100000000c8fad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c8f56
- (unsigned long long)hash;	// IMP=0x00100000000c8e65
- (void)signal;	// IMP=0x00100000000c8cec
- (_Bool)wait:(double)arg1;	// IMP=0x00100000000c8ca1
- (id)initWithKeys:(id)arg1;	// IMP=0x00100000000c8a04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c89cb

@end

