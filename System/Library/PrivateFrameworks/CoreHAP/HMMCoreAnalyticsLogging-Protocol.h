//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol HMMCoreAnalyticsLogging <NSObject>
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;

@optional
+ (_Bool)submitEventWithDurationInMilliseconds;
+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property(readonly, nonatomic) _Bool logEventWithAppendedCommonDimensions;
@property(readonly, nonatomic) NSString *accessoryIdentifier;
- (NSUUID *)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
@end

