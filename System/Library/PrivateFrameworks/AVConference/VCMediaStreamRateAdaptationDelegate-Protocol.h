//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class VCMediaStreamRateAdaptation;

@protocol VCMediaStreamRateAdaptationDelegate <NSObject>
- (void)rateAdaptation:(VCMediaStreamRateAdaptation *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
@end
