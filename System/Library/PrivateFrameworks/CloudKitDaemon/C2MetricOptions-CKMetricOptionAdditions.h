//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <C2/C2MetricOptions.h>

@interface C2MetricOptions (CKMetricOptionAdditions)
+ (id)metricOptionsForEventMetric:(id)arg1 metricType:(long long)arg2 container:(id)arg3 config:(id)arg4 reportingCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00800000000d74ed
+ (id)metricOptionsForNetworkRequest:(id)arg1;	// IMP=0x00800000000d740d
+ (id)metricOptionsForNetworkOperation:(id)arg1;	// IMP=0x00800000000d6efb
- (void)_attributeCurrentContainer:(id)arg1 config:(id)arg2;	// IMP=0x00100000000d6cd2
- (void)_setupC2MetricsEndpointWithContainer:(id)arg1;	// IMP=0x00100000000d6b9f
@end

