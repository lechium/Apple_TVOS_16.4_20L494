//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOFeatureStyleAttributes, MKMapSnapshotOptions;

@protocol MKSnapshotServiceProtocol
- (void)requestIconWithStyleAttributes:(GEOFeatureStyleAttributes *)arg1 size:(unsigned long long)arg2 scale:(double)arg3 completionHandler:(void (^)(UIImage *))arg4;
- (void)requestSnapshotWithOptions:(MKMapSnapshotOptions *)arg1 completionHandler:(void (^)(VKMapSnapshot *, NSError *))arg2;
@end

