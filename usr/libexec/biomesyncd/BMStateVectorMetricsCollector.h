//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;
@protocol OS_xpc_object;

@interface BMStateVectorMetricsCollector : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
    NSObject<OS_xpc_object> *_activity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000ce6a
- (unsigned long long)timestampCountForStateVector:(id)arg1;	// IMP=0x001000000000cd9d
- (unsigned long long)sizeOfSerializedStateVectorInBytes:(id)arg1;	// IMP=0x001000000000ccbd
- (id)dateToRelativePositionDictionary;	// IMP=0x001000000000cb90
- (id)computeStateVectorMetrics;	// IMP=0x001000000000c202
- (void)computeAndSendStateVectorMetrics;	// IMP=0x001000000000c0ca
- (id)initWithDatabase:(id)arg1 activity:(id)arg2;	// IMP=0x001000000000c031

@end
