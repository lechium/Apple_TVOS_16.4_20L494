//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LanguageModeling/NSObject-Protocol.h>

@class NSNotificationCenter;

@protocol LMTrialDataSource <NSObject>
@property(readonly) NSNotificationCenter *notificationCenter;
- (optional_afd5a9ac)loadParametersWithLocaleIdentifier:(const void *)arg1;
- (void)startWithParametersUpdateCallback:(function_331668d4)arg1;
@end

