//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSDictionary, NSLocale;

@protocol LMTrialProvider <NSObject>
- (void)registerUpdateCallback:(void (^)(void))arg1;
- (NSDictionary *)encodedTrialParametersForLocale:(NSLocale *)arg1;
@end

