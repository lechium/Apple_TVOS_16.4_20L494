//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSString;

@interface LMTrialDataSource : NSObject
{
}

@property(readonly) NSNotificationCenter *notificationCenter;
- (optional_afd5a9ac)loadParametersWithLocaleIdentifier:(const void *)arg1;	// IMP=0x000000000002c932
- (void)startWithParametersUpdateCallback:(function_331668d4)arg1;	// IMP=0x000000000002c421

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

