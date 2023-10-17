//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAudioAnalysisRequest, NSError;
@protocol SNResult;

@protocol HMDAudioAnalysisRequestDelegate <NSObject>
- (void)request:(HMDAudioAnalysisRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidComplete:(HMDAudioAnalysisRequest *)arg1;

@optional
- (void)request:(HMDAudioAnalysisRequest *)arg1 didProduceResult:(id <SNResult>)arg2;
@end

