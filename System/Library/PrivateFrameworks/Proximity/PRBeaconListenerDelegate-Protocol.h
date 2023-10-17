//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Proximity/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, PRBeaconListener;

@protocol PRBeaconListenerDelegate <NSObject>
- (void)beaconListener:(PRBeaconListener *)arg1 didFailWithError:(NSError *)arg2;
- (void)beaconListener:(PRBeaconListener *)arg1 didChangeState:(unsigned long long)arg2;

@optional
- (void)beaconListener:(PRBeaconListener *)arg1 didOutputRangeResults:(NSArray *)arg2;
- (void)beaconListener:(PRBeaconListener *)arg1 didOutputSuperframeStats:(NSDictionary *)arg2;
@end

