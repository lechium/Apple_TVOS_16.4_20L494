//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/MTEventRecorderDelegate-Protocol.h>

@class NSDictionary, NSSet;

@protocol MTEventListenerDelegate <MTEventRecorderDelegate>

@optional
- (_Bool)shouldRecordEvent:(NSDictionary *)arg1;
- (NSSet *)allowlistedFields;
- (NSSet *)whitelistedFields;
@end

