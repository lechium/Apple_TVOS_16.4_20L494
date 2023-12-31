//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface APSConnectionHistory : NSObject
{
    double _highQualityThresholdConnectedTime;	// 8 = 0x8
    double _lowQualityThresholdConnectedTime;	// 16 = 0x10
    long long _connectionQuality[2];	// 24 = 0x18
    NSMutableArray *_connectionHistory[2];	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000015545
@property(nonatomic) double lowQualityThresholdConnectedTime; // @synthesize lowQualityThresholdConnectedTime=_lowQualityThresholdConnectedTime;
@property(nonatomic) double highQualityThresholdConnectedTime; // @synthesize highQualityThresholdConnectedTime=_highQualityThresholdConnectedTime;
- (id)connectionHistoryOnInterface:(long long)arg1;	// IMP=0x001000000001543c
- (double)connectedTimeInPastOneDayOnInterface:(long long)arg1;	// IMP=0x0010000000014f95
- (void)adjustQualityOfConnectionOnInterface:(long long)arg1;	// IMP=0x0010000000014e13
- (long long)connectionQualityOnInterface:(long long)arg1;	// IMP=0x0010000000014d43
- (void)noteDisconnectOnInterface:(long long)arg1;	// IMP=0x0010000000014b6f
- (void)noteNewConnectionOnInterface:(long long)arg1;	// IMP=0x0010000000014a15
- (id)init;	// IMP=0x0010000000014995

@end

