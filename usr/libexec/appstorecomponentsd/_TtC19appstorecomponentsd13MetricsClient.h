//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd13MetricsClient : NSObject
{
    MISSING_TYPE *bag;	// 0 = 0x0
    MISSING_TYPE *metricsPipeline;	// 0 = 0x0
    MISSING_TYPE *metricsService;	// 0 = 0x0
    MISSING_TYPE *metricsLogger;	// 0 = 0x0
    MISSING_TYPE *signpostExtractor;	// 0 = 0x0
    MISSING_TYPE *collectionQueue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000097650
- (id)init;	// IMP=0x00100000000975f0
- (void)logErrorMessage:(id)arg1;	// IMP=0x0010000000097590
- (void)recordQToken:(id)arg1 campaignToken:(id)arg2 advertisementID:(id)arg3 withLockup:(id)arg4 withReplyHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000971e0
- (void)recordCampaignToken:(id)arg1 providerToken:(id)arg2 withLockup:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000096de0
- (void)processViewRenderWithPredicate:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000096a80
- (void)processMetricsData:(id)arg1 pageFields:(id)arg2 activity:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000096350

@end

